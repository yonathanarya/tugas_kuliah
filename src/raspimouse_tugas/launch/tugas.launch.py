import os
import sys
import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    rviz_config_dir = os.path.join(
        get_package_share_directory('raspimouse_tugas'),
        'odom.rviz'
    )

    ld = launch.LaunchDescription([
        launch_ros.actions.Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            arguments=['-d', rviz_config_dir],
        ),
        launch_ros.actions.Node(
            package='raspimouse_tugas',
            executable='teleop',
            output='screen',
            prefix = 'xterm -e',
        ),
    ])
    return ld