from setuptools import setup

package_name = 'turtlebot3_action'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='yonathanarya',
    maintainer_email='yonathanarya@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'turtlebot3_patrol_client = turtlebot3_action.turtlebot3_patrol_client.main:main',
            'turtlebot3_patrol_server = turtlebot3_action.turtlebot3_patrol_server.main:main',
        ],
    },
)
