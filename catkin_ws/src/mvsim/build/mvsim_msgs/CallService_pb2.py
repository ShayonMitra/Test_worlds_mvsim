
import sys
_b = (((sys.version_info[0] < 3) and (lambda x: x)) or (lambda x: x.encode('latin1')))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
_sym_db = _symbol_database.Default()
DESCRIPTOR = _descriptor.FileDescriptor(name='CallService.proto', package='mvsim_msgs', syntax='proto2', serialized_options=None, serialized_pb=_b('\n\x11CallService.proto\x12\nmvsim_msgs";\n\x0bCallService\x12\x13\n\x0bserviceName\x18\x01 \x02(\t\x12\x17\n\x0fserializedInput\x18\x02 \x02(\x0c'))
_CALLSERVICE = _descriptor.Descriptor(name='CallService', full_name='mvsim_msgs.CallService', filename=None, file=DESCRIPTOR, containing_type=None, fields=[_descriptor.FieldDescriptor(name='serviceName', full_name='mvsim_msgs.CallService.serviceName', index=0, number=1, type=9, cpp_type=9, label=2, has_default_value=False, default_value=_b('').decode('utf-8'), message_type=None, enum_type=None, containing_type=None, is_extension=False, extension_scope=None, serialized_options=None, file=DESCRIPTOR), _descriptor.FieldDescriptor(name='serializedInput', full_name='mvsim_msgs.CallService.serializedInput', index=1, number=2, type=12, cpp_type=9, label=2, has_default_value=False, default_value=_b(''), message_type=None, enum_type=None, containing_type=None, is_extension=False, extension_scope=None, serialized_options=None, file=DESCRIPTOR)], extensions=[], nested_types=[], enum_types=[], serialized_options=None, is_extendable=False, syntax='proto2', extension_ranges=[], oneofs=[], serialized_start=33, serialized_end=92)
DESCRIPTOR.message_types_by_name['CallService'] = _CALLSERVICE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)
CallService = _reflection.GeneratedProtocolMessageType('CallService', (_message.Message,), dict(DESCRIPTOR=_CALLSERVICE, __module__='CallService_pb2'))
_sym_db.RegisterMessage(CallService)
