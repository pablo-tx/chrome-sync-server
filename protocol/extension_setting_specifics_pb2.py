# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: extension_setting_specifics.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)




DESCRIPTOR = _descriptor.FileDescriptor(
  name='extension_setting_specifics.proto',
  package='sync_pb',
  serialized_pb='\n!extension_setting_specifics.proto\x12\x07sync_pb\"M\n\x19\x45xtensionSettingSpecifics\x12\x14\n\x0c\x65xtension_id\x18\x01 \x01(\t\x12\x0b\n\x03key\x18\x02 \x01(\t\x12\r\n\x05value\x18\x03 \x01(\tB\x04H\x03`\x01')




_EXTENSIONSETTINGSPECIFICS = _descriptor.Descriptor(
  name='ExtensionSettingSpecifics',
  full_name='sync_pb.ExtensionSettingSpecifics',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='extension_id', full_name='sync_pb.ExtensionSettingSpecifics.extension_id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='key', full_name='sync_pb.ExtensionSettingSpecifics.key', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='value', full_name='sync_pb.ExtensionSettingSpecifics.value', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=46,
  serialized_end=123,
)

DESCRIPTOR.message_types_by_name['ExtensionSettingSpecifics'] = _EXTENSIONSETTINGSPECIFICS

class ExtensionSettingSpecifics(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _EXTENSIONSETTINGSPECIFICS

  # @@protoc_insertion_point(class_scope:sync_pb.ExtensionSettingSpecifics)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), 'H\003`\001')
# @@protoc_insertion_point(module_scope)