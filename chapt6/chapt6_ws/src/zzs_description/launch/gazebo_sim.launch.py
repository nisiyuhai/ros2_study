import launch
import launch_ros
from ament_index_python.packages import get_package_share_directory
from launch.actions import IncludeLaunchDescription, TimerAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
import os
import subprocess


def generate_launch_description():
    urdf_package_path = get_package_share_directory('zzs_description')
    ros_gz_sim_pkg = get_package_share_directory('ros_gz_sim')
    default_xacro_path = os.path.join(urdf_package_path, 'urdf', 'robot.urdf.xacro')
    default_world_path = os.path.join(urdf_package_path, 'world', 'world1.sdf')

    action_declare_arg_model_path = launch.actions.DeclareLaunchArgument(
        name='model',
        default_value=str(default_xacro_path),
        description="模型文件路径"
    )

    action_declare_arg_world_path = launch.actions.DeclareLaunchArgument(
        name='world',
        default_value=str(default_world_path),
        description="Gazebo 世界文件路径"
    )

    action_launch_gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(ros_gz_sim_pkg, 'launch', 'gz_sim.launch.py')
        ),
        launch_arguments={
            'gz_args': f'-r -v 4 --render-engine ogre {default_world_path}'
        }.items()
    )

    def create_robot_nodes(context):
        model_path = launch.substitutions.LaunchConfiguration('model').perform(context)

        if model_path.endswith('.xacro'):
            result = subprocess.run(['xacro', model_path], capture_output=True, text=True)
            if result.returncode != 0:
                raise RuntimeError(f"xacro 解析失败:\n{result.stderr}")
            urdf_content = result.stdout
        else:
            with open(model_path, 'r') as f:
                urdf_content = f.read()

        return [
            launch_ros.actions.Node(
                package='robot_state_publisher',
                executable='robot_state_publisher',
                parameters=[{'robot_description': urdf_content}],
                output='screen'
            ),
            launch_ros.actions.Node(
                package='ros_gz_sim',
                executable='create',
                arguments=[
                    '-world', 'empty',
                    '-name', 'zzs_robot',
                    '-topic', 'robot_description',
                    '-x', '0.0', '-y', '0.0', '-z', '0.15',
                    '-v', '4'
                ],
                output='screen'
            ),
            launch_ros.actions.Node(
                package='ros_gz_bridge',
                executable='parameter_bridge',
                arguments=[
                    '/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock',
                    '/cmd_vel@geometry_msgs/msg/Twist]gz.msgs.Twist',
                    '/odom@nav_msgs/msg/Odometry[gz.msgs.Odometry',
                    '/joint_states@sensor_msgs/msg/JointState[gz.msgs.Model',
                    '/scan@sensor_msgs/msg/LaserScan[gz.msgs.LaserScan',
                    # ★★★ 新增：TF 桥接（GZ -> ROS）★★★
                    '/tf@tf2_msgs/msg/TFMessage[gz.msgs.Pose_V',
                    '/tf_static@tf2_msgs/msg/TFMessage[gz.msgs.Pose_V',
                ],
                output='screen'
            ),
        ]

    action_robot_nodes = launch.actions.OpaqueFunction(
        function=create_robot_nodes
    )

    # === 固定延迟 5 秒后再启动机器人相关节点 ===
    # Gazebo 先启动，等它把 world 加载完、/world/empty/create 服务注册好
    # 再 spawn 机器人，避免竞态
    action_delayed_robot = TimerAction(
        period=15.0,                 # 虚拟机慢的话可以调大到 8.0
        actions=[action_robot_nodes]
    )

    return launch.LaunchDescription([
        action_declare_arg_model_path,
        action_declare_arg_world_path,
        action_launch_gazebo,
        action_delayed_robot,       # 延迟启动，替代原来的 action_robot_nodes
    ])