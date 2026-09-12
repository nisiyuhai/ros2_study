import rclpy
from rclpy.node import Node
from tf2_ros import TransformBroadcaster #坐标发布器
from geometry_msgs.msg import TransformStamped #消息接口
from tf_transformations import quaternion_from_euler #欧拉函数四元数函数
import math

class TFBroadcaster(Node):
    def __init__(self):
        super().__init__('static_tf_broadcaster')
        self.broadcaster=TransformBroadcaster(self)
        self.timer=self.create_timer(0.01,self.publish_tf)


    def publish_tf(self):
        """
        发布TF 从base_link到camera_link之间的坐标关系
        """
        transform=TransformStamped()
        transform.header.frame_id='camera_link'
        transform.child_frame_id='bottle_link'
        transform.header.stamp=self.get_clock().now().to_msg()

        transform.transform.translation.x=0.3
        transform.transform.translation.y=0.2
        transform.transform.translation.z=0.5

        #欧拉角转四元数
        q=quaternion_from_euler(math.radians(0),0,0)
        #对旋转部分赋值
        transform.transform.rotation.x=q[0]
        transform.transform.rotation.y=q[1]
        transform.transform.rotation.z=q[2]
        transform.transform.rotation.w=q[3]
        #坐标关系发布出去
        self.broadcaster.sendTransform(transform)
        self.get_logger().info(f"发布TF{transform}")

def main():
    rclpy.init()
    node = TFBroadcaster()
    rclpy.spin(node)
    rclpy.shutdown()