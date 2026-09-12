// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from turtle_my_interfaces:srv/TurtleSrv.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "turtle_my_interfaces/srv/detail/turtle_srv__functions.h"
#include "turtle_my_interfaces/srv/detail/turtle_srv__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace turtle_my_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TurtleSrv_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TurtleSrv_Request_type_support_ids_t;

static const _TurtleSrv_Request_type_support_ids_t _TurtleSrv_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TurtleSrv_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TurtleSrv_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TurtleSrv_Request_type_support_symbol_names_t _TurtleSrv_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtle_my_interfaces, srv, TurtleSrv_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtle_my_interfaces, srv, TurtleSrv_Request)),
  }
};

typedef struct _TurtleSrv_Request_type_support_data_t
{
  void * data[2];
} _TurtleSrv_Request_type_support_data_t;

static _TurtleSrv_Request_type_support_data_t _TurtleSrv_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TurtleSrv_Request_message_typesupport_map = {
  2,
  "turtle_my_interfaces",
  &_TurtleSrv_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TurtleSrv_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TurtleSrv_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TurtleSrv_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TurtleSrv_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &turtle_my_interfaces__srv__TurtleSrv_Request__get_type_hash,
  &turtle_my_interfaces__srv__TurtleSrv_Request__get_type_description,
  &turtle_my_interfaces__srv__TurtleSrv_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace turtle_my_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtle_my_interfaces::srv::TurtleSrv_Request>()
{
  return &::turtle_my_interfaces::srv::rosidl_typesupport_cpp::TurtleSrv_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtle_my_interfaces, srv, TurtleSrv_Request)() {
  return get_message_type_support_handle<turtle_my_interfaces::srv::TurtleSrv_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtle_my_interfaces/srv/detail/turtle_srv__functions.h"
// already included above
// #include "turtle_my_interfaces/srv/detail/turtle_srv__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtle_my_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TurtleSrv_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TurtleSrv_Response_type_support_ids_t;

static const _TurtleSrv_Response_type_support_ids_t _TurtleSrv_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TurtleSrv_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TurtleSrv_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TurtleSrv_Response_type_support_symbol_names_t _TurtleSrv_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtle_my_interfaces, srv, TurtleSrv_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtle_my_interfaces, srv, TurtleSrv_Response)),
  }
};

typedef struct _TurtleSrv_Response_type_support_data_t
{
  void * data[2];
} _TurtleSrv_Response_type_support_data_t;

static _TurtleSrv_Response_type_support_data_t _TurtleSrv_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TurtleSrv_Response_message_typesupport_map = {
  2,
  "turtle_my_interfaces",
  &_TurtleSrv_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TurtleSrv_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TurtleSrv_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TurtleSrv_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TurtleSrv_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &turtle_my_interfaces__srv__TurtleSrv_Response__get_type_hash,
  &turtle_my_interfaces__srv__TurtleSrv_Response__get_type_description,
  &turtle_my_interfaces__srv__TurtleSrv_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace turtle_my_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtle_my_interfaces::srv::TurtleSrv_Response>()
{
  return &::turtle_my_interfaces::srv::rosidl_typesupport_cpp::TurtleSrv_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtle_my_interfaces, srv, TurtleSrv_Response)() {
  return get_message_type_support_handle<turtle_my_interfaces::srv::TurtleSrv_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtle_my_interfaces/srv/detail/turtle_srv__functions.h"
// already included above
// #include "turtle_my_interfaces/srv/detail/turtle_srv__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtle_my_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TurtleSrv_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TurtleSrv_Event_type_support_ids_t;

static const _TurtleSrv_Event_type_support_ids_t _TurtleSrv_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TurtleSrv_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TurtleSrv_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TurtleSrv_Event_type_support_symbol_names_t _TurtleSrv_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtle_my_interfaces, srv, TurtleSrv_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtle_my_interfaces, srv, TurtleSrv_Event)),
  }
};

typedef struct _TurtleSrv_Event_type_support_data_t
{
  void * data[2];
} _TurtleSrv_Event_type_support_data_t;

static _TurtleSrv_Event_type_support_data_t _TurtleSrv_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TurtleSrv_Event_message_typesupport_map = {
  2,
  "turtle_my_interfaces",
  &_TurtleSrv_Event_message_typesupport_ids.typesupport_identifier[0],
  &_TurtleSrv_Event_message_typesupport_symbol_names.symbol_name[0],
  &_TurtleSrv_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TurtleSrv_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TurtleSrv_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &turtle_my_interfaces__srv__TurtleSrv_Event__get_type_hash,
  &turtle_my_interfaces__srv__TurtleSrv_Event__get_type_description,
  &turtle_my_interfaces__srv__TurtleSrv_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace turtle_my_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtle_my_interfaces::srv::TurtleSrv_Event>()
{
  return &::turtle_my_interfaces::srv::rosidl_typesupport_cpp::TurtleSrv_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtle_my_interfaces, srv, TurtleSrv_Event)() {
  return get_message_type_support_handle<turtle_my_interfaces::srv::TurtleSrv_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "turtle_my_interfaces/srv/detail/turtle_srv__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtle_my_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TurtleSrv_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TurtleSrv_type_support_ids_t;

static const _TurtleSrv_type_support_ids_t _TurtleSrv_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TurtleSrv_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TurtleSrv_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TurtleSrv_type_support_symbol_names_t _TurtleSrv_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtle_my_interfaces, srv, TurtleSrv)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtle_my_interfaces, srv, TurtleSrv)),
  }
};

typedef struct _TurtleSrv_type_support_data_t
{
  void * data[2];
} _TurtleSrv_type_support_data_t;

static _TurtleSrv_type_support_data_t _TurtleSrv_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TurtleSrv_service_typesupport_map = {
  2,
  "turtle_my_interfaces",
  &_TurtleSrv_service_typesupport_ids.typesupport_identifier[0],
  &_TurtleSrv_service_typesupport_symbol_names.symbol_name[0],
  &_TurtleSrv_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TurtleSrv_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TurtleSrv_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<turtle_my_interfaces::srv::TurtleSrv_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<turtle_my_interfaces::srv::TurtleSrv_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<turtle_my_interfaces::srv::TurtleSrv_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<turtle_my_interfaces::srv::TurtleSrv>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<turtle_my_interfaces::srv::TurtleSrv>,
  &turtle_my_interfaces__srv__TurtleSrv__get_type_hash,
  &turtle_my_interfaces__srv__TurtleSrv__get_type_description,
  &turtle_my_interfaces__srv__TurtleSrv__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace turtle_my_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<turtle_my_interfaces::srv::TurtleSrv>()
{
  return &::turtle_my_interfaces::srv::rosidl_typesupport_cpp::TurtleSrv_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, turtle_my_interfaces, srv, TurtleSrv)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<turtle_my_interfaces::srv::TurtleSrv>();
}

#ifdef __cplusplus
}
#endif
