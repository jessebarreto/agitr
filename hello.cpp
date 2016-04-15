/**
 * \brief A small code to send a message through a ROS node
 * \author Jesseh
 *
 *  Created on: Apr 14, 2016
 *      Author: jesseh
 */



#include <ros/ros.h>

int main(int argc, char **argv)
{


	/**
	 *  Initializes the ros node - core communication
	 */
	ros::init(argc, argv, "hello_ros");

	/**
	 *	Creates the node instance
	 */
	ros::NodeHandle nodeHello;

	/**
	 * Send a msg to a log on console
	 */
	ROS_INFO_STREAM("Hello ROS!");

	return 0;
}
