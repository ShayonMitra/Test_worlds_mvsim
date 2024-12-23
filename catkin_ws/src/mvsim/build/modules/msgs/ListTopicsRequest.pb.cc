// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ListTopicsRequest.proto

#include "ListTopicsRequest.pb.h"

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
class ListTopicsRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ListTopicsRequest>
      _instance;
} _ListTopicsRequest_default_instance_;
}  // namespace mvsim_msgs
namespace protobuf_ListTopicsRequest_2eproto {
static void InitDefaultsListTopicsRequest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mvsim_msgs::_ListTopicsRequest_default_instance_;
    new (ptr) ::mvsim_msgs::ListTopicsRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mvsim_msgs::ListTopicsRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ListTopicsRequest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsListTopicsRequest}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ListTopicsRequest.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::ListTopicsRequest, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::ListTopicsRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::ListTopicsRequest, topicstartswith_),
  0,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::mvsim_msgs::ListTopicsRequest)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::mvsim_msgs::_ListTopicsRequest_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "ListTopicsRequest.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\027ListTopicsRequest.proto\022\nmvsim_msgs\",\n"
      "\021ListTopicsRequest\022\027\n\017topicStartsWith\030\001 "
      "\001(\t"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 83);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ListTopicsRequest.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_ListTopicsRequest_2eproto
namespace mvsim_msgs {

// ===================================================================

void ListTopicsRequest::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ListTopicsRequest::kTopicStartsWithFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ListTopicsRequest::ListTopicsRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_ListTopicsRequest_2eproto::scc_info_ListTopicsRequest.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:mvsim_msgs.ListTopicsRequest)
}
ListTopicsRequest::ListTopicsRequest(const ListTopicsRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  topicstartswith_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_topicstartswith()) {
    topicstartswith_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.topicstartswith_);
  }
  // @@protoc_insertion_point(copy_constructor:mvsim_msgs.ListTopicsRequest)
}

void ListTopicsRequest::SharedCtor() {
  topicstartswith_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

ListTopicsRequest::~ListTopicsRequest() {
  // @@protoc_insertion_point(destructor:mvsim_msgs.ListTopicsRequest)
  SharedDtor();
}

void ListTopicsRequest::SharedDtor() {
  topicstartswith_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ListTopicsRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ListTopicsRequest::descriptor() {
  ::protobuf_ListTopicsRequest_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ListTopicsRequest_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ListTopicsRequest& ListTopicsRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_ListTopicsRequest_2eproto::scc_info_ListTopicsRequest.base);
  return *internal_default_instance();
}


void ListTopicsRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:mvsim_msgs.ListTopicsRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    topicstartswith_.ClearNonDefaultToEmptyNoArena();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ListTopicsRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:mvsim_msgs.ListTopicsRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string topicStartsWith = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_topicstartswith()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->topicstartswith().data(), static_cast<int>(this->topicstartswith().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "mvsim_msgs.ListTopicsRequest.topicStartsWith");
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
  // @@protoc_insertion_point(parse_success:mvsim_msgs.ListTopicsRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:mvsim_msgs.ListTopicsRequest)
  return false;
#undef DO_
}

void ListTopicsRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:mvsim_msgs.ListTopicsRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string topicStartsWith = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->topicstartswith().data(), static_cast<int>(this->topicstartswith().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "mvsim_msgs.ListTopicsRequest.topicStartsWith");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->topicstartswith(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:mvsim_msgs.ListTopicsRequest)
}

::google::protobuf::uint8* ListTopicsRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:mvsim_msgs.ListTopicsRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string topicStartsWith = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->topicstartswith().data(), static_cast<int>(this->topicstartswith().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "mvsim_msgs.ListTopicsRequest.topicStartsWith");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->topicstartswith(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mvsim_msgs.ListTopicsRequest)
  return target;
}

size_t ListTopicsRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mvsim_msgs.ListTopicsRequest)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // optional string topicStartsWith = 1;
  if (has_topicstartswith()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->topicstartswith());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ListTopicsRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mvsim_msgs.ListTopicsRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const ListTopicsRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ListTopicsRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mvsim_msgs.ListTopicsRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mvsim_msgs.ListTopicsRequest)
    MergeFrom(*source);
  }
}

void ListTopicsRequest::MergeFrom(const ListTopicsRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mvsim_msgs.ListTopicsRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_topicstartswith()) {
    set_has_topicstartswith();
    topicstartswith_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.topicstartswith_);
  }
}

void ListTopicsRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mvsim_msgs.ListTopicsRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ListTopicsRequest::CopyFrom(const ListTopicsRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mvsim_msgs.ListTopicsRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ListTopicsRequest::IsInitialized() const {
  return true;
}

void ListTopicsRequest::Swap(ListTopicsRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ListTopicsRequest::InternalSwap(ListTopicsRequest* other) {
  using std::swap;
  topicstartswith_.Swap(&other->topicstartswith_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ListTopicsRequest::GetMetadata() const {
  protobuf_ListTopicsRequest_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ListTopicsRequest_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace mvsim_msgs
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::mvsim_msgs::ListTopicsRequest* Arena::CreateMaybeMessage< ::mvsim_msgs::ListTopicsRequest >(Arena* arena) {
  return Arena::CreateInternal< ::mvsim_msgs::ListTopicsRequest >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
