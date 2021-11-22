from setuptools import setup

package_name = 'turtlebot3_infiniteloop'

setup(
    name=package_name,
    version='1.0.0',
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
    description='Make the turtlebot3 simulation in gazebo move like 8 shape continuosly',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
                'infinite_loop = turtlebot3_infiniteloop.infinite_loop:main',
                'force_stop = turtlebot3_infiniteloop.force_stop:main'
        ],
    },
)
