import sys
import termios

from action_msgs.msg import GoalStatus
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from turtlebot3_act_interfaces.action import Task

terminal_msg = """
TurtleBot3 Move
------------------------------------------------------
input direction and velocity in m/s
------------------------------------------------------
DIRECTION HELPER
1 = Forward
2 = Backward
3 = Left circle
4 = Right circle
------------------------------------------------------
"""


class Turtlebot3Client(Node):

    def __init__(self):
        super().__init__('turtlebot3_client')

        """************************************************************
        ** Initialise variables
        ************************************************************"""
        self.direction = 0 # not moving
        self.duration = 0.0 # in seconds

        """************************************************************
        ** Initialise ROS clients
        ************************************************************"""
        # Initialise clients
        self.action_client = ActionClient(self, Task, 'Task')

        self.get_logger().info("Turtlebot3 Task node has been initialised.")

        # Get keyboard input and send goal
        self.get_key()

    """*******************************************************************************
    ** Callback functions and relevant functions
    *******************************************************************************"""
    def get_key(self):
        print(terminal_msg)
        settings = termios.tcgetattr(sys.stdin)
        input_direction = input("Input direction: ")
        self.direction = int(input_direction)
        input_duration = input("Input duration: ")
        self.duration = float(input_duration)

        termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
        self.send_goal()

    def send_goal(self):
        self.get_logger().info('Waiting for action server...')
        self.action_client.wait_for_server()

        goal_msg = Task.Goal()
        goal_msg.direction = self.direction
        goal_msg.duration = self.duration

        self.get_logger().info('Sending goal request...')

        self._send_goal_future = self.action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback)

        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self.get_logger().info('Goal accepted :)')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def feedback_callback(self, feedback):
        self.get_logger().info(
            'Time left until the robot stops: {0}'.format(feedback.feedback.left_time))

    def get_result_callback(self, future):
        result = future.result().result
        status = future.result().status
        if status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info('Goal succeeded! Result: {0}'.format(result.success))
        else:
            self.get_logger().info('Goal failed with status: {0}'.format(status))

        # Shutdown after receiving a result
        rclpy.shutdown()
