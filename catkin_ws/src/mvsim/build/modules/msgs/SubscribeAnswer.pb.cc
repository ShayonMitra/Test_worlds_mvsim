// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SubscribeAnswer.proto

#include "SubscribeAnswer.pb.h"

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
class SubscribeAnswerDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SubscribeAnswer>
      _instance;
} _SubscribeAnswer_default_instance_;
}  // namespace mvsim_msgs
namespace protobuf_SubscribeAnswer_2eproto {
static void InitDefaultsSubscribeAnswer() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mvsim_msgs::_SubscribeAnswer_default_instance_;
    new (ptr) ::mvsim_msgs::SubscribeAnswer();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mvsim_msgs::SubscribeAnswer::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_SubscribeAnswer =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsSubscribeAnswer}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_SubscribeAnswer.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::SubscribeAnswer, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::SubscribeAnswer, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::SubscribeAnswer, topic_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::SubscribeAnswer, success_),
  0,
  1,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::mvsim_msgs::SubscribeAnswer)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::mvsim_msgs::_SubscribeAnswer_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "SubscribeAnswer.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\025SubscribeAnswer.proto\022\nmvsim_msgs\"1\n\017S"
      "ubscribeAnswer\022\r\n\005topic\030\001 \002(\t\022\017\n\007success"
      "\030\002 \002(\010"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 86);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SubscribeAnswer.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_SubscribeAnswer_2eproto
namespace mvsim_msgs {

// ===================================================================

void SubscribeAnswer::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SubscribeAnswer::kTopicFieldNumber;
const int SubscribeAnswer::kSuccessFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SubscribeAnswer::SubscribeAnswer()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_SubscribeAnswer_2eproto::scc_info_SubscribeAnswer.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:mvsim_msgs.SubscribeAnswer)
}
SubscribeAnswer::SubscribeAnswer(const SubscribeAnswer& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  topic_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_topic()) {
    topic_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.topic_);
  }
  success_ = from.success_;
  // @@protoc_insertion_point(copy_constructor:mvsim_msgs.SubscribeAnswer)
}

void SubscribeAnswer::SharedCtor() {
  topic_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  success_ = false;
}

SubscribeAnswer::~SubscribeAnswer() {
  // @@protoc_insertion_point(destructor:mvsim_msgs.SubscribeAnswer)
  SharedDtor();
}

void SubscribeAnswer::SharedDtor() {
  topic_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void SubscribeAnswer::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* SubscribeAnswer::descriptor() {
  ::protobuf_SubscribeAnswer_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_SubscribeAnswer_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SubscribeAnswer& SubscribeAnswer::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_SubscribeAnswer_2eproto::scc_info_SubscribeAnswer.base);
  return *internal_default_instance();
}


void SubscribeAnswer::Clear() {
// @@protoc_insertion_point(message_clear_start:mvsim_msgs.SubscribeAnswer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    topic_.ClearNonDefaultToEmptyNoArena();
  }
  success_ = false;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SubscribeAnswer::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:mvsim_msgs.SubscribeAnswer)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string topic = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_topic()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->topic().data(), static_cast<int>(this->topic().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "mvsim_msgs.SubscribeAnswer.topic");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required bool success = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_success();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &success_)));
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
  // @@protoc_insertion_point(parse_success:mvsim_msgs.SubscribeAnswer)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:mvsim_msgs.SubscribeAnswer)
  return false;
#undef DO_
}

void SubscribeAnswer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:mvsim_msgs.SubscribeAnswer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string topic = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->topic().data(), static_cast<int>(this->topic().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "mvsim_msgs.SubscribeAnswer.topic");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->topic(), output);
  }

  // required bool success = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->success(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:mvsim_msgs.SubscribeAnswer)
}

::google::protobuf::uint8* SubscribeAnswer::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:mvsim_msgs.SubscribeAnswer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string topic = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->topic().data(), static_cast<int>(this->topic().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "mvsim_msgs.SubscribeAnswer.topic");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->topic(), target);
  }

  // required bool success = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->success(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mvsim_msgs.SubscribeAnswer)
  return target;
}

size_t SubscribeAnswer::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:mvsim_msgs.SubscribeAnswer)
  size_t total_size = 0;

  if (has_topic()) {
    // required string topic = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->topic());
  }

  if (has_success()) {
    // required bool success = 2;
    total_size += 1 + 1;
  }

  return total_size;
}
size_t SubscribeAnswer::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mvsim_msgs.SubscribeAnswer)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required string topic = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->topic());

    // required bool success = 2;
    total_size += 1 + 1;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SubscribeAnswer::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mvsim_msgs.SubscribeAnswer)
  GOOGLE_DCHECK_NE(&from, this);
  const SubscribeAnswer* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SubscribeAnswer>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mvsim_msgs.SubscribeAnswer)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mvsim_msgs.SubscribeAnswer)
    MergeFrom(*source);
  }
}

void SubscribeAnswer::MergeFrom(const SubscribeAnswer& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mvsim_msgs.SubscribeAnswer)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_topic();
      topic_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.topic_);
    }
    if (cached_has_bits & 0x00000002u) {
      success_ = from.success_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void SubscribeAnswer::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mvsim_msgs.SubscribeAnswer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SubscribeAnswer::CopyFrom(const SubscribeAnswer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mvsim_msgs.SubscribeAnswer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SubscribeAnswer::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void SubscribeAnswer::Swap(SubscribeAnswer* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SubscribeAnswer::InternalSwap(SubscribeAnswer* other) {
  using std::swap;
  topic_.Swap(&other->topic_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(success_, other->success_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata SubscribeAnswer::GetMetadata() const {
  protobuf_SubscribeAnswer_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_SubscribeAnswer_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace mvsim_msgs
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::mvsim_msgs::SubscribeAnswer* Arena::CreateMaybeMessage< ::mvsim_msgs::SubscribeAnswer >(Arena* arena) {
  return Arena::CreateInternal< ::mvsim_msgs::SubscribeAnswer >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
