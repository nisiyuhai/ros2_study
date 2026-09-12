import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class TurtlesimNode(Node):
    def __init__(self, node_name):
        super().__init__(node_name)
        self.get_logger().info(f'{node_name} begin!!')
        self.turtlesim_publisher=self.create_publisher(Twist, '/turtle1/cmd_vel', 10)

        # 初始化速度消息
        self.twist_msg = Twist()
        self.twist_msg.linear.x = 0.5   # 线速度 0.5 m/s
        self.twist_msg.angular.z = 1.0  # 角速度 1.0 rad/s（顺时针旋转）
        
        self.create_timer(0.1,self.timer_callback)

    def timer_callback(self):
        self.turtlesim_publisher.publish(self.twist_msg)
        self.get_logger().info(f'正在发布速度: 线速度={self.twist_msg.linear.x}, 角速度={self.twist_msg.angular.z}')

def main():
    rclpy.init();
    node=TurtlesimNode('turtlesim_node_my')
    rclpy.spin(node)
    rclpy.shutdown()

