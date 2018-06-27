// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.


/*! 
 * @file Odometry.hpp
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */
#ifndef _NAV_MSGS_ODOMETRY_HPP_
#define _NAV_MSGS_ODOMETRY_HPP_


#include "micrortps.hpp"
#include <topic_config.h>
#include <topic.hpp>


#include "std_msgs/Header.hpp"
#include "geometry_msgs/PoseWithCovariance.hpp"
#include "geometry_msgs/TwistWithCovariance.hpp"

namespace nav_msgs {


class Odometry : public ros2::Topic<Odometry>
{
public: 
    std_msgs::Header header;
    char* child_frame_id;
    geometry_msgs::PoseWithCovariance pose;
    geometry_msgs::TwistWithCovariance twist;

  Odometry():
    Topic("nav_msgs::msg::dds_::Odometry_", NAV_MSGS_ODOMETRY_TOPIC),
    header(), child_frame_id(NULL), pose(), twist()
  { 
  }

  virtual bool serialize(MicroBuffer* writer, const Odometry* topic)
  {
    header.serialize(writer, &topic->header);
    serialize_sequence_char(writer, topic->child_frame_id, (uint32_t)(strlen(topic->child_frame_id) + 1));
    pose.serialize(writer, &topic->pose);
    twist.serialize(writer, &topic->twist);

    return writer->error == BUFFER_OK;
  }

  virtual bool deserialize(MicroBuffer* reader, Odometry* topic)
  {
    header.deserialize(reader, &topic->header);
    deserialize_sequence_char(reader, &topic->child_frame_id, &size_child_frame_id);
    pose.deserialize(reader, &topic->pose);
    twist.deserialize(reader, &topic->twist);
    
    return reader->error == BUFFER_OK;
  }

  virtual uint32_t size_of_topic(const Odometry* topic)
  {
    uint32_t size = 0;

    size += header.size_of_topic(&topic->header);
    size += 4 + get_alignment(size, 4) + (uint32_t)(strlen(topic->child_frame_id) + 1);
    size += pose.size_of_topic(&topic->pose);
    size += twist.size_of_topic(&topic->twist);

    return size;
  }

};

} // namespace nav_msgs


#endif // _NAV_MSGS_ODOMETRY_HPP_
