// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_my_interfaces:srv/TurtleSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtle_my_interfaces/srv/turtle_srv.h"


#ifndef TURTLE_MY_INTERFACES__SRV__DETAIL__TURTLE_SRV__STRUCT_H_
#define TURTLE_MY_INTERFACES__SRV__DETAIL__TURTLE_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TurtleSrv in the package turtle_my_interfaces.
typedef struct turtle_my_interfaces__srv__TurtleSrv_Request
{
  /// 目标X坐标
  float x;
  /// 目标Y坐标
  float y;
  /// 目标朝向角度（弧度）
  float theta;
} turtle_my_interfaces__srv__TurtleSrv_Request;

// Struct for a sequence of turtle_my_interfaces__srv__TurtleSrv_Request.
typedef struct turtle_my_interfaces__srv__TurtleSrv_Request__Sequence
{
  turtle_my_interfaces__srv__TurtleSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_my_interfaces__srv__TurtleSrv_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TurtleSrv in the package turtle_my_interfaces.
typedef struct turtle_my_interfaces__srv__TurtleSrv_Response
{
  /// 是否成功
  bool success;
  /// 状态信息
  rosidl_runtime_c__String message;
} turtle_my_interfaces__srv__TurtleSrv_Response;

// Struct for a sequence of turtle_my_interfaces__srv__TurtleSrv_Response.
typedef struct turtle_my_interfaces__srv__TurtleSrv_Response__Sequence
{
  turtle_my_interfaces__srv__TurtleSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_my_interfaces__srv__TurtleSrv_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  turtle_my_interfaces__srv__TurtleSrv_Event__request__MAX_SIZE = 1
};
// response
enum
{
  turtle_my_interfaces__srv__TurtleSrv_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/TurtleSrv in the package turtle_my_interfaces.
typedef struct turtle_my_interfaces__srv__TurtleSrv_Event
{
  service_msgs__msg__ServiceEventInfo info;
  turtle_my_interfaces__srv__TurtleSrv_Request__Sequence request;
  turtle_my_interfaces__srv__TurtleSrv_Response__Sequence response;
} turtle_my_interfaces__srv__TurtleSrv_Event;

// Struct for a sequence of turtle_my_interfaces__srv__TurtleSrv_Event.
typedef struct turtle_my_interfaces__srv__TurtleSrv_Event__Sequence
{
  turtle_my_interfaces__srv__TurtleSrv_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_my_interfaces__srv__TurtleSrv_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_MY_INTERFACES__SRV__DETAIL__TURTLE_SRV__STRUCT_H_
