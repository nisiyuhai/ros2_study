from setuptools import find_packages
from setuptools import setup

setup(
    name='turtle_my_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('turtle_my_interfaces', 'turtle_my_interfaces.*')),
)
