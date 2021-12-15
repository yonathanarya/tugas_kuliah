import sys
import termios
from time import sleep

import math
from action_msgs.msg import GoalStatus
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from turtlesim.action import RotateAbsolute
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose

terminal_msg = """
Turtlesim Polygon Maker
------------------------------------------------------
input n of polygon and length of polygon
------------------------------------------------------
"""

class TurtlesimClient(Node):

    def __init__(self):
        super().__init__('Turtlesim_Client')
        """************************************************************
        ** Initialise variables
        ************************************************************"""
        self.theta = 0.0
        """************************************************************
        ** Initialise ROS clients
        ************************************************************"""
        self.turtlesim_client = ActionClient(self, RotateAbsolute, '/turtle1/rotate_absolute')
        self.get_logger().info("Turtlesim polygon node has been initialised.")
    
    def send_goal(self, theta):
        self.get_logger().info("Waiting for server...")
        self.turtlesim_client.wait_for_server()
        goal_msg = RotateAbsolute.Goal()
        goal_msg.theta = theta
        self.get_logger().info(str(goal_msg.theta))
        return self.turtlesim_client.send_goal_async(goal_msg)

class TurtlesimVel(Node):
    def __init__(self):
        super().__init__('turtlesim_publisher')
    
    def linear(self, length):
        self.pub_ = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        twist = Twist()
        twist.linear.x = length
        self.pub_.publish(twist)


def main(args=None):
    rclpy.init(args=args)
    print(terminal_msg)
    while True:
        input_n = input("Input n: ")
        n = int(input_n)
        th = (360/n)/(180/3.14)
        theta = 0.0
        input_length = input("Input length: ")
        length = float(input_length)
        turtlesim_client = TurtlesimClient()
        turtlesim_vel = TurtlesimVel()
        for x in range(n):
            theta = theta + th
            future = turtlesim_client.send_goal(theta)
            rclpy.spin_until_future_complete(turtlesim_client, future)
            sleep(5)
            turtlesim_vel.linear(length)
            sleep(1)
            turtlesim_vel.linear(0.0)
        turtlesim_client.destroy_node()
        turtlesim_vel.destroy_node()
    rclpy.shutdown()
        
    


if __name__ == '__main__':
    main()