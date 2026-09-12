from turtle_my_interfaces.srv import TurtleSrv
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
import rclpy
from rclpy.node import Node
import math

class TurtleServiceNode(Node):
    def __init__(self):
        super().__init__("turtle_service_node")
        
        # 创建服务
        self.srv = self.create_service(
            TurtleSrv, 
            'turtle_control',
            self.handle_turtle_control
        )
        
        # 创建速度发布者（控制乌龟移动）
        self.cmd_vel_pub = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        
        # 创建位置订阅者（获取乌龟信息）
        self.pose_sub = self.create_subscription(
            Pose,
            '/turtle1/pose',
            self.pose_callback,
            10
        )
        
        # 保存当前位置和目标位置
        self.current_pose = None
        self.target_x = None
        self.target_y = None
        self.is_moving = False
        
        # 控制参数
        self.linear_speed = 1.5
        self.angular_speed = 2.0
        self.distance_tolerance = 0.1
        
        # 创建定时器控制乌龟移动
        self.control_timer = self.create_timer(0.05, self.move_turtle)
        
        self.get_logger().info("服务端已启动")
    
    def pose_callback(self, msg: Pose):
        """获取乌龟当前位置"""
        self.current_pose = msg
    
    def handle_turtle_control(self, request, response):
        """处理服务请求"""
        self.get_logger().info(
            f"收到请求: x={request.x}, y={request.y}, theta={request.theta}"
        )
        
        # 设置目标点，开始移动
        self.target_x = request.x
        self.target_y = request.y
        self.is_moving = True
        
        response.success = True
        response.message = f"开始移动到 ({request.x}, {request.y})"
        
        return response
    
    def move_turtle(self):
        """控制乌龟移动到目标点"""
        # 如果没有目标或未在移动，停止
        if not self.is_moving or self.current_pose is None:
            return
        
        # 如果还没有目标位置，返回
        if self.target_x is None or self.target_y is None:
            return
        
        # 获取当前位置
        current_x = self.current_pose.x
        current_y = self.current_pose.y
        current_theta = self.current_pose.theta
        
        # 计算距离
        dx = self.target_x - current_x
        dy = self.target_y - current_y
        distance = math.sqrt(dx*dx + dy*dy)
        
        # 计算目标角度
        target_angle = math.atan2(dy, dx)
        angle_diff = self.normalize_angle(target_angle - current_theta)
        
        # 创建速度命令
        twist = Twist()
        
        # 如果到达目标位置
        if distance < self.distance_tolerance:
            self.is_moving = False
            self.get_logger().info(
                f"✅ 到达目标位置 ({self.target_x}, {self.target_y})"
            )
            self.get_logger().info(
                f"📍 当前位置: x={self.current_pose.x:.2f}, "
                f"y={self.current_pose.y:.2f}, "
                f"theta={self.current_pose.theta:.2f}"
            )
            twist.linear.x = 0.0
            twist.angular.z = 0.0
            self.cmd_vel_pub.publish(twist)
            return
        
        # 先旋转面向目标
        if abs(angle_diff) > 0.1:
            twist.linear.x = 0.0
            twist.angular.z = self.angular_speed * (1 if angle_diff > 0 else -1)
        else:
            # 向目标移动
            twist.linear.x = min(self.linear_speed, distance * 2.0)
            twist.angular.z = angle_diff * 0.5
        
        # 发布速度命令
        self.cmd_vel_pub.publish(twist)
    
    @staticmethod
    def normalize_angle(angle):
        """将角度归一化到 -pi 到 pi"""
        while angle > math.pi:
            angle -= 2 * math.pi
        while angle < -math.pi:
            angle += 2 * math.pi
        return angle


def main():
    rclpy.init()
    node = TurtleServiceNode()
    rclpy.spin(node)
    rclpy.shutdown()

