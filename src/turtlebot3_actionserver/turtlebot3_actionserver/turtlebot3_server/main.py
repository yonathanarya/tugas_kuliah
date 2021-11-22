import rclpy

from turtlebot3_actionserver.turtlebot3_server.turtlebot3_server import Turtlebot3Server


def main(args=None):
    rclpy.init(args=args)
    turtlebot3_server = Turtlebot3Server()
    rclpy.spin(turtlebot3_server)

    turtlebot3_server.destroy()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
