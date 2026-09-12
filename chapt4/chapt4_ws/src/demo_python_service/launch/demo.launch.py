import launch
import launch_ros

def generate_launch_description():
    "产生launch描述"
    action_turtlesim_node=launch_ros.actions.Node(
            package='turtlesim',
            executable='turtlesim_node',
            output='screen'
        )
    action_detect_client_node=launch_ros.actions.Node(
            package='demo_python_service',
            executable='face_detect_client_node',
            output='log'
        )
    action_face_detect_node=launch_ros.actions.Node(
            package='demo_python_service',
            executable='face_detect_node',
            output='both'
        )
    

    return launch.LaunchDescription([
        action_turtlesim_node,
        action_detect_client_node,
        action_face_detect_node,
    ])