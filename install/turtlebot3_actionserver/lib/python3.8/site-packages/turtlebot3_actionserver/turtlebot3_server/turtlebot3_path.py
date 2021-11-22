from geometry_msgs.msg import Twist


class Turtlebot3Path():

    def drive_circle(angular, velocity):
        twist = Twist()
        linear_velocity = velocity
        angular_velocity = angular

        twist.linear.x = linear_velocity
        twist.angular.z = angular_velocity

        return twist
