import launch
import launch_ros
from ament_index_python.packages import get_package_share_directory
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():
    robot_name_in_model = "zzs_robot"
    urdf_tutorial_path = get_package_share_directory('zzs_description')
    default_model_path = urdf_tutorial_path + '/urdf/robot.urdf.xacro'
    default_world_path = urdf_tutorial_path + '/world/c_room.world'

    action_declare_arg_mode_path = launch.actions.DeclareLaunchArgument(
        name='model', default_value=str(default_model_path),
        description='URDF 的绝对路径')

    robot_description = launch_ros.parameter_descriptions.ParameterValue(
        launch.substitutions.Command(
            ['xacro ', launch.substitutions.LaunchConfiguration('model')]),
        value_type=str)

    robot_state_publisher_node = launch_ros.actions.Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{'robot_description': robot_description}]
    )

    launch_gazebo = launch.actions.IncludeLaunchDescription(
        PythonLaunchDescriptionSource([get_package_share_directory(
            'gazebo_ros'), '/launch', '/gazebo.launch.py']),
        launch_arguments=[('world', default_world_path), ('verbose', 'true')]
    )

    spawn_entity_node = launch_ros.actions.Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        arguments=['-topic', '/robot_description',
                   '-entity', robot_name_in_model, ])

    # 加载并激活 joint_state_broadcaster
    load_joint_state_controller = launch.actions.ExecuteProcess(
        cmd=['ros2', 'control', 'load_controller', '--set-state', 'active',
             'robot_joint_state_broadcaster'],
        output='screen'
    )

    # 加载并激活 diff_driver 控制器
    load_robot_diff_drive_controller = launch.actions.ExecuteProcess(
        cmd=['ros2', 'control', 'load_controller', '--set-state', 'active','robot_diff_drive_controller'], 
        output='screen')

    return launch.LaunchDescription([
        action_declare_arg_mode_path,
        robot_state_publisher_node,
        launch_gazebo,
        spawn_entity_node,
        launch.actions.RegisterEventHandler(
            event_handler=launch.event_handlers.OnProcessExit(
                target_action=spawn_entity_node,
                on_exit=[load_joint_state_controller],)
        ),
        launch.actions.RegisterEventHandler(
                    event_handler=launch.event_handlers.OnProcessExit(
                    target_action=spawn_entity_node,
                    on_exit=[load_robot_diff_drive_controller],)
        ),
    ])