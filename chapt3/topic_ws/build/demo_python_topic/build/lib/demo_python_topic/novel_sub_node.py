import rclpy
from rclpy.node import Node
from example_interfaces.msg import String
from queue import Queue
import threading
import time

class NovelSubNode(Node):
    def __init__(self,node_name):
        super().__init__(node_name)
        self.novels_queue=Queue()
        self.nove_subscriber=self.create_subscription(String,'novel',self.novel_callback,10)
        self.get_logger().info(f'{node_name},begin!!!')
        self.speech_thread=threading.Thread(target=self.speaker_thread)
        self.speech_thread.start();

    def novel_callback(self,msg):
        self.novels_queue.put(msg.data)

    def speaker_thread(self):
        while rclpy.ok():
            if self.novels_queue.qsize()>0:
                text=self.novels_queue.get()
                self.get_logger().info(f"----speaker:{text}")
            else:
                time.sleep(1)
                

        


def main():
    rclpy.init();
    node=NovelSubNode('novel_pub')
    rclpy.spin(node)
    rclpy.shutdown()