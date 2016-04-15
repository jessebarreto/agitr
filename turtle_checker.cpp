/*
 * turtle_checker.cpp
 *
 *  Created on: Apr 15, 2016
 *      Author: jesseh
 */

#include <ros/ros.h>
#include <turtlesim/Pose.h>
#include <iomanip> //for std::setprecision and std::fixed

void poseMsgReceived(const turtlesim::Pose& msg)
{
	ROS_INFO_STREAM(std::setprecision(2) << std::fixed << "Pos: " << msg.x << " , "
			<< msg.y << "\n" << "Ang: " << msg.theta << "\n");

}


int main(int argc, char **argv)
{

	ros::init(argc, argv, "turtle_pose");
	ros::NodeHandle newnode;

	ros::Subscriber turtlesub = newnode.subscribe("turtle1/pose", 1000, &poseMsgReceived);

	ros::spin();

	return 0;

}


