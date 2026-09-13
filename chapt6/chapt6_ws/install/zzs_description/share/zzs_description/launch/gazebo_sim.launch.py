import os
import subprocess

import launch
import launch_ros
from ament_index_python.packages import get_package_share_directory
from launch.actions import (
    DeclareLaunchArgument,
    IncludeLaunchDescription,
    OpaqueFunction,
    TimerAction,
)
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration


class GazeboClassicLaunch(launch.LaunchDescription):
    """Gazebo Classic 11 + ROS 2 Humble 启动文件。"""

    def __init__(self, **kwargs):
        super().__init__(**kwargs)

        # ---------------- 路径准备 ----------------
        self.urdf_package_path = get_package_share_directory('zzs_description')
        self.gazebo_ros_pkg = get_package_share_directory('gazebo_ros')

        self.default_xacro_path = os.path.join(
            self.urdf_package_path, 'urdf', 'robot.urdf.xacro'
        )
        self.default_world_path = os.path.join(
            self.urdf_package_path, 'world', 'c_room.world'   # ← 换成你的实际世界
        )

        # ---------------- Launch 参数 ----------------
        self.model_arg = DeclareLaunchArgument(
            name='model',
            default_value=str(self.default_xacro_path),
            description='模型文件路径（xacro 或 urdf）',
        )
        self.world_arg = DeclareLaunchArgument(
            name='world',
            default_value=str(self.default_world_path),
            description='Gazebo Classic 世界文件路径',
        )

        # ---------------- 启动 Gazebo Classic ----------------
        self.gazebo_launch = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(self.gazebo_ros_pkg, 'launch', 'gazebo.launch.py')
            ),
            launch_arguments={
                'world': self.default_world_path,
                'verbose': 'true',
            }.items(),
        )

        # ---------------- 机器人节点（延迟 5 秒） ----------------
        self.robot_nodes = OpaqueFunction(function=self._create_robot_nodes)

        self.delayed_robot = TimerAction(
            period=5.0,
            actions=[self.robot_nodes],
        )

        self.add_action(self.model_arg)
        self.add_action(self.world_arg)
        self.add_action(self.gazebo_launch)
        self.add_action(self.delayed_robot)

    # ==================================================================
    def _create_robot_nodes(self, context):
        model_path = LaunchConfiguration('model').perform(context)
        urdf_content = self._load_urdf(model_path)

        robot_state_publisher = launch_ros.actions.Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            parameters=[{'robot_description': urdf_content}],
            output='screen',
        )

        # ★ Gazebo Classic 用 gazebo_ros 的 spawn_entity.py
        spawn_entity = launch_ros.actions.Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            arguments=[
                '-entity', 'zzs_robot',
                '-topic', 'robot_description',
                '-x', '0.0', '-y', '0.0', '-z', '0.15',
            ],
            output='screen',
        )

        return [robot_state_publisher, spawn_entity]

    # ==================================================================
    @staticmethod
    def _load_urdf(model_path: str) -> str:
        if model_path.endswith('.xacro'):
            result = subprocess.run(
                ['xacro', model_path],
                capture_output=True,
                text=True,
            )
            if result.returncode != 0:
                raise RuntimeError(f'xacro 解析失败:\n{result.stderr}')
            return result.stdout

        with open(model_path, 'r') as f:
            return f.read()


def generate_launch_description():
    return GazeboClassicLaunch()