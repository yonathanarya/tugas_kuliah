import rclpy
from turtlesim_polygon.server_polygon import TurtlesimServer


def main(args=None):
    rclpy.init(args=args)
    turtlesim_server = TurtlesimServer()
    rclpy.spin(turtlesim_server)

    turtlesim_server.destroy()
    rclpy.shutdown()


if __name__ == '__main__':
    main()