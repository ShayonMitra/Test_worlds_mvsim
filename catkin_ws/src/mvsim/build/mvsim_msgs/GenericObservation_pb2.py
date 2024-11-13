
import sys
_b = (((sys.version_info[0] < 3) and (lambda x: x)) or (lambda x: x.encode('latin1')))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
_sym_db = _symbol_database.Default()
DESCRIPTOR = _descriptor.FileDescriptor(name='GenericObservation.proto', package='mvsim_msgs', syntax='proto2', serialized_options=None, serialized_pb=_b('\n\x18GenericObservation.proto\x12\nmvsim_msgs"f\n\x12GenericObservation\x12\x15\n\runixTimestamp\x18\x01 \x02(\x01\x12\x16\n\x0esourceObjectId\x18\x02 \x02(\t\x12!\n\x19mrptSerializedObservation\x18\x03 \x02(\x0c'))
_GENERICOBSERVATION = _descriptor.Descriptor(name='GenericObservation', full_name='mvsim_msgs.GenericObservation', filename=None, file=DESCRIPTOR, containing_type=None, fields=[_descriptor.FieldDescriptor(name='unixTimestamp', full_name='mvsim_msgs.GenericObservation.unixTimestamp', index=0, number=1, type=1, cpp_type=5, label=2, has_default_value=False, default_value=float(0), message_type=None, enum_type=None, containing_type=None, is_extension=False, extension_scope=None, serialized_options=None, file=DESCRIPTOR), _descriptor.FieldDescriptor(name='sourceObjectId', full_name='mvsim_msgs.GenericObservation.sourceObjectId', index=1, number=2, type=9, cpp_type=9, label=2, has_default_value=False, default_value=_b('').decode('utf-8'), message_type=None, enum_type=None, containing_type=None, is_extension=False, extension_scope=None, serialized_options=None, file=DESCRIPTOR), _descriptor.FieldDescriptor(name='mrptSerializedObservation', full_name='mvsim_msgs.GenericObservation.mrptSerializedObservation', index=2, number=3, type=12, cpp_type=9, label=2, has_default_value=False, default_value=_b(''), message_type=None, enum_type=None, containing_type=None, is_extension=False, extension_scope=None, serialized_options=None, file=DESCRIPTOR)], extensions=[], nested_types=[], enum_types=[], serialized_options=None, is_extendable=False, syntax='proto2', extension_ranges=[], oneofs=[], serialized_start=40, serialized_end=142)
DESCRIPTOR.message_types_by_name['GenericObservation'] = _GENERICOBSERVATION
_sym_db.RegisterFileDescriptor(DESCRIPTOR)
GenericObservation = _reflection.GeneratedProtocolMessageType('GenericObservation', (_message.Message,), dict(DESCRIPTOR=_GENERICOBSERVATION, __module__='GenericObservation_pb2'))
_sym_db.RegisterMessage(GenericObservation)