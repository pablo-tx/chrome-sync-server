# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: client_test_internal.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import client_protocol_pb2 as client__protocol__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='client_test_internal.proto',
  package='ipc.invalidation',
  syntax='proto2',
  serialized_pb=_b('\n\x1a\x63lient_test_internal.proto\x12\x10ipc.invalidation\x1a\x15\x63lient_protocol.proto\"\xd2\x01\n\x19RegistrationManagerStateP\x12=\n\x0e\x63lient_summary\x18\x01 \x01(\x0b\x32%.ipc.invalidation.RegistrationSummary\x12=\n\x0eserver_summary\x18\x02 \x01(\x0b\x32%.ipc.invalidation.RegistrationSummary\x12\x37\n\x12registered_objects\x18\x03 \x03(\x0b\x32\x1b.ipc.invalidation.ObjectIdPB\x02H\x03')
  ,
  dependencies=[client__protocol__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_REGISTRATIONMANAGERSTATEP = _descriptor.Descriptor(
  name='RegistrationManagerStateP',
  full_name='ipc.invalidation.RegistrationManagerStateP',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='client_summary', full_name='ipc.invalidation.RegistrationManagerStateP.client_summary', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='server_summary', full_name='ipc.invalidation.RegistrationManagerStateP.server_summary', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='registered_objects', full_name='ipc.invalidation.RegistrationManagerStateP.registered_objects', index=2,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
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
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=72,
  serialized_end=282,
)

_REGISTRATIONMANAGERSTATEP.fields_by_name['client_summary'].message_type = client__protocol__pb2._REGISTRATIONSUMMARY
_REGISTRATIONMANAGERSTATEP.fields_by_name['server_summary'].message_type = client__protocol__pb2._REGISTRATIONSUMMARY
_REGISTRATIONMANAGERSTATEP.fields_by_name['registered_objects'].message_type = client__protocol__pb2._OBJECTIDP
DESCRIPTOR.message_types_by_name['RegistrationManagerStateP'] = _REGISTRATIONMANAGERSTATEP

RegistrationManagerStateP = _reflection.GeneratedProtocolMessageType('RegistrationManagerStateP', (_message.Message,), dict(
  DESCRIPTOR = _REGISTRATIONMANAGERSTATEP,
  __module__ = 'client_test_internal_pb2'
  # @@protoc_insertion_point(class_scope:ipc.invalidation.RegistrationManagerStateP)
  ))
_sym_db.RegisterMessage(RegistrationManagerStateP)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('H\003'))
# @@protoc_insertion_point(module_scope)