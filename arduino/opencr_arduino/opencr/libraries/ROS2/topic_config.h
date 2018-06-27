/*
 * topic_config.hpp
 *
 *  Created on: May 16, 2018
 *      Author: Kei
 */

#ifndef ROS2_TOPIC_CONFIG_H_
#define ROS2_TOPIC_CONFIG_H_

enum TopicIdNumbering 
{
    STD_MSGS_BOOL_TOPIC = 1,
    STD_MSGS_STRING_TOPIC,
    STD_MSGS_MULTI_ARRAY_DIMENSION_TOPIC,
    GEOMETRY_MSGS_VECTOR3_TOPIC,
    GEOMETRY_MSGS_TWIST_TOPIC,
    STD_MSGS_HEADER_TOPIC,
    BUILTIN_INTERFACES_DURATION_TOPIC,
    BUILTIN_INTERFACES_TIME_TOPIC,
    GEOMETRY_MSGS_QUATERNION_TOPIC,
    SENSOR_MSGS_IMU_TOPIC,
    SENSOR_MSGS_LASER_SCAN_TOPIC,
    GEOMETRY_MSGS_POINT_TOPIC,
    GEOMETRY_MSGS_POSE_TOPIC,
    GEOMETRY_MSGS_POSE_WITH_CONVARIANCE_TOPIC,
    GEOMETRY_MSGS_TWIST_WITH_CONVARIANCE_TOPIC,
    NAV_MSGS_ODOMETRY_TOPIC,
    GEOMETRY_MSGS_TRANSFORM_TOPIC,
    GEOMETRY_MSGS_TRANSFORM_STAMPED_TOPIC
};

#endif /* ROS2_TOPIC_CONFIG_H_ */
