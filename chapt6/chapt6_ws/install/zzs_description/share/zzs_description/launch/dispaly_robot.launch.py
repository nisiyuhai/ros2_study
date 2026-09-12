import launch
import launch_ros
from ament_index_python.packages import get_package_share_directory#找包
import os

def generate_launch_description():
    #获取默认urdf路径
    urdf_package_path=get_package_share_directory('zzs_description')
    default_urdf_path=os.path.join(urdf_package_path,'urdf','first_robot.urdf')
    #声明一个urdf参数，方便修改
    action_declare_arg_mode_path=launch.actions.DeclareLaunchArgument(
        name='model',default_value=str(default_urdf_path),description="加载模型的文件路径"
    )
    #通过文件路径获取内容并转化为参数值对象，以供传入robot_state_publisher
    substitutions_command_result=launch.substitutions.Command(
        'cat',
        launch.substitutions.LaunchConfiguration('model')
    )
    robot_description_value=launch_ros.parameter_descriptions.ParameterValue(
        substitutions_command_result,
        value_type=str
    )


    action_robot_state_publisher=launch_ros.actions.Node(
        package='robot_state_publisher',
        exec_name='robot_state_publisher',
        parameters=[{'robot_description':robot_description_value}]
    )

    action_joint_state_publisher=launch_ros.actions.Node(
            package='joint_state_publisher',
            exec_name='joint_state_publisher'
    )

    action_rviz_node=launch_ros.actions.Node(
            package='rviz2',
            exec_name='rviz2'
    )

    return launch.LaunchDescription([
        action_declare_arg_mode_path,
        action_robot_state_publisher,
        action_joint_state_publisher,
        action_rviz_node,

    ])