# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target turtle_my_interfaces::turtle_my_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${turtle_my_interfaces_TARGETS}.
if(turtle_my_interfaces_TARGETS AND NOT TARGET turtle_my_interfaces::turtle_my_interfaces)
  add_library(turtle_my_interfaces::turtle_my_interfaces INTERFACE IMPORTED)
  set_target_properties(turtle_my_interfaces::turtle_my_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${turtle_my_interfaces_TARGETS}")
endif()
