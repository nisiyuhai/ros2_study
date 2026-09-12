from turtle_my_interfaces.srv import TurtleSrv
import rclpy
from rclpy.node import Node

class TurtleClientNode(Node):
    def __init__(self):
        super().__init__("turtle_client_node")
        
        # 创建服务客户端
        self.client = self.create_client(TurtleSrv, 'turtle_control')
        
        # 等待服务可用
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn('等待服务启动...')
        self.get_logger().info("服务已连接")
    
    def send_request(self, x, y, theta):
        """发送控制请求"""
        # 创建请求对象
        request = TurtleSrv.Request()
        request.x = float(x)
        request.y = float(y)
        request.theta = float(theta)
        
        # 异步调用服务，指定回调函数
        future = self.client.call_async(request)
        future.add_done_callback(self.result_callback)
        self.get_logger().info(f"📤 已发送: x={x}, y={y}, theta={theta}")
    
    def result_callback(self, future):
        """处理服务响应"""
        if future.result() is not None:
            response = future.result()
            if response.success:
                self.get_logger().info(f"✅ 成功: {response.message}")
            else:
                self.get_logger().error(f"❌ 失败: {response.message}")
        else:
            self.get_logger().error("❌ 服务调用失败")
        
        # 收到响应后退出
        self.get_logger().info("任务完成，退出程序")
        rclpy.shutdown()


def main():
    rclpy.init()
    node = TurtleClientNode()
    
    print("\n" + "="*50)
    print("🐢 乌龟控制客户端")
    print("="*50)
    print("输入格式: x y theta")
    print("例如: 5.0 5.0 1.57")
    print("="*50 + "\n")
    
    # 获取用户输入
    try:
        user_input = input("请输入目标坐标 (x y theta): ").strip()
        
        if user_input.lower() in ['q', 'quit', 'exit']:
            print("退出程序")
            node.destroy_node()
            rclpy.shutdown()
            return
        
        # 解析输入
        parts = user_input.split()
        if len(parts) != 3:
            print("❌ 请输入三个数值: x y theta")
            node.destroy_node()
            rclpy.shutdown()
            return
        
        try:
            x = float(parts[0])
            y = float(parts[1])
            theta = float(parts[2])
            
            # 发送请求
            node.send_request(x, y, theta)
            
            # 等待回调处理完成后退出
            rclpy.spin(node)
            
        except ValueError:
            print("❌ 请输入有效的数字")
            node.destroy_node()
            rclpy.shutdown()
            
    except KeyboardInterrupt:
        print("\n程序被中断")
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()