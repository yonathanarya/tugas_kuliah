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
input n of polygon and l of polygon
------------------------------------------------------
"""
