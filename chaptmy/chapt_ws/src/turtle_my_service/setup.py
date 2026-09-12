from setuptools import find_packages, setup

package_name = 'turtle_my_service'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='zzs',
    maintainer_email='zhaozs628@163.com',
    description='TODO: Package description',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'turtle_my_client=turtle_my_service.turtle_my_client:main',
            'turtle_my_service=turtle_my_service.turtle_my_service:main',
        ],
    },
)
