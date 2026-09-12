import rclpy
from rclpy.node import Node

class PersonNode(Node):
    def __init__(self,node_name:str,name_value:str,age_value:int):
        super().__init__(node_name)
        self.name=name_value
        self.age=age_value

    def eat(self,food_name:str):
        self.get_logger().info(f"{self.name},{self.age}岁，爱吃{food_name}")


def main():
    rclpy.init()
    node=PersonNode('B','bob',20)
    node.eat('hanbao')
    rclpy.spin(node)
    rclpy.shutdown()
    
