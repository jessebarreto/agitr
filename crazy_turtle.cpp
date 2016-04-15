

#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

	ros::init(argc, argv, "crazy_turtle");

	ros::NodeHandle nodecrazy;

	ros::Publisher crazypub = nodecrazy.advertise<geometry_msgs::Twist>("turtle1/cmd_vel", 1000);

	srand(time(0));

	ros::Rate rate(2);

	for(;ros::ok();)
	{
		geometry_msgs::Twist msg;
		msg.linear.x = 1.5*double(rand())/double(RAND_MAX);
		msg.angular.z = 2.5*(2*double(rand())/double(RAND_MAX) - 1);

		crazypub.publish(msg);

		ROS_INFO_STREAM("Send vel cmd:\nX  :" << msg.linear.x << "\nAng:" << msg.angular.z << "\n");

		rate.sleep();
	}

	return 0;
}
