from setuptools import setup
import os
from glob import glob

package_name = 'turtlesim_polygon'

setup(
    name=package_name,
    version='1.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='yonathanarya',
    maintainer_email='shinatanaraa38@gmail.com',
    description='Package to create polygon on turtlesim',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'client = turtlesim_polygon.client:main',
        ],
    },
)
