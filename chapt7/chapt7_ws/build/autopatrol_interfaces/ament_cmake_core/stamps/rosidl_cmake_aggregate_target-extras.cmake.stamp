# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target autopatrol_interfaces::autopatrol_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${autopatrol_interfaces_TARGETS}.
if(autopatrol_interfaces_TARGETS AND NOT TARGET autopatrol_interfaces::autopatrol_interfaces)
  add_library(autopatrol_interfaces::autopatrol_interfaces INTERFACE IMPORTED)
  set_target_properties(autopatrol_interfaces::autopatrol_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${autopatrol_interfaces_TARGETS}")
endif()
