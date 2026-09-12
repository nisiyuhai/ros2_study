// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from turtle_my_interfaces:srv/TurtleSrv.idl
// generated code does not contain a copyright notice

#include "turtle_my_interfaces/srv/detail/turtle_srv__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_turtle_my_interfaces
const rosidl_type_hash_t *
turtle_my_interfaces__srv__TurtleSrv__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb0, 0xb0, 0x71, 0xee, 0x78, 0x50, 0x5a, 0xf3,
      0x2b, 0x0d, 0x33, 0xed, 0x28, 0xb1, 0x68, 0x31,
      0x1d, 0xe8, 0x2b, 0xaf, 0x15, 0x8d, 0xc4, 0x75,
      0xd0, 0x80, 0x54, 0x48, 0x3e, 0x08, 0xa2, 0x18,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtle_my_interfaces
const rosidl_type_hash_t *
turtle_my_interfaces__srv__TurtleSrv_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd9, 0x90, 0xad, 0xa8, 0x11, 0xe2, 0x83, 0x91,
      0x18, 0x5d, 0x80, 0x6c, 0xd4, 0x85, 0x31, 0x66,
      0xac, 0x21, 0x0a, 0xb2, 0xf5, 0xc8, 0x44, 0xb3,
      0xf1, 0x29, 0xbe, 0x98, 0xf0, 0xa4, 0x25, 0x78,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtle_my_interfaces
const rosidl_type_hash_t *
turtle_my_interfaces__srv__TurtleSrv_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x83, 0x9a, 0x22, 0x49, 0xfe, 0x31, 0xdd, 0x44,
      0x2c, 0x3c, 0x6a, 0x5a, 0xcb, 0x9a, 0xf9, 0x25,
      0x92, 0xd4, 0x03, 0xd8, 0x35, 0x7a, 0x6f, 0x9b,
      0xbf, 0xd2, 0x41, 0xf7, 0xd2, 0xb3, 0xa4, 0x25,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtle_my_interfaces
const rosidl_type_hash_t *
turtle_my_interfaces__srv__TurtleSrv_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7b, 0x8b, 0xe2, 0x77, 0xb0, 0x18, 0x0e, 0xad,
      0x35, 0x40, 0xf0, 0x00, 0x9a, 0x58, 0xc5, 0xbc,
      0x0a, 0xfc, 0x86, 0x55, 0x05, 0xfd, 0xe2, 0xbb,
      0x40, 0x33, 0x13, 0xae, 0x02, 0x31, 0xa8, 0xb6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char turtle_my_interfaces__srv__TurtleSrv__TYPE_NAME[] = "turtle_my_interfaces/srv/TurtleSrv";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char turtle_my_interfaces__srv__TurtleSrv_Event__TYPE_NAME[] = "turtle_my_interfaces/srv/TurtleSrv_Event";
static char turtle_my_interfaces__srv__TurtleSrv_Request__TYPE_NAME[] = "turtle_my_interfaces/srv/TurtleSrv_Request";
static char turtle_my_interfaces__srv__TurtleSrv_Response__TYPE_NAME[] = "turtle_my_interfaces/srv/TurtleSrv_Response";

