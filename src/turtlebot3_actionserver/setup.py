from setuptools import find_packages
from setuptools import setup

package_name = 'turtlebot3_actionserver'

setup(
    name=package_name,
    version='1.0.0',
    packages=find_packages(),
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
            'turtlebot3_client = turtlebot3_actionserver.turtlebot3_client.main:main',
            'turtlebot3_server = turtlebot3_actionserver.turtlebot3_server.main:main'
        ],
    },
)
