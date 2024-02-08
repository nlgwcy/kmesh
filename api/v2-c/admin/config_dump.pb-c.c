/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: api/admin/config_dump.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "admin/config_dump.pb-c.h"
void   admin__config_dump__init
                     (Admin__ConfigDump         *message)
{
  static const Admin__ConfigDump init_value = ADMIN__CONFIG_DUMP__INIT;
  *message = init_value;
}
size_t admin__config_dump__get_packed_size
                     (const Admin__ConfigDump *message)
{
  assert(message->base.descriptor == &admin__config_dump__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t admin__config_dump__pack
                     (const Admin__ConfigDump *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &admin__config_dump__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t admin__config_dump__pack_to_buffer
                     (const Admin__ConfigDump *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &admin__config_dump__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Admin__ConfigDump *
       admin__config_dump__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Admin__ConfigDump *)
     protobuf_c_message_unpack (&admin__config_dump__descriptor,
                                allocator, len, data);
}
void   admin__config_dump__free_unpacked
                     (Admin__ConfigDump *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &admin__config_dump__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   admin__config_resources__init
                     (Admin__ConfigResources         *message)
{
  static const Admin__ConfigResources init_value = ADMIN__CONFIG_RESOURCES__INIT;
  *message = init_value;
}
size_t admin__config_resources__get_packed_size
                     (const Admin__ConfigResources *message)
{
  assert(message->base.descriptor == &admin__config_resources__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t admin__config_resources__pack
                     (const Admin__ConfigResources *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &admin__config_resources__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t admin__config_resources__pack_to_buffer
                     (const Admin__ConfigResources *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &admin__config_resources__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Admin__ConfigResources *
       admin__config_resources__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Admin__ConfigResources *)
     protobuf_c_message_unpack (&admin__config_resources__descriptor,
                                allocator, len, data);
}
void   admin__config_resources__free_unpacked
                     (Admin__ConfigResources *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &admin__config_resources__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor admin__config_dump__field_descriptors[2] =
{
  {
    "static_resources",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Admin__ConfigDump, static_resources),
    &admin__config_resources__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dynamic_resources",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Admin__ConfigDump, dynamic_resources),
    &admin__config_resources__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned admin__config_dump__field_indices_by_name[] = {
  1,   /* field[1] = dynamic_resources */
  0,   /* field[0] = static_resources */
};
static const ProtobufCIntRange admin__config_dump__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor admin__config_dump__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "admin.ConfigDump",
  "ConfigDump",
  "Admin__ConfigDump",
  "admin",
  sizeof(Admin__ConfigDump),
  2,
  admin__config_dump__field_descriptors,
  admin__config_dump__field_indices_by_name,
  1,  admin__config_dump__number_ranges,
  (ProtobufCMessageInit) admin__config_dump__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor admin__config_resources__field_descriptors[4] =
{
  {
    "version_info",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Admin__ConfigResources, version_info),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "listener_configs",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Admin__ConfigResources, n_listener_configs),
    offsetof(Admin__ConfigResources, listener_configs),
    &listener__listener__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "route_configs",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Admin__ConfigResources, n_route_configs),
    offsetof(Admin__ConfigResources, route_configs),
    &route__route_configuration__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cluster_configs",
    4,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Admin__ConfigResources, n_cluster_configs),
    offsetof(Admin__ConfigResources, cluster_configs),
    &cluster__cluster__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned admin__config_resources__field_indices_by_name[] = {
  3,   /* field[3] = cluster_configs */
  1,   /* field[1] = listener_configs */
  2,   /* field[2] = route_configs */
  0,   /* field[0] = version_info */
};
static const ProtobufCIntRange admin__config_resources__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor admin__config_resources__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "admin.ConfigResources",
  "ConfigResources",
  "Admin__ConfigResources",
  "admin",
  sizeof(Admin__ConfigResources),
  4,
  admin__config_resources__field_descriptors,
  admin__config_resources__field_indices_by_name,
  1,  admin__config_resources__number_ranges,
  (ProtobufCMessageInit) admin__config_resources__init,
  NULL,NULL,NULL    /* reserved[123] */
};