// Define type names, field names, and default values
static char turtle_my_interfaces__srv__TurtleSrv__FIELD_NAME__request_message[] = "request_message";
static char turtle_my_interfaces__srv__TurtleSrv__FIELD_NAME__response_message[] = "response_message";
static char turtle_my_interfaces__srv__TurtleSrv__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field turtle_my_interfaces__srv__TurtleSrv__FIELDS[] = {
  {
    {turtle_my_interfaces__srv__TurtleSrv__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtle_my_interfaces__srv__TurtleSrv_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_my_interfaces__srv__TurtleSrv__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtle_my_interfaces__srv__TurtleSrv_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_my_interfaces__srv__TurtleSrv__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtle_my_interfaces__srv__TurtleSrv_Event__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription turtle_my_interfaces__srv__TurtleSrv__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {turtle_my_interfaces__srv__TurtleSrv_Event__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {turtle_my_interfaces__srv__TurtleSrv_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {turtle_my_interfaces__srv__TurtleSrv_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtle_my_interfaces__srv__TurtleSrv__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtle_my_interfaces__srv__TurtleSrv__TYPE_NAME, 34, 34},
      {turtle_my_interfaces__srv__TurtleSrv__FIELDS, 3, 3},
    },
    {turtle_my_interfaces__srv__TurtleSrv__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = turtle_my_interfaces__srv__TurtleSrv_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = turtle_my_interfaces__srv__TurtleSrv_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = turtle_my_interfaces__srv__TurtleSrv_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtle_my_interfaces__srv__TurtleSrv_Request__FIELD_NAME__x[] = "x";
static char turtle_my_interfaces__srv__TurtleSrv_Request__FIELD_NAME__y[] = "y";
static char turtle_my_interfaces__srv__TurtleSrv_Request__FIELD_NAME__theta[] = "theta";

static rosidl_runtime_c__type_description__Field turtle_my_interfaces__srv__TurtleSrv_Request__FIELDS[] = {
  {
    {turtle_my_interfaces__srv__TurtleSrv_Request__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_my_interfaces__srv__TurtleSrv_Request__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_my_interfaces__srv__TurtleSrv_Request__FIELD_NAME__theta, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtle_my_interfaces__srv__TurtleSrv_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtle_my_interfaces__srv__TurtleSrv_Request__TYPE_NAME, 42, 42},
      {turtle_my_interfaces__srv__TurtleSrv_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtle_my_interfaces__srv__TurtleSrv_Response__FIELD_NAME__success[] = "success";
static char turtle_my_interfaces__srv__TurtleSrv_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field turtle_my_interfaces__srv__TurtleSrv_Response__FIELDS[] = {
  {
    {turtle_my_interfaces__srv__TurtleSrv_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_my_interfaces__srv__TurtleSrv_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtle_my_interfaces__srv__TurtleSrv_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtle_my_interfaces__srv__TurtleSrv_Response__TYPE_NAME, 43, 43},
      {turtle_my_interfaces__srv__TurtleSrv_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtle_my_interfaces__srv__TurtleSrv_Event__FIELD_NAME__info[] = "info";
static char turtle_my_interfaces__srv__TurtleSrv_Event__FIELD_NAME__request[] = "request";
static char turtle_my_interfaces__srv__TurtleSrv_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field turtle_my_interfaces__srv__TurtleSrv_Event__FIELDS[] = {
  {
    {turtle_my_interfaces__srv__TurtleSrv_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_my_interfaces__srv__TurtleSrv_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {turtle_my_interfaces__srv__TurtleSrv_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_my_interfaces__srv__TurtleSrv_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {turtle_my_interfaces__srv__TurtleSrv_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription turtle_my_interfaces__srv__TurtleSrv_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {turtle_my_interfaces__srv__TurtleSrv_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {turtle_my_interfaces__srv__TurtleSrv_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtle_my_interfaces__srv__TurtleSrv_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtle_my_interfaces__srv__TurtleSrv_Event__TYPE_NAME, 40, 40},
      {turtle_my_interfaces__srv__TurtleSrv_Event__FIELDS, 3, 3},
    },
    {turtle_my_interfaces__srv__TurtleSrv_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = turtle_my_interfaces__srv__TurtleSrv_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = turtle_my_interfaces__srv__TurtleSrv_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe8\\xaf\\xb7\\xe6\\xb1\\x82\\xe9\\x83\\xa8\\xe5\\x88\\x86\n"
  "float32 x          # \\xe7\\x9b\\xae\\xe6\\xa0\\x87X\\xe5\\x9d\\x90\\xe6\\xa0\\x87\n"
  "float32 y          # \\xe7\\x9b\\xae\\xe6\\xa0\\x87Y\\xe5\\x9d\\x90\\xe6\\xa0\\x87\n"
  "float32 theta      # \\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe6\\x9c\\x9d\\xe5\\x90\\x91\\xe8\\xa7\\x92\\xe5\\xba\\xa6\\xef\\xbc\\x88\\xe5\\xbc\\xa7\\xe5\\xba\\xa6\\xef\\xbc\\x89\n"
  "---\n"
  "# \\xe5\\x93\\x8d\\xe5\\xba\\x94\\xe9\\x83\\xa8\\xe5\\x88\\x86\n"
  "bool success       # \\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe6\\x88\\x90\\xe5\\x8a\\x9f\n"
  "string message     # \\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe4\\xbf\\xa1\\xe6\\x81\\xaf";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
turtle_my_interfaces__srv__TurtleSrv__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtle_my_interfaces__srv__TurtleSrv__TYPE_NAME, 34, 34},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 155, 155},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtle_my_interfaces__srv__TurtleSrv_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtle_my_interfaces__srv__TurtleSrv_Request__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtle_my_interfaces__srv__TurtleSrv_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtle_my_interfaces__srv__TurtleSrv_Response__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtle_my_interfaces__srv__TurtleSrv_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtle_my_interfaces__srv__TurtleSrv_Event__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtle_my_interfaces__srv__TurtleSrv__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtle_my_interfaces__srv__TurtleSrv__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *turtle_my_interfaces__srv__TurtleSrv_Event__get_individual_type_description_source(NULL);
    sources[4] = *turtle_my_interfaces__srv__TurtleSrv_Request__get_individual_type_description_source(NULL);
    sources[5] = *turtle_my_interfaces__srv__TurtleSrv_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtle_my_interfaces__srv__TurtleSrv_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtle_my_interfaces__srv__TurtleSrv_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtle_my_interfaces__srv__TurtleSrv_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtle_my_interfaces__srv__TurtleSrv_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtle_my_interfaces__srv__TurtleSrv_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtle_my_interfaces__srv__TurtleSrv_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *turtle_my_interfaces__srv__TurtleSrv_Request__get_individual_type_description_source(NULL);
    sources[4] = *turtle_my_interfaces__srv__TurtleSrv_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
