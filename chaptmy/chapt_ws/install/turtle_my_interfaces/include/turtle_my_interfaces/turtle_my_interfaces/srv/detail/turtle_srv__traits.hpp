// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_my_interfaces:srv/TurtleSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtle_my_interfaces/srv/turtle_srv.hpp"


#ifndef TURTLE_MY_INTERFACES__SRV__DETAIL__TURTLE_SRV__TRAITS_HPP_
#define TURTLE_MY_INTERFACES__SRV__DETAIL__TURTLE_SRV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtle_my_interfaces/srv/detail/turtle_srv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtle_my_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TurtleSrv_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleSrv_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtle_my_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtle_my_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_my_interfaces::srv::TurtleSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_my_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_my_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtle_my_interfaces::srv::TurtleSrv_Request & msg)
{
  return turtle_my_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_my_interfaces::srv::TurtleSrv_Request>()
{
  return "turtle_my_interfaces::srv::TurtleSrv_Request";
}

template<>
inline const char * name<turtle_my_interfaces::srv::TurtleSrv_Request>()
{
  return "turtle_my_interfaces/srv/TurtleSrv_Request";
}

template<>
struct has_fixed_size<turtle_my_interfaces::srv::TurtleSrv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_my_interfaces::srv::TurtleSrv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_my_interfaces::srv::TurtleSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace turtle_my_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TurtleSrv_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleSrv_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtle_my_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtle_my_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_my_interfaces::srv::TurtleSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_my_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_my_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtle_my_interfaces::srv::TurtleSrv_Response & msg)
{
  return turtle_my_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_my_interfaces::srv::TurtleSrv_Response>()
{
  return "turtle_my_interfaces::srv::TurtleSrv_Response";
}

template<>
inline const char * name<turtle_my_interfaces::srv::TurtleSrv_Response>()
{
  return "turtle_my_interfaces/srv/TurtleSrv_Response";
}

template<>
struct has_fixed_size<turtle_my_interfaces::srv::TurtleSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_my_interfaces::srv::TurtleSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtle_my_interfaces::srv::TurtleSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace turtle_my_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TurtleSrv_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleSrv_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleSrv_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtle_my_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtle_my_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_my_interfaces::srv::TurtleSrv_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_my_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_my_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtle_my_interfaces::srv::TurtleSrv_Event & msg)
{
  return turtle_my_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_my_interfaces::srv::TurtleSrv_Event>()
{
  return "turtle_my_interfaces::srv::TurtleSrv_Event";
}

template<>
inline const char * name<turtle_my_interfaces::srv::TurtleSrv_Event>()
{
  return "turtle_my_interfaces/srv/TurtleSrv_Event";
}

template<>
struct has_fixed_size<turtle_my_interfaces::srv::TurtleSrv_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_my_interfaces::srv::TurtleSrv_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<turtle_my_interfaces::srv::TurtleSrv_Request>::value && has_bounded_size<turtle_my_interfaces::srv::TurtleSrv_Response>::value> {};

template<>
struct is_message<turtle_my_interfaces::srv::TurtleSrv_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_my_interfaces::srv::TurtleSrv>()
{
  return "turtle_my_interfaces::srv::TurtleSrv";
}

template<>
inline const char * name<turtle_my_interfaces::srv::TurtleSrv>()
{
  return "turtle_my_interfaces/srv/TurtleSrv";
}

template<>
struct has_fixed_size<turtle_my_interfaces::srv::TurtleSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<turtle_my_interfaces::srv::TurtleSrv_Request>::value &&
    has_fixed_size<turtle_my_interfaces::srv::TurtleSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtle_my_interfaces::srv::TurtleSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<turtle_my_interfaces::srv::TurtleSrv_Request>::value &&
    has_bounded_size<turtle_my_interfaces::srv::TurtleSrv_Response>::value
  >
{
};

template<>
struct is_service<turtle_my_interfaces::srv::TurtleSrv>
  : std::true_type
{
};

template<>
struct is_service_request<turtle_my_interfaces::srv::TurtleSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtle_my_interfaces::srv::TurtleSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_MY_INTERFACES__SRV__DETAIL__TURTLE_SRV__TRAITS_HPP_
