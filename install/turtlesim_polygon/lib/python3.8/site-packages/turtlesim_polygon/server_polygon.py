import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.action import CancelResponse
from rclpy.action import GoalResponse
from rclpy.qos import QoSProfile
from rclpy.callback_groups import ReentrantCallbackGroup
import termios
from geometry_msgs.msg import Twist
from turtlesim_polygon.action import RotateAbsolute
import math

class TurtlesimServer(Node):
    def __init__(self):
        super().__init__('turtlesim_server')
        self.goal = RotateAbsolute.Goal()

        """************************************************************
        ** Initialise ROS publishers and servers
        ************************************************************"""
        qos = QoSProfile(depth=10)

        # Initialise publishers
        self.cmd_vel_pub = self.create_publisher(Twist, 'cmd_vel', qos)

        # Initialise servers
        self.action_server = ActionServer(
            self,
            RotateAbsolute,
            'RotateAbsolute',
            execute_callback=self.execute_callback,
            callback_group=ReentrantCallbackGroup(),
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback)

        self.get_logger().info("Server has been initialised")

    def destroy(self):
        self._action_server.destroy()
        super().destroy_node()

    def goal_callback(self, goal_request):
        # Accepts or rejects a client request to begin an action
        self.get_logger().info('Received goal request :)')
        self.goal = goal_request
        return GoalResponse.ACCEPT

    def cancel_callback(self, goal_handle):
        # Accepts or rejects a client request to cancel an action
        self.get_logger().info('Received cancel request :(')
        return CancelResponse.ACCEPT
    
    