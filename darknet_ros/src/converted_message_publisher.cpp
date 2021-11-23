/*
#include "ros/ros.h"

//  darknet_ros_msgs
#include <darknet_ros_msgs/BoundingBox.h>
#include <darknet_ros_msgs/BoundingBoxes.h>

//  messege of publisher
#include <vision_msgs/Detection2DArray.h>
#include <vision_msgs/Detection2D.h>
#include <vision_msgs/ObjectHypothesisWithPose.h>
#include <vision_msgs/BoundingBox2D.h>
#include <geometry_msgs/Pose2D.msg>

using namespace vision_msgs;
using namespace darknet_ros_msgs;

ros::Publisher detection2D_pub;

void detectionCallback(const BoundingBoxes& msg) {
    //  get only BoundingBox
    BoundingBox[] bounding_boxes = msg.bounding_boxes;
    //  prepare Detection2DArray
    Detection2DArray array;
    
    for (BoundingBox bb : bounding_boxes) {
        Detection2D object;
        ObjectHypothesisWithPose;

    }

    // detection2D_pub.publish(arry);
}

int main(int argc, char** argv) {
    ros::init(argc, argv, "darknet_ros_message_converter");
    ros::NodeHandle nodeHandle("~");

    //  subscriber
    ros::Subscriber detectionSub = pnh.subscribe("/darknet_ros/bounding_boxes", 10, detectionCallback);
    //  publisher
    detection2D_pub = n.advertise<Detection2DArray>("/darknet_ros/converted_message", 1000);

    ros::spin();
    return 0;
}
*/