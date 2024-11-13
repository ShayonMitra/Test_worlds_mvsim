// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RegisterNodeAnswer.proto

#include "RegisterNodeAnswer.pb.h"

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
class RegisterNodeAnswerDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RegisterNodeAnswer>
      _instance;
} _RegisterNodeAnswer_default_instance_;
}  // namespace mvsim_msgs
namespace protobuf_RegisterNodeAnswer_2eproto {
static void InitDefaultsRegisterNodeAnswer() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mvsim_msgs::_RegisterNodeAnswer_default_instance_;
    new (ptr) ::mvsim_msgs::RegisterNodeAnswer();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mvsim_msgs::RegisterNodeAnswer::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_RegisterNodeAnswer =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsRegisterNodeAnswer}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_RegisterNodeAnswer.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::RegisterNodeAnswer, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::RegisterNodeAnswer, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::RegisterNodeAnswer, success_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::RegisterNodeAnswer, errormessage_),
  1,
  0,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::mvsim_msgs::RegisterNodeAnswer)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::mvsim_msgs::_RegisterNodeAnswer_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "RegisterNodeAnswer.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\030RegisterNodeAnswer.proto\022\nmvsim_msgs\";"
      "\n\022RegisterNodeAnswer\022\017\n\007success\030\001 \002(\010\022\024\n"
      "\014errorMessage\030\002 \001(\t"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 99);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RegisterNodeAnswer.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_RegisterNodeAnswer_2eproto
namespace mvsim_msgs {

// ===================================================================

void RegisterNodeAnswer::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RegisterNodeAnswer::kSuccessFieldNumber;
const int RegisterNodeAnswer::kErrorMessageFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RegisterNodeAnswer::RegisterNodeAnswer()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_RegisterNodeAnswer_2eproto::scc_info_RegisterNodeAnswer.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:mvsim_msgs.RegisterNodeAnswer)
}
RegisterNodeAnswer::RegisterNodeAnswer(const RegisterNodeAnswer& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  errormessage_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_errormessage()) {
    errormessage_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.errormessage_);
  }
  success_ = from.success_;
  // @@protoc_insertion_point(copy_constructor:mvsim_msgs.RegisterNodeAnswer)
}

void RegisterNodeAnswer::SharedCtor() {
  errormessage_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  success_ = false;
}

RegisterNodeAnswer::~RegisterNodeAnswer() {
  // @@protoc_insertion_point(destructor:mvsim_msgs.RegisterNodeAnswer)
  SharedDtor();
}

void RegisterNodeAnswer::SharedDtor() {
  errormessage_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void RegisterNodeAnswer::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* RegisterNodeAnswer::descriptor() {
  ::protobuf_RegisterNodeAnswer_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_RegisterNodeAnswer_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RegisterNodeAnswer& RegisterNodeAnswer::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_RegisterNodeAnswer_2eproto::scc_info_RegisterNodeAnswer.base);
  return *internal_default_instance();
}


void RegisterNodeAnswer::Clear() {
// @@protoc_insertion_point(message_clear_start:mvsim_msgs.RegisterNodeAnswer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    errormessage_.ClearNonDefaultToEmptyNoArena();
  }
  success_ = false;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool RegisterNodeAnswer::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:mvsim_msgs.RegisterNodeAnswer)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bool success = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_success();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &success_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string errorMessage = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_errormessage()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->errormessage().data(), static_cast<int>(this->errormessage().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "mvsim_msgs.RegisterNodeAnswer.errorMessage");
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
  // @@protoc_insertion_point(parse_success:mvsim_msgs.RegisterNodeAnswer)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:mvsim_msgs.RegisterNodeAnswer)
  return false;
#undef DO_
}

void RegisterNodeAnswer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:mvsim_msgs.RegisterNodeAnswer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required bool success = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->success(), output);
  }

  // optional string errorMessage = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->errormessage().data(), static_cast<int>(this->errormessage().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "mvsim_msgs.RegisterNodeAnswer.errorMessage");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->errormessage(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:mvsim_msgs.RegisterNodeAnswer)
}

::google::protobuf::uint8* RegisterNodeAnswer::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:mvsim_msgs.RegisterNodeAnswer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required bool success = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->success(), target);
  }

  // optional string errorMessage = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->errormessage().data(), static_cast<int>(this->errormessage().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "mvsim_msgs.RegisterNodeAnswer.errorMessage");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->errormessage(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mvsim_msgs.RegisterNodeAnswer)
  return target;
}

size_t RegisterNodeAnswer::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mvsim_msgs.RegisterNodeAnswer)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // required bool success = 1;
  if (has_success()) {
    total_size += 1 + 1;
  }
  // optional string errorMessage = 2;
  if (has_errormessage()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->errormessage());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RegisterNodeAnswer::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mvsim_msgs.RegisterNodeAnswer)
  GOOGLE_DCHECK_NE(&from, this);
  const RegisterNodeAnswer* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RegisterNodeAnswer>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mvsim_msgs.RegisterNodeAnswer)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mvsim_msgs.RegisterNodeAnswer)
    MergeFrom(*source);
  }
}

void RegisterNodeAnswer::MergeFrom(const RegisterNodeAnswer& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mvsim_msgs.RegisterNodeAnswer)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_errormessage();
      errormessage_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.errormessage_);
    }
    if (cached_has_bits & 0x00000002u) {
      success_ = from.success_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void RegisterNodeAnswer::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mvsim_msgs.RegisterNodeAnswer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RegisterNodeAnswer::CopyFrom(const RegisterNodeAnswer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mvsim_msgs.RegisterNodeAnswer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RegisterNodeAnswer::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000002) != 0x00000002) return false;
  return true;
}

void RegisterNodeAnswer::Swap(RegisterNodeAnswer* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RegisterNodeAnswer::InternalSwap(RegisterNodeAnswer* other) {
  using std::swap;
  errormessage_.Swap(&other->errormessage_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(success_, other->success_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata RegisterNodeAnswer::GetMetadata() const {
  protobuf_RegisterNodeAnswer_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_RegisterNodeAnswer_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace mvsim_msgs
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::mvsim_msgs::RegisterNodeAnswer* Arena::CreateMaybeMessage< ::mvsim_msgs::RegisterNodeAnswer >(Arena* arena) {
  return Arena::CreateInternal< ::mvsim_msgs::RegisterNodeAnswer >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
