#include <ros/ros.h>
#include <std_msgs/String.h>
#include <bits/stdc++.h>

#define LOOP_RATE_HZ (5)


void helloSubCallback(std_msgs::StringConstPtr msg)
{
    std::string msgStr = msg->data;
    printf(("Subscriber: %s\n"), msgStr.c_str());
}


int main(int argc, char** argv)
{
    ros::init(argc, argv, "hello_sub");
    ros::NodeHandle nh;

    ros::Subscriber helloSub = nh.subscribe("/my_hello_world/hello_topic", 1, &helloSubCallback);
    
    ros::spin();
    
    return 0;
}
