import rclpy
from rclpy.node import Node
from tf2_ros import TransformListener,Buffer #坐标监听器
from tf_transformations import euler_from_quaternion #四元数->欧拉函数 函数
import math

class TFListener(Node):
    def __init__(self):
        super().__init__('tf_listener')
        self.buff=Buffer()
        self.listenerer=TransformListener(self.buff,self)
        self.timer=self.create_timer(1.0,self.get_transform)


    def get_transform(self):
        """
        实时查询坐标关系
        """
        try:
            result=self.buff.lookup_transform(
                'base_link',
                'bottle_link',
                rclpy.time.Time(seconds=0.0),
                rclpy.time.Duration(seconds=1.0)
                )
            transform=result.transform
            self.get_logger().info(f"平移：{transform.translation}")
            self.get_logger().info(f"旋转：{transform.rotation}")
            rotation_euler=euler_from_quaternion([
                transform.rotation.x,
                transform.rotation.y,
                transform.rotation.z,
                transform.rotation.w,
            ])
            self.get_logger().info(f"旋转RPY：{rotation_euler}")
        except Exception as e:
            self.get_logger().warn(f"获取坐标查询失败，原因：{str(e)}")

def main():
    rclpy.init()
    node = TFListener()
    rclpy.spin(node)
    rclpy.shutdown()