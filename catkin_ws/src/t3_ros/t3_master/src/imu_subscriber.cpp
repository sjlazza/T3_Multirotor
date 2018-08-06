#include "ros/ros.h"
#include "t3_master/imu_subscriber.cpp"

void msgCallback(const ){

}

int main(int argc, char **argv){
    ros::init(argc, argv, "imu_subscriber");
    ros::NodeHandle nh;

    ros::Subscriber imu_sub=nh.subscribe("imu_msg", 100, msgCallback);

    ros::spin();

    return 0;
}