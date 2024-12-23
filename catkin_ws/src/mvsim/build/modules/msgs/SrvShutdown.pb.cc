// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SrvShutdown.proto

#include "SrvShutdown.pb.h"

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
class SrvShutdownDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SrvShutdown>
      _instance;
} _SrvShutdown_default_instance_;
}  // namespace mvsim_msgs
namespace protobuf_SrvShutdown_2eproto {
static void InitDefaultsSrvShutdown() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mvsim_msgs::_SrvShutdown_default_instance_;
    new (ptr) ::mvsim_msgs::SrvShutdown();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mvsim_msgs::SrvShutdown::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_SrvShutdown =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsSrvShutdown}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_SrvShutdown.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::SrvShutdown, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::SrvShutdown, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 5, sizeof(::mvsim_msgs::SrvShutdown)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::mvsim_msgs::_SrvShutdown_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "SrvShutdown.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\021SrvShutdown.proto\022\nmvsim_msgs\"\r\n\013SrvSh"
      "utdown"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 46);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SrvShutdown.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_SrvShutdown_2eproto
namespace mvsim_msgs {

// ===================================================================

void SrvShutdown::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SrvShutdown::SrvShutdown()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_SrvShutdown_2eproto::scc_info_SrvShutdown.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:mvsim_msgs.SrvShutdown)
}
SrvShutdown::SrvShutdown(const SrvShutdown& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:mvsim_msgs.SrvShutdown)
}

void SrvShutdown::SharedCtor() {
}

SrvShutdown::~SrvShutdown() {
  // @@protoc_insertion_point(destructor:mvsim_msgs.SrvShutdown)
  SharedDtor();
}

void SrvShutdown::SharedDtor() {
}

void SrvShutdown::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* SrvShutdown::descriptor() {
  ::protobuf_SrvShutdown_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_SrvShutdown_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SrvShutdown& SrvShutdown::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_SrvShutdown_2eproto::scc_info_SrvShutdown.base);
  return *internal_default_instance();
}


void SrvShutdown::Clear() {
// @@protoc_insertion_point(message_clear_start:mvsim_msgs.SrvShutdown)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SrvShutdown::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:mvsim_msgs.SrvShutdown)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, _internal_metadata_.mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:mvsim_msgs.SrvShutdown)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:mvsim_msgs.SrvShutdown)
  return false;
#undef DO_
}

void SrvShutdown::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:mvsim_msgs.SrvShutdown)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:mvsim_msgs.SrvShutdown)
}

::google::protobuf::uint8* SrvShutdown::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:mvsim_msgs.SrvShutdown)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mvsim_msgs.SrvShutdown)
  return target;
}

size_t SrvShutdown::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mvsim_msgs.SrvShutdown)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SrvShutdown::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mvsim_msgs.SrvShutdown)
  GOOGLE_DCHECK_NE(&from, this);
  const SrvShutdown* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SrvShutdown>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mvsim_msgs.SrvShutdown)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mvsim_msgs.SrvShutdown)
    MergeFrom(*source);
  }
}

void SrvShutdown::MergeFrom(const SrvShutdown& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mvsim_msgs.SrvShutdown)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void SrvShutdown::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mvsim_msgs.SrvShutdown)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SrvShutdown::CopyFrom(const SrvShutdown& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mvsim_msgs.SrvShutdown)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SrvShutdown::IsInitialized() const {
  return true;
}

void SrvShutdown::Swap(SrvShutdown* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SrvShutdown::InternalSwap(SrvShutdown* other) {
  using std::swap;
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata SrvShutdown::GetMetadata() const {
  protobuf_SrvShutdown_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_SrvShutdown_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace mvsim_msgs
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::mvsim_msgs::SrvShutdown* Arena::CreateMaybeMessage< ::mvsim_msgs::SrvShutdown >(Arena* arena) {
  return Arena::CreateInternal< ::mvsim_msgs::SrvShutdown >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
