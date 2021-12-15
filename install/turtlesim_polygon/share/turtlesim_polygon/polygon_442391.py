from launch import LaunchDescription
import launch_ros.actions

def generate_launch_description():
    return LaunchDescription([
        launch_ros.actions.Node(
            package='turtlesim', executable='turtlesim_node', output='screen'),
        launch_ros.actions.Node(
            package='turtlesim_polygon', executable='client', output='screen', prefix='xterm -e'),
    ])