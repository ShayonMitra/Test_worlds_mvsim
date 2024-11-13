// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ListTopicsAnswer.proto

#include "ListTopicsAnswer.pb.h"

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

namespace protobuf_TopicInfo_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_TopicInfo_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_TopicInfo;
}  // namespace protobuf_TopicInfo_2eproto
namespace mvsim_msgs {
class ListTopicsAnswerDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ListTopicsAnswer>
      _instance;
} _ListTopicsAnswer_default_instance_;
}  // namespace mvsim_msgs
namespace protobuf_ListTopicsAnswer_2eproto {
static void InitDefaultsListTopicsAnswer() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mvsim_msgs::_ListTopicsAnswer_default_instance_;
    new (ptr) ::mvsim_msgs::ListTopicsAnswer();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mvsim_msgs::ListTopicsAnswer::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_ListTopicsAnswer =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsListTopicsAnswer}, {
      &protobuf_TopicInfo_2eproto::scc_info_TopicInfo.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ListTopicsAnswer.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::ListTopicsAnswer, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::ListTopicsAnswer, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::ListTopicsAnswer, topics_),
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::mvsim_msgs::ListTopicsAnswer)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::mvsim_msgs::_ListTopicsAnswer_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "ListTopicsAnswer.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\026ListTopicsAnswer.proto\022\nmvsim_msgs\032\017To"
      "picInfo.proto\"9\n\020ListTopicsAnswer\022%\n\006top"
      "ics\030\001 \003(\0132\025.mvsim_msgs.TopicInfo"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 112);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ListTopicsAnswer.proto", &protobuf_RegisterTypes);
  ::protobuf_TopicInfo_2eproto::AddDescriptors();
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
}  // namespace protobuf_ListTopicsAnswer_2eproto
namespace mvsim_msgs {

// ===================================================================

void ListTopicsAnswer::InitAsDefaultInstance() {
}
void ListTopicsAnswer::clear_topics() {
  topics_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ListTopicsAnswer::kTopicsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ListTopicsAnswer::ListTopicsAnswer()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_ListTopicsAnswer_2eproto::scc_info_ListTopicsAnswer.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:mvsim_msgs.ListTopicsAnswer)
}
ListTopicsAnswer::ListTopicsAnswer(const ListTopicsAnswer& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      topics_(from.topics_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:mvsim_msgs.ListTopicsAnswer)
}

void ListTopicsAnswer::SharedCtor() {
}

ListTopicsAnswer::~ListTopicsAnswer() {
  // @@protoc_insertion_point(destructor:mvsim_msgs.ListTopicsAnswer)
  SharedDtor();
}

void ListTopicsAnswer::SharedDtor() {
}

void ListTopicsAnswer::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ListTopicsAnswer::descriptor() {
  ::protobuf_ListTopicsAnswer_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ListTopicsAnswer_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ListTopicsAnswer& ListTopicsAnswer::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_ListTopicsAnswer_2eproto::scc_info_ListTopicsAnswer.base);
  return *internal_default_instance();
}


void ListTopicsAnswer::Clear() {
// @@protoc_insertion_point(message_clear_start:mvsim_msgs.ListTopicsAnswer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  topics_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ListTopicsAnswer::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:mvsim_msgs.ListTopicsAnswer)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .mvsim_msgs.TopicInfo topics = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_topics()));
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
  // @@protoc_insertion_point(parse_success:mvsim_msgs.ListTopicsAnswer)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:mvsim_msgs.ListTopicsAnswer)
  return false;
#undef DO_
}

void ListTopicsAnswer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:mvsim_msgs.ListTopicsAnswer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .mvsim_msgs.TopicInfo topics = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->topics_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1,
      this->topics(static_cast<int>(i)),
      output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:mvsim_msgs.ListTopicsAnswer)
}

::google::protobuf::uint8* ListTopicsAnswer::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:mvsim_msgs.ListTopicsAnswer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .mvsim_msgs.TopicInfo topics = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->topics_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->topics(static_cast<int>(i)), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mvsim_msgs.ListTopicsAnswer)
  return target;
}

size_t ListTopicsAnswer::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mvsim_msgs.ListTopicsAnswer)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // repeated .mvsim_msgs.TopicInfo topics = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->topics_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->topics(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ListTopicsAnswer::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mvsim_msgs.ListTopicsAnswer)
  GOOGLE_DCHECK_NE(&from, this);
  const ListTopicsAnswer* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ListTopicsAnswer>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mvsim_msgs.ListTopicsAnswer)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mvsim_msgs.ListTopicsAnswer)
    MergeFrom(*source);
  }
}

void ListTopicsAnswer::MergeFrom(const ListTopicsAnswer& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mvsim_msgs.ListTopicsAnswer)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  topics_.MergeFrom(from.topics_);
}

void ListTopicsAnswer::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mvsim_msgs.ListTopicsAnswer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ListTopicsAnswer::CopyFrom(const ListTopicsAnswer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mvsim_msgs.ListTopicsAnswer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ListTopicsAnswer::IsInitialized() const {
  if (!::google::protobuf::internal::AllAreInitialized(this->topics())) return false;
  return true;
}

void ListTopicsAnswer::Swap(ListTopicsAnswer* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ListTopicsAnswer::InternalSwap(ListTopicsAnswer* other) {
  using std::swap;
  CastToBase(&topics_)->InternalSwap(CastToBase(&other->topics_));
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ListTopicsAnswer::GetMetadata() const {
  protobuf_ListTopicsAnswer_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ListTopicsAnswer_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace mvsim_msgs
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::mvsim_msgs::ListTopicsAnswer* Arena::CreateMaybeMessage< ::mvsim_msgs::ListTopicsAnswer >(Arena* arena) {
  return Arena::CreateInternal< ::mvsim_msgs::ListTopicsAnswer >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)