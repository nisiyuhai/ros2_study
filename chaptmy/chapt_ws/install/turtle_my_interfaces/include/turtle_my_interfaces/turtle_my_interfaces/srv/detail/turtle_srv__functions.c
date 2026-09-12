// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_my_interfaces:srv/TurtleSrv.idl
// generated code does not contain a copyright notice
#include "turtle_my_interfaces/srv/detail/turtle_srv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
turtle_my_interfaces__srv__TurtleSrv_Request__init(turtle_my_interfaces__srv__TurtleSrv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // theta
  return true;
}

void
turtle_my_interfaces__srv__TurtleSrv_Request__fini(turtle_my_interfaces__srv__TurtleSrv_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // theta
}

bool
turtle_my_interfaces__srv__TurtleSrv_Request__are_equal(const turtle_my_interfaces__srv__TurtleSrv_Request * lhs, const turtle_my_interfaces__srv__TurtleSrv_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  return true;
}

bool
turtle_my_interfaces__srv__TurtleSrv_Request__copy(
  const turtle_my_interfaces__srv__TurtleSrv_Request * input,
  turtle_my_interfaces__srv__TurtleSrv_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // theta
  output->theta = input->theta;
  return true;
}

turtle_my_interfaces__srv__TurtleSrv_Request *
turtle_my_interfaces__srv__TurtleSrv_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_my_interfaces__srv__TurtleSrv_Request * msg = (turtle_my_interfaces__srv__TurtleSrv_Request *)allocator.allocate(sizeof(turtle_my_interfaces__srv__TurtleSrv_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_my_interfaces__srv__TurtleSrv_Request));
  bool success = turtle_my_interfaces__srv__TurtleSrv_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_my_interfaces__srv__TurtleSrv_Request__destroy(turtle_my_interfaces__srv__TurtleSrv_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_my_interfaces__srv__TurtleSrv_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_my_interfaces__srv__TurtleSrv_Request__Sequence__init(turtle_my_interfaces__srv__TurtleSrv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_my_interfaces__srv__TurtleSrv_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(turtle_my_interfaces__srv__TurtleSrv_Request)) {
      return false;
    }
    data = (turtle_my_interfaces__srv__TurtleSrv_Request *)allocator.zero_allocate(size, sizeof(turtle_my_interfaces__srv__TurtleSrv_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_my_interfaces__srv__TurtleSrv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_my_interfaces__srv__TurtleSrv_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
turtle_my_interfaces__srv__TurtleSrv_Request__Sequence__fini(turtle_my_interfaces__srv__TurtleSrv_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_my_interfaces__srv__TurtleSrv_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

turtle_my_interfaces__srv__TurtleSrv_Request__Sequence *
turtle_my_interfaces__srv__TurtleSrv_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_my_interfaces__srv__TurtleSrv_Request__Sequence * array = (turtle_my_interfaces__srv__TurtleSrv_Request__Sequence *)allocator.allocate(sizeof(turtle_my_interfaces__srv__TurtleSrv_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_my_interfaces__srv__TurtleSrv_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_my_interfaces__srv__TurtleSrv_Request__Sequence__destroy(turtle_my_interfaces__srv__TurtleSrv_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_my_interfaces__srv__TurtleSrv_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_my_interfaces__srv__TurtleSrv_Request__Sequence__are_equal(const turtle_my_interfaces__srv__TurtleSrv_Request__Sequence * lhs, const turtle_my_interfaces__srv__TurtleSrv_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_my_interfaces__srv__TurtleSrv_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_my_interfaces__srv__TurtleSrv_Request__Sequence__copy(
  const turtle_my_interfaces__srv__TurtleSrv_Request__Sequence * input,
  turtle_my_interfaces__srv__TurtleSrv_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(turtle_my_interfaces__srv__TurtleSrv_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(turtle_my_interfaces__srv__TurtleSrv_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtle_my_interfaces__srv__TurtleSrv_Request * data =
      (turtle_my_interfaces__srv__TurtleSrv_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_my_interfaces__srv__TurtleSrv_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtle_my_interfaces__srv__TurtleSrv_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_my_interfaces__srv__TurtleSrv_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
turtle_my_interfaces__srv__TurtleSrv_Response__init(turtle_my_interfaces__srv__TurtleSrv_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    turtle_my_interfaces__srv__TurtleSrv_Response__fini(msg);
    return false;
  }
  return true;
}

void
turtle_my_interfaces__srv__TurtleSrv_Response__fini(turtle_my_interfaces__srv__TurtleSrv_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
turtle_my_interfaces__srv__TurtleSrv_Response__are_equal(const turtle_my_interfaces__srv__TurtleSrv_Response * lhs, const turtle_my_interfaces__srv__TurtleSrv_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
turtle_my_interfaces__srv__TurtleSrv_Response__copy(
  const turtle_my_interfaces__srv__TurtleSrv_Response * input,
  turtle_my_interfaces__srv__TurtleSrv_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

turtle_my_interfaces__srv__TurtleSrv_Response *
turtle_my_interfaces__srv__TurtleSrv_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_my_interfaces__srv__TurtleSrv_Response * msg = (turtle_my_interfaces__srv__TurtleSrv_Response *)allocator.allocate(sizeof(turtle_my_interfaces__srv__TurtleSrv_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_my_interfaces__srv__TurtleSrv_Response));
  bool success = turtle_my_interfaces__srv__TurtleSrv_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_my_interfaces__srv__TurtleSrv_Response__destroy(turtle_my_interfaces__srv__TurtleSrv_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_my_interfaces__srv__TurtleSrv_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_my_interfaces__srv__TurtleSrv_Response__Sequence__init(turtle_my_interfaces__srv__TurtleSrv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_my_interfaces__srv__TurtleSrv_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(turtle_my_interfaces__srv__TurtleSrv_Response)) {
      return false;
    }
    data = (turtle_my_interfaces__srv__TurtleSrv_Response *)allocator.zero_allocate(size, sizeof(turtle_my_interfaces__srv__TurtleSrv_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_my_interfaces__srv__TurtleSrv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_my_interfaces__srv__TurtleSrv_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
turtle_my_interfaces__srv__TurtleSrv_Response__Sequence__fini(turtle_my_interfaces__srv__TurtleSrv_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_my_interfaces__srv__TurtleSrv_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

turtle_my_interfaces__srv__TurtleSrv_Response__Sequence *
turtle_my_interfaces__srv__TurtleSrv_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_my_interfaces__srv__TurtleSrv_Response__Sequence * array = (turtle_my_interfaces__srv__TurtleSrv_Response__Sequence *)allocator.allocate(sizeof(turtle_my_interfaces__srv__TurtleSrv_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_my_interfaces__srv__TurtleSrv_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_my_interfaces__srv__TurtleSrv_Response__Sequence__destroy(turtle_my_interfaces__srv__TurtleSrv_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_my_interfaces__srv__TurtleSrv_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_my_interfaces__srv__TurtleSrv_Response__Sequence__are_equal(const turtle_my_interfaces__srv__TurtleSrv_Response__Sequence * lhs, const turtle_my_interfaces__srv__TurtleSrv_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_my_interfaces__srv__TurtleSrv_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_my_interfaces__srv__TurtleSrv_Response__Sequence__copy(
  const turtle_my_interfaces__srv__TurtleSrv_Response__Sequence * input,
  turtle_my_interfaces__srv__TurtleSrv_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(turtle_my_interfaces__srv__TurtleSrv_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(turtle_my_interfaces__srv__TurtleSrv_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtle_my_interfaces__srv__TurtleSrv_Response * data =
      (turtle_my_interfaces__srv__TurtleSrv_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_my_interfaces__srv__TurtleSrv_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtle_my_interfaces__srv__TurtleSrv_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_my_interfaces__srv__TurtleSrv_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "turtle_my_interfaces/srv/detail/turtle_srv__functions.h"

bool
turtle_my_interfaces__srv__TurtleSrv_Event__init(turtle_my_interfaces__srv__TurtleSrv_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    turtle_my_interfaces__srv__TurtleSrv_Event__fini(msg);
    return false;
  }
  // request
  if (!turtle_my_interfaces__srv__TurtleSrv_Request__Sequence__init(&msg->request, 0)) {
    turtle_my_interfaces__srv__TurtleSrv_Event__fini(msg);
    return false;
  }
  // response
  if (!turtle_my_interfaces__srv__TurtleSrv_Response__Sequence__init(&msg->response, 0)) {
    turtle_my_interfaces__srv__TurtleSrv_Event__fini(msg);
    return false;
  }
  return true;
}

void
turtle_my_interfaces__srv__TurtleSrv_Event__fini(turtle_my_interfaces__srv__TurtleSrv_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  turtle_my_interfaces__srv__TurtleSrv_Request__Sequence__fini(&msg->request);
  // response
  turtle_my_interfaces__srv__TurtleSrv_Response__Sequence__fini(&msg->response);
}

bool
turtle_my_interfaces__srv__TurtleSrv_Event__are_equal(const turtle_my_interfaces__srv__TurtleSrv_Event * lhs, const turtle_my_interfaces__srv__TurtleSrv_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!turtle_my_interfaces__srv__TurtleSrv_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!turtle_my_interfaces__srv__TurtleSrv_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
turtle_my_interfaces__srv__TurtleSrv_Event__copy(
  const turtle_my_interfaces__srv__TurtleSrv_Event * input,
  turtle_my_interfaces__srv__TurtleSrv_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!turtle_my_interfaces__srv__TurtleSrv_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!turtle_my_interfaces__srv__TurtleSrv_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

turtle_my_interfaces__srv__TurtleSrv_Event *
turtle_my_interfaces__srv__TurtleSrv_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_my_interfaces__srv__TurtleSrv_Event * msg = (turtle_my_interfaces__srv__TurtleSrv_Event *)allocator.allocate(sizeof(turtle_my_interfaces__srv__TurtleSrv_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_my_interfaces__srv__TurtleSrv_Event));
  bool success = turtle_my_interfaces__srv__TurtleSrv_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_my_interfaces__srv__TurtleSrv_Event__destroy(turtle_my_interfaces__srv__TurtleSrv_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_my_interfaces__srv__TurtleSrv_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_my_interfaces__srv__TurtleSrv_Event__Sequence__init(turtle_my_interfaces__srv__TurtleSrv_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_my_interfaces__srv__TurtleSrv_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(turtle_my_interfaces__srv__TurtleSrv_Event)) {
      return false;
    }
    data = (turtle_my_interfaces__srv__TurtleSrv_Event *)allocator.zero_allocate(size, sizeof(turtle_my_interfaces__srv__TurtleSrv_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_my_interfaces__srv__TurtleSrv_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_my_interfaces__srv__TurtleSrv_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
turtle_my_interfaces__srv__TurtleSrv_Event__Sequence__fini(turtle_my_interfaces__srv__TurtleSrv_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_my_interfaces__srv__TurtleSrv_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

turtle_my_interfaces__srv__TurtleSrv_Event__Sequence *
turtle_my_interfaces__srv__TurtleSrv_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_my_interfaces__srv__TurtleSrv_Event__Sequence * array = (turtle_my_interfaces__srv__TurtleSrv_Event__Sequence *)allocator.allocate(sizeof(turtle_my_interfaces__srv__TurtleSrv_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_my_interfaces__srv__TurtleSrv_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_my_interfaces__srv__TurtleSrv_Event__Sequence__destroy(turtle_my_interfaces__srv__TurtleSrv_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_my_interfaces__srv__TurtleSrv_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_my_interfaces__srv__TurtleSrv_Event__Sequence__are_equal(const turtle_my_interfaces__srv__TurtleSrv_Event__Sequence * lhs, const turtle_my_interfaces__srv__TurtleSrv_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_my_interfaces__srv__TurtleSrv_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_my_interfaces__srv__TurtleSrv_Event__Sequence__copy(
  const turtle_my_interfaces__srv__TurtleSrv_Event__Sequence * input,
  turtle_my_interfaces__srv__TurtleSrv_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(turtle_my_interfaces__srv__TurtleSrv_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(turtle_my_interfaces__srv__TurtleSrv_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtle_my_interfaces__srv__TurtleSrv_Event * data =
      (turtle_my_interfaces__srv__TurtleSrv_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_my_interfaces__srv__TurtleSrv_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtle_my_interfaces__srv__TurtleSrv_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_my_interfaces__srv__TurtleSrv_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
