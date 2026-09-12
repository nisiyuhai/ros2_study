import cv2
import face_recognition
from ament_index_python.packages import get_package_share_directory #获取资源包绝对路径

def main():
    default_image_path=get_package_share_directory('demo_python_service')+'/resource/default.jpg'
    print(f"图片真实路径：{default_image_path}")
    image=cv2.imread(default_image_path)
    face_locations=face_recognition.face_locations(image,number_of_times_to_upsample=1,model='hog')
    #绘制人脸框
    for top,right,buttom,left in face_locations:
        cv2.rectangle(image,(left,top),(right,buttom),(255,0,0),4)
    #结果展示
    cv2.imshow('Face Detecte Result',image)
    cv2.waitKey(0)