# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: SrvSetControllerTwist.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import Twist_pb2 as Twist__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='SrvSetControllerTwist.proto',
  package='mvsim_msgs',
  syntax='proto2',
  serialized_options=None,
  serialized_pb=_b('\n\x1bSrvSetControllerTwist.proto\x12\nmvsim_msgs\x1a\x0bTwist.proto\"S\n\x15SrvSetControllerTwist\x12\x10\n\x08objectId\x18\x01 \x02(\t\x12(\n\rtwistSetPoint\x18\x02 \x02(\x0b\x32\x11.mvsim_msgs.Twist')
  ,
  dependencies=[Twist__pb2.DESCRIPTOR,])




_SRVSETCONTROLLERTWIST = _descriptor.Descriptor(
  name='SrvSetControllerTwist',
  full_name='mvsim_msgs.SrvSetControllerTwist',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='objectId', full_name='mvsim_msgs.SrvSetControllerTwist.objectId', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='twistSetPoint', full_name='mvsim_msgs.SrvSetControllerTwist.twistSetPoint', index=1,
      number=2, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
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
  serialized_start=56,
  serialized_end=139,
)

_SRVSETCONTROLLERTWIST.fields_by_name['twistSetPoint'].message_type = Twist__pb2._TWIST
DESCRIPTOR.message_types_by_name['SrvSetControllerTwist'] = _SRVSETCONTROLLERTWIST
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

SrvSetControllerTwist = _reflection.GeneratedProtocolMessageType('SrvSetControllerTwist', (_message.Message,), dict(
  DESCRIPTOR = _SRVSETCONTROLLERTWIST,
  __module__ = 'SrvSetControllerTwist_pb2'
  # @@protoc_insertion_point(class_scope:mvsim_msgs.SrvSetControllerTwist)
  ))
_sym_db.RegisterMessage(SrvSetControllerTwist)


# @@protoc_insertion_point(module_scope)
