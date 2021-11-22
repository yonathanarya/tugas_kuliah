import rclpy

from turtlebot3_actionserver.turtlebot3_client.turtlebot3_client import Turtlebot3Client


def main(args=None):
    rclpy.init(args=args)
    turtlebot3_client = Turtlebot3Client()
    rclpy.spin(turtlebot3_client)


if __name__ == '__main__':
    main()
