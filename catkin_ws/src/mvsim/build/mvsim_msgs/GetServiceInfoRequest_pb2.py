
import sys
_b = (((sys.version_info[0] < 3) and (lambda x: x)) or (lambda x: x.encode('latin1')))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
_sym_db = _symbol_database.Default()
DESCRIPTOR = _descriptor.FileDescriptor(name='GetServiceInfoRequest.proto', package='mvsim_msgs', syntax='proto2', serialized_options=None, serialized_pb=_b('\n\x1bGetServiceInfoRequest.proto\x12\nmvsim_msgs",\n\x15GetServiceInfoRequest\x12\x13\n\x0bserviceName\x18\x01 \x02(\t'))
_GETSERVICEINFOREQUEST = _descriptor.Descriptor(name='GetServiceInfoRequest', full_name='mvsim_msgs.GetServiceInfoRequest', filename=None, file=DESCRIPTOR, containing_type=None, fields=[_descriptor.FieldDescriptor(name='serviceName', full_name='mvsim_msgs.GetServiceInfoRequest.serviceName', index=0, number=1, type=9, cpp_type=9, label=2, has_default_value=False, default_value=_b('').decode('utf-8'), message_type=None, enum_type=None, containing_type=None, is_extension=False, extension_scope=None, serialized_options=None, file=DESCRIPTOR)], extensions=[], nested_types=[], enum_types=[], serialized_options=None, is_extendable=False, syntax='proto2', extension_ranges=[], oneofs=[], serialized_start=43, serialized_end=87)
DESCRIPTOR.message_types_by_name['GetServiceInfoRequest'] = _GETSERVICEINFOREQUEST
_sym_db.RegisterFileDescriptor(DESCRIPTOR)
GetServiceInfoRequest = _reflection.GeneratedProtocolMessageType('GetServiceInfoRequest', (_message.Message,), dict(DESCRIPTOR=_GETSERVICEINFOREQUEST, __module__='GetServiceInfoRequest_pb2'))
_sym_db.RegisterMessage(GetServiceInfoRequest)