#include <ros/ros.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    ros::init(argc, argv, "my_hello_world_node");
    std::printf("Hello world\n");
}
