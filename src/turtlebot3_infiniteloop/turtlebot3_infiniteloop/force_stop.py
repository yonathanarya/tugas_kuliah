import rclpy
import sys
from geometry_msgs.msg import Twist

def main(args=None):
    rclpy.init(args=sys.argv)
    node = rclpy.create_node('topic_publisher')
    node.get_logger().info('Created node')
    pub = node.create_publisher(Twist, '/cmd_vel', 1)
    move = Twist() # defining the way we can allocate the values
    move.linear.x = .0 # allocating the values in x direction - linear
    move.angular.z = .0  # allocating the values in z direction - angular
    node.get_logger().info('Stopping')

    try:
        while rclpy.ok():
            pub.publish(move)
    except KeyboardInterrupt:
        pass
    rclpy.shutdown()
  
if __name__ == '__main__':
    main()