import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
import math

class TurtleMoveNode(Node):
    def __init__(self, node_name):
        super().__init__(node_name)
        self.get_logger().info(f'{node_name} 已启动！')
        
        # ---------- 目标点设置 ----------
        self.target_x = 8.0   # B 点的 x 坐标
        self.target_y = 8.0   # B 点的 y 坐标
        self.tolerance = 0.1  # 到达误差容忍度
        
        # ---------- 当前位置 ----------
        self.current_x = 0.0
        self.current_y = 0.0
        self.current_theta = 0.0
        self.is_pose_received = False  # 是否收到位置信息
        
        # ---------- 速度控制参数 ----------
        self.linear_speed = 0.5   # 线速度
        self.angular_speed = 0.5  # 角速度
        
        # ---------- 创建发布者 ----------
        self.cmd_publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        
        # ---------- 创建订阅者（接收位置信息） ----------
        self.pose_subscription = self.create_subscription(
            Pose,
            '/turtle1/pose',
            self.pose_callback,
            10
        )
        self.get_logger().info('已订阅 /turtle1/pose 话题')
        
        # ---------- 创建定时器（控制循环，10Hz） ----------
        self.create_timer(0.1, self.control_loop)
    
    def pose_callback(self, msg):
        """接收海龟位置信息的回调函数"""
        self.current_x = msg.x
        self.current_y = msg.y
        self.current_theta = msg.theta
        self.is_pose_received = True
        
        # 打印当前位置（可选，注释掉避免刷屏）
        # self.get_logger().debug(f'当前位置: x={self.current_x:.2f}, y={self.current_y:.2f}')
    
    def control_loop(self):
        """控制循环：计算并发布速度指令"""
        # 如果还没收到位置信息，等待
        if not self.is_pose_received:
            self.get_logger().warn('等待位置信息...')
            return
        
        # ---------- 计算到目标点的距离和角度 ----------
        dx = self.target_x - self.current_x
        dy = self.target_y - self.current_y
        distance = math.sqrt(dx*dx + dy*dy)
        target_angle = math.atan2(dy, dx)
        
        # ---------- 判断是否到达目标点 ----------
        if distance < self.tolerance:
            # 到达目标点，停止移动
            self.stop_turtle()
            self.get_logger().info(f'✅ 到达目标点 ({self.target_x}, {self.target_y})！')
            return
        
        # ---------- 计算角度偏差 ----------
        angle_diff = target_angle - self.current_theta
        # 将角度规范化到 [-pi, pi] 范围内
        angle_diff = math.atan2(math.sin(angle_diff), math.cos(angle_diff))
        
        # ---------- 创建速度消息 ----------
        twist = Twist()
        
        # 角度偏差较大时，先原地旋转
        if abs(angle_diff) > 0.1:
            # 旋转模式
            twist.linear.x = 0.0
            twist.angular.z = self.angular_speed if angle_diff > 0 else -self.angular_speed
            self.get_logger().info(f'🔄 旋转中: 角度偏差={angle_diff:.2f} rad')
        else:
            # 前进模式：朝向目标，直线移动
            twist.linear.x = self.linear_speed
            twist.angular.z = 0.0
            self.get_logger().info(f'🚀 前进中: 距离={distance:.2f}, 角度偏差={angle_diff:.2f}')
        
        # 发布速度指令
        self.cmd_publisher.publish(twist)
    
    def stop_turtle(self):
        """停止海龟移动"""
        twist = Twist()
        twist.linear.x = 0.0
        twist.angular.z = 0.0
        self.cmd_publisher.publish(twist)
        self.get_logger().info('🛑 海龟已停止')


def main(args=None):
    rclpy.init(args=args)
    node = TurtleMoveNode('turtle_move_node')
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
