
import sys
_b = (((sys.version_info[0] < 3) and (lambda x: x)) or (lambda x: x.encode('latin1')))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
_sym_db = _symbol_database.Default()
DESCRIPTOR = _descriptor.FileDescriptor(name='SrvGetPose.proto', package='mvsim_msgs', syntax='proto2', serialized_options=None, serialized_pb=_b('\n\x10SrvGetPose.proto\x12\nmvsim_msgs"\x1e\n\nSrvGetPose\x12\x10\n\x08objectId\x18\x01 \x02(\t'))
_SRVGETPOSE = _descriptor.Descriptor(name='SrvGetPose', full_name='mvsim_msgs.SrvGetPose', filename=None, file=DESCRIPTOR, containing_type=None, fields=[_descriptor.FieldDescriptor(name='objectId', full_name='mvsim_msgs.SrvGetPose.objectId', index=0, number=1, type=9, cpp_type=9, label=2, has_default_value=False, default_value=_b('').decode('utf-8'), message_type=None, enum_type=None, containing_type=None, is_extension=False, extension_scope=None, serialized_options=None, file=DESCRIPTOR)], extensions=[], nested_types=[], enum_types=[], serialized_options=None, is_extendable=False, syntax='proto2', extension_ranges=[], oneofs=[], serialized_start=32, serialized_end=62)
DESCRIPTOR.message_types_by_name['SrvGetPose'] = _SRVGETPOSE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)
SrvGetPose = _reflection.GeneratedProtocolMessageType('SrvGetPose', (_message.Message,), dict(DESCRIPTOR=_SRVGETPOSE, __module__='SrvGetPose_pb2'))
_sym_db.RegisterMessage(SrvGetPose)