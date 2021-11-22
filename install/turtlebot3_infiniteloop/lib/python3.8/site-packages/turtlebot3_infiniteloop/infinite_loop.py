import rclpy
import sys
import threading
from time import sleep
from geometry_msgs.msg import Twist

def main(args=None):
    rclpy.init(args=sys.argv)
    node = rclpy.create_node('inf_loop')
    node.get_logger().info('Created node')
    pub = node.create_publisher(Twist, '/cmd_vel', 1)
    thread = threading.Thread(target=rclpy.spin, args=(node, ), daemon=True)
    thread.start()
    rate = node.create_rate(2)
    ccw = Twist()
    ccw.linear.x = 1.0
    ccw.angular.z = 1.0
    cw = Twist()
    cw.linear.x = 1.0
    cw.angular.z = -1.0
    stop = Twist()
    stop.linear.x = .0
    stop.angular.z = .0
    node.get_logger().info('Looping')

    try:
        while rclpy.ok():
            pub.publish(ccw)
            rate.sleep()
            sleep(7.80)
            pub.publish(cw)
            rate.sleep()
            sleep(7.80)     
    except KeyboardInterrupt:
        pub.publish(stop)
        node.get_logger().info('Stopping')
        pass
    rclpy.shutdown()
    thread.join()
    

if __name__ == '__main__':
    main()