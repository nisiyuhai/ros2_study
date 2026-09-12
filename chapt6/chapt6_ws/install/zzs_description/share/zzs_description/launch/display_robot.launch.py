import launch
import launch_ros
from ament_index_python.packages import get_package_share_directory
import os
import subprocess

def generate_launch_description():
    urdf_package_path = get_package_share_directory('zzs_description')
    default_urdf_path = os.path.join(urdf_package_path, 'urdf', 'first_robot.urdf')
    default_rviz_config_path = os.path.join(urdf_package_path, 'config', 'display_robot_model.rviz')
    
    action_declare_arg_model_path = launch.actions.DeclareLaunchArgument(
        name='model',
        default_value=str(default_urdf_path),
        description="加载模型的文件路径（支持 .urdf 或 .xacro）"
    )
    
    # ✅ OpaqueFunction 处理模型加载
    def process_model(context):
        model_path = launch.substitutions.LaunchConfiguration('model').perform(context)
        
        # 根据文件扩展名读取内容
        if model_path.endswith('.xacro'):
            result = subprocess.run(['xacro', model_path], capture_output=True, text=True)
            urdf_content = result.stdout
        else:
            with open(model_path, 'r') as f:
                urdf_content = f.read()
        
        # 返回节点列表
        return [
            launch_ros.actions.Node(
                package='robot_state_publisher',
                executable='robot_state_publisher',
                parameters=[{'robot_description': urdf_content}]
            ),
            launch_ros.actions.Node(
                package='joint_state_publisher',
                executable='joint_state_publisher'
            ),
            launch_ros.actions.Node(
                package='rviz2',
                executable='rviz2',
                arguments=['-d', default_rviz_config_path]
            )
        ]
    
    return launch.LaunchDescription([
        action_declare_arg_model_path,
        launch.actions.OpaqueFunction(function=process_model)
    ])