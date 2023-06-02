#include <ros/ros.h>
#include <std_msgs/String.h>
#include <bits/stdc++.h>

#define LOOP_RATE_HZ (5)

int main(int argc, char** argv)
{
    ros::init(argc, argv, "hello_pub");
    ros::NodeHandle nh;

    ros::Publisher helloPub = nh.advertise<std_msgs::String>("/my_hello_world/hello_topic", 1);
    
    ros::Rate loopRate(LOOP_RATE_HZ);

    while(ros::ok())
    {
        ros::spinOnce();
        std::string s = "Hello world!";
        std_msgs::String sMsg;

        printf("Publisher: %s \n", s.c_str());

        sMsg.data = s;
        helloPub.publish(sMsg);
        loopRate.sleep();
    }
    
    return 0;
}
