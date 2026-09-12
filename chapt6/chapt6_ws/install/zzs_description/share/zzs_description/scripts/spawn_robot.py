#防止机器人初始化失败
#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from ros_gz_interfaces.srv import SpawnEntity
from ament_index_python.packages import get_package_share_directory
import os
import subprocess
import sys


class SpawnRobot(Node):
    def __init__(self):
        super().__init__('spawn_robot')
        self.declare_parameter('world', 'empty')
        self.declare_parameter('name', 'zzs_robot')
        self.declare_parameter('x', 0.0)
        self.declare_parameter('y', 0.0)
        self.declare_parameter('z', 0.15)
        self.declare_parameter('robot_description', '')

        world = self.get_parameter('world').value
        name = self.get_parameter('name').value
        x = self.get_parameter('x').value
        y = self.get_parameter('y').value
        z = self.get_parameter('z').value
        urdf = self.get_parameter('robot_description').value

        # 用 gz sdf -p 转成 SDF
        tmp = '/tmp/zzs_robot_spawn.urdf'
        with open(tmp, 'w') as f:
            f.write(urdf)
        result = subprocess.run(['gz', 'sdf', '-p', tmp],
                                capture_output=True, text=True)
        if result.returncode != 0:
            self.get_logger().error(f"gz sdf 转换失败: {result.stderr}")
            sys.exit(1)
        sdf = result.stdout

        service_name = f'/world/{world}/create'
        self.cli = self.create_client(SpawnEntity, service_name)

        self.get_logger().info(f'等待服务 {service_name} ...')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info(f'{service_name} 还没准备好，继续等...')

        self.get_logger().info(f'{service_name} 已就绪，发送 spawn 请求')
        req = SpawnEntity.Request()
        req.entity_factory.name = name
        req.entity_factory.pose.position.x = float(x)
        req.entity_factory.pose.position.y = float(y)
        req.entity_factory.pose.position.z = float(z)
        req.entity_factory.sdf = sdf
        req.entity_factory.relative_to = 'world'

        future = self.cli.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result() is not None and future.result().success:
            self.get_logger().info(f'✅ 机器人 {name} spawn 成功')
        else:
            self.get_logger().error(f'❌ spawn 失败: {future.result()}')
        rclpy.shutdown()


def main():
    rclpy.init()
    node = SpawnRobot()
    rclpy.spin(node)


if __name__ == '__main__':
    main()