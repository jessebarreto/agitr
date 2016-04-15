# agitr
Implementation of some easy example programs in ROS



This small ROS example uses the basic knowledge obtained in the bok A Gentle Introduction to ROS and all the codes came from there and tested by me.

To install the ROS on Ubuntu 14.04 you have to use the follow commands on terminal

$ touch /etc/apt/sources.list.d/ros-latest.list
$ echo "deb http://packages.ros.org/ros/ubuntu trusty main" >> /etc/apt/sources.list.d/ros-latest.list 
$ wget https://raw.githubusercontent.com/ros/rosdistro/master/ros.key
$ sudo apt-key add ros.key
$ sudo apt-get update

If you want to install the whole ROS the follow command will do

$ sudo apt-get ros-indigo-desktop-full

To set up the ROS you use the follow command

$ sudo rosdep init

To configure your account

$ rosdep update

and to set all the environment variables

source /opt/ros/indigo/setup.bash

To check if everything worked just fine, you can use this command

$ export | grep ROS


