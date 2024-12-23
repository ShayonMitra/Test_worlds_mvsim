// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AdvertiseTopicRequest.proto

#include "AdvertiseTopicRequest.pb.h"

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
class AdvertiseTopicRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AdvertiseTopicRequest>
      _instance;
} _AdvertiseTopicRequest_default_instance_;
}  // namespace mvsim_msgs
namespace protobuf_AdvertiseTopicRequest_2eproto {
static void InitDefaultsAdvertiseTopicRequest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mvsim_msgs::_AdvertiseTopicRequest_default_instance_;
    new (ptr) ::mvsim_msgs::AdvertiseTopicRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mvsim_msgs::AdvertiseTopicRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_AdvertiseTopicRequest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsAdvertiseTopicRequest}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_AdvertiseTopicRequest.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::AdvertiseTopicRequest, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::AdvertiseTopicRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::AdvertiseTopicRequest, topicname_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::AdvertiseTopicRequest, topictypename_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::AdvertiseTopicRequest, endpoint_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::AdvertiseTopicRequest, nodename_),
  0,
  1,
  2,
  3,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, sizeof(::mvsim_msgs::AdvertiseTopicRequest)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::mvsim_msgs::_AdvertiseTopicRequest_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "AdvertiseTopicRequest.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\033AdvertiseTopicRequest.proto\022\nmvsim_msg"
      "s\"e\n\025AdvertiseTopicRequest\022\021\n\ttopicName\030"
      "\001 \002(\t\022\025\n\rtopicTypeName\030\002 \002(\t\022\020\n\010endpoint"
      "\030\003 \002(\t\022\020\n\010nodeName\030\004 \002(\t"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 144);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "AdvertiseTopicRequest.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_AdvertiseTopicRequest_2eproto
namespace mvsim_msgs {

// ===================================================================

void AdvertiseTopicRequest::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AdvertiseTopicRequest::kTopicNameFieldNumber;
const int AdvertiseTopicRequest::kTopicTypeNameFieldNumber;
const int AdvertiseTopicRequest::kEndpointFieldNumber;
const int AdvertiseTopicRequest::kNodeNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AdvertiseTopicRequest::AdvertiseTopicRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_AdvertiseTopicRequest_2eproto::scc_info_AdvertiseTopicRequest.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:mvsim_msgs.AdvertiseTopicRequest)
}
AdvertiseTopicRequest::AdvertiseTopicRequest(const AdvertiseTopicRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  topicname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_topicname()) {
    topicname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.topicname_);
  }
  topictypename_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_topictypename()) {
    topictypename_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.topictypename_);
  }
  endpoint_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_endpoint()) {
    endpoint_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.endpoint_);
  }
  nodename_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_nodename()) {
    nodename_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.nodename_);
  }
  // @@protoc_insertion_point(copy_constructor:mvsim_msgs.AdvertiseTopicRequest)
}

void AdvertiseTopicRequest::SharedCtor() {
  topicname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  topictypename_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  endpoint_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nodename_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

AdvertiseTopicRequest::~AdvertiseTopicRequest() {
  // @@protoc_insertion_point(destructor:mvsim_msgs.AdvertiseTopicRequest)
  SharedDtor();
}

void AdvertiseTopicRequest::SharedDtor() {
  topicname_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  topictypename_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  endpoint_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nodename_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void AdvertiseTopicRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* AdvertiseTopicRequest::descriptor() {
  ::protobuf_AdvertiseTopicRequest_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_AdvertiseTopicRequest_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AdvertiseTopicRequest& AdvertiseTopicRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_AdvertiseTopicRequest_2eproto::scc_info_AdvertiseTopicRequest.base);
  return *internal_default_instance();
}


void AdvertiseTopicRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:mvsim_msgs.AdvertiseTopicRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      topicname_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      topictypename_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000004u) {
      endpoint_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000008u) {
      nodename_.ClearNonDefaultToEmptyNoArena();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool AdvertiseTopicRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:mvsim_msgs.AdvertiseTopicRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string topicName = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_topicname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->topicname().data(), static_cast<int>(this->topicname().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "mvsim_msgs.AdvertiseTopicRequest.topicName");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required string topicTypeName = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_topictypename()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->topictypename().data(), static_cast<int>(this->topictypename().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "mvsim_msgs.AdvertiseTopicRequest.topicTypeName");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required string endpoint = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_endpoint()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->endpoint().data(), static_cast<int>(this->endpoint().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "mvsim_msgs.AdvertiseTopicRequest.endpoint");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required string nodeName = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_nodename()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->nodename().data(), static_cast<int>(this->nodename().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "mvsim_msgs.AdvertiseTopicRequest.nodeName");
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
  // @@protoc_insertion_point(parse_success:mvsim_msgs.AdvertiseTopicRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:mvsim_msgs.AdvertiseTopicRequest)
  return false;
#undef DO_
}

void AdvertiseTopicRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:mvsim_msgs.AdvertiseTopicRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string topicName = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->topicname().data(), static_cast<int>(this->topicname().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "mvsim_msgs.AdvertiseTopicRequest.topicName");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->topicname(), output);
  }

  // required string topicTypeName = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->topictypename().data(), static_cast<int>(this->topictypename().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "mvsim_msgs.AdvertiseTopicRequest.topicTypeName");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->topictypename(), output);
  }

  // required string endpoint = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->endpoint().data(), static_cast<int>(this->endpoint().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "mvsim_msgs.AdvertiseTopicRequest.endpoint");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->endpoint(), output);
  }

  // required string nodeName = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->nodename().data(), static_cast<int>(this->nodename().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "mvsim_msgs.AdvertiseTopicRequest.nodeName");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->nodename(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:mvsim_msgs.AdvertiseTopicRequest)
}

::google::protobuf::uint8* AdvertiseTopicRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:mvsim_msgs.AdvertiseTopicRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string topicName = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->topicname().data(), static_cast<int>(this->topicname().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "mvsim_msgs.AdvertiseTopicRequest.topicName");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->topicname(), target);
  }

  // required string topicTypeName = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->topictypename().data(), static_cast<int>(this->topictypename().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "mvsim_msgs.AdvertiseTopicRequest.topicTypeName");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->topictypename(), target);
  }

  // required string endpoint = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->endpoint().data(), static_cast<int>(this->endpoint().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "mvsim_msgs.AdvertiseTopicRequest.endpoint");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->endpoint(), target);
  }

  // required string nodeName = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->nodename().data(), static_cast<int>(this->nodename().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "mvsim_msgs.AdvertiseTopicRequest.nodeName");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->nodename(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mvsim_msgs.AdvertiseTopicRequest)
  return target;
}

size_t AdvertiseTopicRequest::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:mvsim_msgs.AdvertiseTopicRequest)
  size_t total_size = 0;

  if (has_topicname()) {
    // required string topicName = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->topicname());
  }

  if (has_topictypename()) {
    // required string topicTypeName = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->topictypename());
  }

  if (has_endpoint()) {
    // required string endpoint = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->endpoint());
  }

  if (has_nodename()) {
    // required string nodeName = 4;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->nodename());
  }

  return total_size;
}
size_t AdvertiseTopicRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mvsim_msgs.AdvertiseTopicRequest)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x0000000f) ^ 0x0000000f) == 0) {  // All required fields are present.
    // required string topicName = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->topicname());

    // required string topicTypeName = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->topictypename());

    // required string endpoint = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->endpoint());

    // required string nodeName = 4;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->nodename());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AdvertiseTopicRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mvsim_msgs.AdvertiseTopicRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const AdvertiseTopicRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AdvertiseTopicRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mvsim_msgs.AdvertiseTopicRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mvsim_msgs.AdvertiseTopicRequest)
    MergeFrom(*source);
  }
}

void AdvertiseTopicRequest::MergeFrom(const AdvertiseTopicRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mvsim_msgs.AdvertiseTopicRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_topicname();
      topicname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.topicname_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_topictypename();
      topictypename_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.topictypename_);
    }
    if (cached_has_bits & 0x00000004u) {
      set_has_endpoint();
      endpoint_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.endpoint_);
    }
    if (cached_has_bits & 0x00000008u) {
      set_has_nodename();
      nodename_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.nodename_);
    }
  }
}

void AdvertiseTopicRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mvsim_msgs.AdvertiseTopicRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AdvertiseTopicRequest::CopyFrom(const AdvertiseTopicRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mvsim_msgs.AdvertiseTopicRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AdvertiseTopicRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;
  return true;
}

void AdvertiseTopicRequest::Swap(AdvertiseTopicRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AdvertiseTopicRequest::InternalSwap(AdvertiseTopicRequest* other) {
  using std::swap;
  topicname_.Swap(&other->topicname_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  topictypename_.Swap(&other->topictypename_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  endpoint_.Swap(&other->endpoint_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  nodename_.Swap(&other->nodename_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata AdvertiseTopicRequest::GetMetadata() const {
  protobuf_AdvertiseTopicRequest_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_AdvertiseTopicRequest_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace mvsim_msgs
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::mvsim_msgs::AdvertiseTopicRequest* Arena::CreateMaybeMessage< ::mvsim_msgs::AdvertiseTopicRequest >(Arena* arena) {
  return Arena::CreateInternal< ::mvsim_msgs::AdvertiseTopicRequest >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
