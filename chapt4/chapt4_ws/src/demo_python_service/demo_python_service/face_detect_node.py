import rclpy
from rclpy.node import Node
from chapt4_interfaces.srv import FaceDetector
import cv2
import face_recognition
from ament_index_python.packages import get_package_share_directory #获取资源包绝对路径
import os
from cv_bridge import CvBridge
import time

class FaceDetectNode(Node):
    def __init__(self):
        super().__init__('face_detect_node')
        self.bridge=CvBridge()
        self.number_of_times_to_upsample=1
        self.model='hog'
        self.default_image_path=get_package_share_directory('demo_python_service')+'/resource/default.jpg'
        self.service=self.create_service(
            FaceDetector,
            'face_detect',
            self.face_detect_callback)
        self.get_logger().info(f"人脸检测服务启动---")

    def face_detect_callback(self,request,response):
        if request.image.data:
            cv_image=self.bridge.imgmsg_to_cv2(request.image)
        else:
            cv_image=cv2.imread(self.default_image_path)

        start_time=time.time()
        self.get_logger().info(f"加载完图像，开始识别---")
        face_locations=face_recognition.face_locations(
            cv_image,
            number_of_times_to_upsample=self.number_of_times_to_upsample,
            model=self.model)
        response.use_time=time.time()-start_time
        response.number=len(face_locations)#组数（长度）
        for top,right,bottom,left in face_locations:
            response.top.append(top)
            response.right.append(right)
            response.bottom.append(bottom)
            response.left.append(left)
        return response#返回结果


def main():
    rclpy.init()
    node=FaceDetectNode()
    rclpy.spin(node)
    rclpy.shutdown()
    
