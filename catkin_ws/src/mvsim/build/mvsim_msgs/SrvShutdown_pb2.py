
import sys
_b = (((sys.version_info[0] < 3) and (lambda x: x)) or (lambda x: x.encode('latin1')))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
_sym_db = _symbol_database.Default()
DESCRIPTOR = _descriptor.FileDescriptor(name='SrvShutdown.proto', package='mvsim_msgs', syntax='proto2', serialized_options=None, serialized_pb=_b('\n\x11SrvShutdown.proto\x12\nmvsim_msgs"\r\n\x0bSrvShutdown'))
_SRVSHUTDOWN = _descriptor.Descriptor(name='SrvShutdown', full_name='mvsim_msgs.SrvShutdown', filename=None, file=DESCRIPTOR, containing_type=None, fields=[], extensions=[], nested_types=[], enum_types=[], serialized_options=None, is_extendable=False, syntax='proto2', extension_ranges=[], oneofs=[], serialized_start=33, serialized_end=46)
DESCRIPTOR.message_types_by_name['SrvShutdown'] = _SRVSHUTDOWN
_sym_db.RegisterFileDescriptor(DESCRIPTOR)
SrvShutdown = _reflection.GeneratedProtocolMessageType('SrvShutdown', (_message.Message,), dict(DESCRIPTOR=_SRVSHUTDOWN, __module__='SrvShutdown_pb2'))
_sym_db.RegisterMessage(SrvShutdown)
