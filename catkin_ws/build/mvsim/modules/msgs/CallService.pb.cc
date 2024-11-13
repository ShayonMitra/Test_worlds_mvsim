// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CallService.proto

#include "CallService.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace mvsim_msgs {
class CallServiceDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<CallService>
      _instance;
} _CallService_default_instance_;
}  // namespace mvsim_msgs
namespace protobuf_CallService_2eproto {
static void InitDefaultsCallService() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mvsim_msgs::_CallService_default_instance_;
    new (ptr) ::mvsim_msgs::CallService();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mvsim_msgs::CallService::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_CallService =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsCallService}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_CallService.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::CallService, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::CallService, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::CallService, servicename_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::CallService, serializedinput_),
  0,
  1,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::mvsim_msgs::CallService)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::mvsim_msgs::_CallService_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "CallService.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\021CallService.proto\022\nmvsim_msgs\";\n\013CallS"
      "ervice\022\023\n\013serviceName\030\001 \002(\t\022\027\n\017serialize"
      "dInput\030\002 \002(\014"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 92);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CallService.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_CallService_2eproto
namespace mvsim_msgs {

// ===================================================================

void CallService::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CallService::kServiceNameFieldNumber;
const int CallService::kSerializedInputFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CallService::CallService()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_CallService_2eproto::scc_info_CallService.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:mvsim_msgs.CallService)
}
CallService::CallService(const CallService& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  servicename_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_servicename()) {
    servicename_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.servicename_);
  }
  serializedinput_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_serializedinput()) {
    serializedinput_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.serializedinput_);
  }
  // @@protoc_insertion_point(copy_constructor:mvsim_msgs.CallService)
}

void CallService::SharedCtor() {
  servicename_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  serializedinput_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

CallService::~CallService() {
  // @@protoc_insertion_point(destructor:mvsim_msgs.CallService)
  SharedDtor();
}

void CallService::SharedDtor() {
  servicename_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  serializedinput_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void CallService::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* CallService::descriptor() {
  ::protobuf_CallService_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_CallService_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const CallService& CallService::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_CallService_2eproto::scc_info_CallService.base);
  return *internal_default_instance();
}


void CallService::Clear() {
// @@protoc_insertion_point(message_clear_start:mvsim_msgs.CallService)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      servicename_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      serializedinput_.ClearNonDefaultToEmptyNoArena();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool CallService::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:mvsim_msgs.CallService)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string serviceName = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_servicename()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->servicename().data(), static_cast<int>(this->servicename().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "mvsim_msgs.CallService.serviceName");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required bytes serializedInput = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_serializedinput()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:mvsim_msgs.CallService)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:mvsim_msgs.CallService)
  return false;
#undef DO_
}

void CallService::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:mvsim_msgs.CallService)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string serviceName = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->servicename().data(), static_cast<int>(this->servicename().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "mvsim_msgs.CallService.serviceName");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->servicename(), output);
  }

  // required bytes serializedInput = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->serializedinput(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:mvsim_msgs.CallService)
}

::google::protobuf::uint8* CallService::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:mvsim_msgs.CallService)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string serviceName = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->servicename().data(), static_cast<int>(this->servicename().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "mvsim_msgs.CallService.serviceName");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->servicename(), target);
  }

  // required bytes serializedInput = 2;
  if (cached_has_bits & 0x00000002u) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->serializedinput(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mvsim_msgs.CallService)
  return target;
}

size_t CallService::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:mvsim_msgs.CallService)
  size_t total_size = 0;

  if (has_servicename()) {
    // required string serviceName = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->servicename());
  }

  if (has_serializedinput()) {
    // required bytes serializedInput = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->serializedinput());
  }

  return total_size;
}
size_t CallService::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mvsim_msgs.CallService)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required string serviceName = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->servicename());

    // required bytes serializedInput = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->serializedinput());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CallService::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mvsim_msgs.CallService)
  GOOGLE_DCHECK_NE(&from, this);
  const CallService* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CallService>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mvsim_msgs.CallService)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mvsim_msgs.CallService)
    MergeFrom(*source);
  }
}

void CallService::MergeFrom(const CallService& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mvsim_msgs.CallService)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_servicename();
      servicename_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.servicename_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_serializedinput();
      serializedinput_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.serializedinput_);
    }
  }
}

void CallService::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mvsim_msgs.CallService)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CallService::CopyFrom(const CallService& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mvsim_msgs.CallService)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CallService::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void CallService::Swap(CallService* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CallService::InternalSwap(CallService* other) {
  using std::swap;
  servicename_.Swap(&other->servicename_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  serializedinput_.Swap(&other->serializedinput_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata CallService::GetMetadata() const {
  protobuf_CallService_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_CallService_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace mvsim_msgs
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::mvsim_msgs::CallService* Arena::CreateMaybeMessage< ::mvsim_msgs::CallService >(Arena* arena) {
  return Arena::CreateInternal< ::mvsim_msgs::CallService >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
