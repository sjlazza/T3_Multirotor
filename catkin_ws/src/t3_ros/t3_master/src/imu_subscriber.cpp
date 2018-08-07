#include "ros/ros.h"
#include "sensor_msgs/Imu.h"

void msgCallback(const sensor_msgs::Imu::ConstPtr& msg){
    ROS_INFO("receive msg");

}

int main(int argc, char **argv){
    ros::init(argc, argv, "imu_subscriber");
    ros::NodeHandle nh;

    ros::Subscriber imu_sub=nh.subscribe("/imu/data", 100, msgCallback);

    ros::spin();

    return 0;
}
