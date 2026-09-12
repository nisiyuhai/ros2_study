import rclpy
from rclpy.node import Node
from chapt4_interfaces.srv import FaceDetector
import cv2
import face_recognition
from ament_index_python.packages import get_package_share_directory #获取资源包绝对路径
import os
from cv_bridge import CvBridge
import time

class FaceDetectClientNode(Node):
    def __init__(self):
        super().__init__('face_detect_client_node')
        self.bridge=CvBridge()
        self.default_image_path=get_package_share_directory('demo_python_service')+'/resource/1.jpg'
        self.client=self.create_client(
            FaceDetector,
            'face_detect',
        )
        self.image=cv2.imread(self.default_image_path)
        self.get_logger().info(f"人脸检测客户端启动---")

    def send_request(self):
        while self.client.wait_for_service(timeout_sec=1.0) is False:
            self.get_logger().info("服务端未上线！等待中。。。")
        self.get_logger().info("发送请求---")
        request=FaceDetector.Request()
        request.image=self.bridge.cv2_to_imgmsg(self.image)
        future=self.client.call_async(request)#异步操作，future没有实际结果，需要等待服务完成
        # while not future.done():
        #     time.sleep(1.0)#等待服务完成，但是休眠当前线程，导致future无法接受数据，进入死循环
        self.get_logger().info("处理中---")
        #解决方法1
        # rclpy.spin_until_future_complete(self,future) #等待服务端返回响应
        # response=future.result()
        # self.get_logger().info(f"接受到响应，有{response.number}张脸，耗时{response.use_time}s")
        # self.show_response(response)
        #解决方法2
        def result_callback(result_future):
            response = result_future.result()
            self.get_logger().info(f"接受到响应，有{response.number}张脸，耗时{response.use_time}s")
            self.show_response(response)
        future.add_done_callback(result_callback)
            
            

    def show_response(self,response):
        for i in range(response.number):
            top=response.top[i]
            right=response.right[i]
            bottom=response.bottom[i]
            left=response.left[i]
            cv2.rectangle(self.image,(left,top),(right,bottom),(255,0,0),4)
        cv2.imshow('Face Detecte Result',self.image)
        cv2.waitKey(0)#阻塞的，可能导致spin无法正常运行


def main():
    rclpy.init()
    node=FaceDetectClientNode()
    node.send_request()
    rclpy.spin(node)
    rclpy.shutdown()
    
