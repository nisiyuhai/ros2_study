// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_my_interfaces:srv/TurtleSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtle_my_interfaces/srv/turtle_srv.hpp"


#ifndef TURTLE_MY_INTERFACES__SRV__DETAIL__TURTLE_SRV__BUILDER_HPP_
#define TURTLE_MY_INTERFACES__SRV__DETAIL__TURTLE_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_my_interfaces/srv/detail/turtle_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_my_interfaces
{

namespace srv
{

namespace builder
{

class Init_TurtleSrv_Request_theta
{
public:
  explicit Init_TurtleSrv_Request_theta(::turtle_my_interfaces::srv::TurtleSrv_Request & msg)
  : msg_(msg)
  {}
  ::turtle_my_interfaces::srv::TurtleSrv_Request theta(::turtle_my_interfaces::srv::TurtleSrv_Request::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_my_interfaces::srv::TurtleSrv_Request msg_;
};

class Init_TurtleSrv_Request_y
{
public:
  explicit Init_TurtleSrv_Request_y(::turtle_my_interfaces::srv::TurtleSrv_Request & msg)
  : msg_(msg)
  {}
  Init_TurtleSrv_Request_theta y(::turtle_my_interfaces::srv::TurtleSrv_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_TurtleSrv_Request_theta(msg_);
  }

private:
  ::turtle_my_interfaces::srv::TurtleSrv_Request msg_;
};

class Init_TurtleSrv_Request_x
{
public:
  Init_TurtleSrv_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleSrv_Request_y x(::turtle_my_interfaces::srv::TurtleSrv_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TurtleSrv_Request_y(msg_);
  }

private:
  ::turtle_my_interfaces::srv::TurtleSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_my_interfaces::srv::TurtleSrv_Request>()
{
  return turtle_my_interfaces::srv::builder::Init_TurtleSrv_Request_x();
}

}  // namespace turtle_my_interfaces


namespace turtle_my_interfaces
{

namespace srv
{

namespace builder
{

class Init_TurtleSrv_Response_message
{
public:
  explicit Init_TurtleSrv_Response_message(::turtle_my_interfaces::srv::TurtleSrv_Response & msg)
  : msg_(msg)
  {}
  ::turtle_my_interfaces::srv::TurtleSrv_Response message(::turtle_my_interfaces::srv::TurtleSrv_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_my_interfaces::srv::TurtleSrv_Response msg_;
};

class Init_TurtleSrv_Response_success
{
public:
  Init_TurtleSrv_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleSrv_Response_message success(::turtle_my_interfaces::srv::TurtleSrv_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_TurtleSrv_Response_message(msg_);
  }

private:
  ::turtle_my_interfaces::srv::TurtleSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_my_interfaces::srv::TurtleSrv_Response>()
{
  return turtle_my_interfaces::srv::builder::Init_TurtleSrv_Response_success();
}

}  // namespace turtle_my_interfaces


namespace turtle_my_interfaces
{

namespace srv
{

namespace builder
{

class Init_TurtleSrv_Event_response
{
public:
  explicit Init_TurtleSrv_Event_response(::turtle_my_interfaces::srv::TurtleSrv_Event & msg)
  : msg_(msg)
  {}
  ::turtle_my_interfaces::srv::TurtleSrv_Event response(::turtle_my_interfaces::srv::TurtleSrv_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_my_interfaces::srv::TurtleSrv_Event msg_;
};

class Init_TurtleSrv_Event_request
{
public:
  explicit Init_TurtleSrv_Event_request(::turtle_my_interfaces::srv::TurtleSrv_Event & msg)
  : msg_(msg)
  {}
  Init_TurtleSrv_Event_response request(::turtle_my_interfaces::srv::TurtleSrv_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TurtleSrv_Event_response(msg_);
  }

private:
  ::turtle_my_interfaces::srv::TurtleSrv_Event msg_;
};

class Init_TurtleSrv_Event_info
{
public:
  Init_TurtleSrv_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleSrv_Event_request info(::turtle_my_interfaces::srv::TurtleSrv_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TurtleSrv_Event_request(msg_);
  }

private:
  ::turtle_my_interfaces::srv::TurtleSrv_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_my_interfaces::srv::TurtleSrv_Event>()
{
  return turtle_my_interfaces::srv::builder::Init_TurtleSrv_Event_info();
}

}  // namespace turtle_my_interfaces

#endif  // TURTLE_MY_INTERFACES__SRV__DETAIL__TURTLE_SRV__BUILDER_HPP_
