# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ListNodesRequest.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='ListNodesRequest.proto',
  package='mvsim_msgs',
  syntax='proto2',
  serialized_options=None,
  serialized_pb=_b('\n\x16ListNodesRequest.proto\x12\nmvsim_msgs\"*\n\x10ListNodesRequest\x12\x16\n\x0enodeStartsWith\x18\x01 \x01(\t')
)




_LISTNODESREQUEST = _descriptor.Descriptor(
  name='ListNodesRequest',
  full_name='mvsim_msgs.ListNodesRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='nodeStartsWith', full_name='mvsim_msgs.ListNodesRequest.nodeStartsWith', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=38,
  serialized_end=80,
)

DESCRIPTOR.message_types_by_name['ListNodesRequest'] = _LISTNODESREQUEST
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

ListNodesRequest = _reflection.GeneratedProtocolMessageType('ListNodesRequest', (_message.Message,), dict(
  DESCRIPTOR = _LISTNODESREQUEST,
  __module__ = 'ListNodesRequest_pb2'
  # @@protoc_insertion_point(class_scope:mvsim_msgs.ListNodesRequest)
  ))
_sym_db.RegisterMessage(ListNodesRequest)


# @@protoc_insertion_point(module_scope)