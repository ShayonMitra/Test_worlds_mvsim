// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SrvSetPose.proto

#include "SrvSetPose.pb.h"

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

namespace protobuf_Pose_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_Pose_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Pose;
}  // namespace protobuf_Pose_2eproto
namespace mvsim_msgs {
class SrvSetPoseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SrvSetPose>
      _instance;
} _SrvSetPose_default_instance_;
}  // namespace mvsim_msgs
namespace protobuf_SrvSetPose_2eproto {
static void InitDefaultsSrvSetPose() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mvsim_msgs::_SrvSetPose_default_instance_;
    new (ptr) ::mvsim_msgs::SrvSetPose();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mvsim_msgs::SrvSetPose::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_SrvSetPose =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsSrvSetPose}, {
      &protobuf_Pose_2eproto::scc_info_Pose.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_SrvSetPose.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::SrvSetPose, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::SrvSetPose, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::SrvSetPose, objectid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::SrvSetPose, pose_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mvsim_msgs::SrvSetPose, relativeincrement_),
  0,
  1,
  2,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::mvsim_msgs::SrvSetPose)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::mvsim_msgs::_SrvSetPose_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "SrvSetPose.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\020SrvSetPose.proto\022\nmvsim_msgs\032\nPose.pro"
      "to\"Y\n\nSrvSetPose\022\020\n\010objectId\030\001 \002(\t\022\036\n\004po"
      "se\030\002 \002(\0132\020.mvsim_msgs.Pose\022\031\n\021relativeIn"
      "crement\030\003 \001(\010"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 133);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SrvSetPose.proto", &protobuf_RegisterTypes);
  ::protobuf_Pose_2eproto::AddDescriptors();
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
}  // namespace protobuf_SrvSetPose_2eproto
namespace mvsim_msgs {

// ===================================================================

void SrvSetPose::InitAsDefaultInstance() {
  ::mvsim_msgs::_SrvSetPose_default_instance_._instance.get_mutable()->pose_ = const_cast< ::mvsim_msgs::Pose*>(
      ::mvsim_msgs::Pose::internal_default_instance());
}
void SrvSetPose::clear_pose() {
  if (pose_ != NULL) pose_->Clear();
  clear_has_pose();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SrvSetPose::kObjectIdFieldNumber;
const int SrvSetPose::kPoseFieldNumber;
const int SrvSetPose::kRelativeIncrementFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SrvSetPose::SrvSetPose()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_SrvSetPose_2eproto::scc_info_SrvSetPose.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:mvsim_msgs.SrvSetPose)
}
SrvSetPose::SrvSetPose(const SrvSetPose& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  objectid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_objectid()) {
    objectid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.objectid_);
  }
  if (from.has_pose()) {
    pose_ = new ::mvsim_msgs::Pose(*from.pose_);
  } else {
    pose_ = NULL;
  }
  relativeincrement_ = from.relativeincrement_;
  // @@protoc_insertion_point(copy_constructor:mvsim_msgs.SrvSetPose)
}

void SrvSetPose::SharedCtor() {
  objectid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&pose_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&relativeincrement_) -
      reinterpret_cast<char*>(&pose_)) + sizeof(relativeincrement_));
}

SrvSetPose::~SrvSetPose() {
  // @@protoc_insertion_point(destructor:mvsim_msgs.SrvSetPose)
  SharedDtor();
}

void SrvSetPose::SharedDtor() {
  objectid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete pose_;
}

void SrvSetPose::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* SrvSetPose::descriptor() {
  ::protobuf_SrvSetPose_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_SrvSetPose_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SrvSetPose& SrvSetPose::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_SrvSetPose_2eproto::scc_info_SrvSetPose.base);
  return *internal_default_instance();
}


void SrvSetPose::Clear() {
// @@protoc_insertion_point(message_clear_start:mvsim_msgs.SrvSetPose)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      objectid_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(pose_ != NULL);
      pose_->Clear();
    }
  }
  relativeincrement_ = false;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SrvSetPose::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:mvsim_msgs.SrvSetPose)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string objectId = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_objectid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->objectid().data(), static_cast<int>(this->objectid().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "mvsim_msgs.SrvSetPose.objectId");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required .mvsim_msgs.Pose pose = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_pose()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool relativeIncrement = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_relativeincrement();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &relativeincrement_)));
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
  // @@protoc_insertion_point(parse_success:mvsim_msgs.SrvSetPose)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:mvsim_msgs.SrvSetPose)
  return false;
#undef DO_
}

void SrvSetPose::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:mvsim_msgs.SrvSetPose)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string objectId = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->objectid().data(), static_cast<int>(this->objectid().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "mvsim_msgs.SrvSetPose.objectId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->objectid(), output);
  }

  // required .mvsim_msgs.Pose pose = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_pose(), output);
  }

  // optional bool relativeIncrement = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->relativeincrement(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:mvsim_msgs.SrvSetPose)
}

::google::protobuf::uint8* SrvSetPose::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:mvsim_msgs.SrvSetPose)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string objectId = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->objectid().data(), static_cast<int>(this->objectid().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "mvsim_msgs.SrvSetPose.objectId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->objectid(), target);
  }

  // required .mvsim_msgs.Pose pose = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_pose(), deterministic, target);
  }

  // optional bool relativeIncrement = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->relativeincrement(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mvsim_msgs.SrvSetPose)
  return target;
}

size_t SrvSetPose::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:mvsim_msgs.SrvSetPose)
  size_t total_size = 0;

  if (has_objectid()) {
    // required string objectId = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->objectid());
  }

  if (has_pose()) {
    // required .mvsim_msgs.Pose pose = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *pose_);
  }

  return total_size;
}
size_t SrvSetPose::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mvsim_msgs.SrvSetPose)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required string objectId = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->objectid());

    // required .mvsim_msgs.Pose pose = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *pose_);

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  // optional bool relativeIncrement = 3;
  if (has_relativeincrement()) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SrvSetPose::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mvsim_msgs.SrvSetPose)
  GOOGLE_DCHECK_NE(&from, this);
  const SrvSetPose* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SrvSetPose>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mvsim_msgs.SrvSetPose)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mvsim_msgs.SrvSetPose)
    MergeFrom(*source);
  }
}

void SrvSetPose::MergeFrom(const SrvSetPose& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mvsim_msgs.SrvSetPose)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_objectid();
      objectid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.objectid_);
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_pose()->::mvsim_msgs::Pose::MergeFrom(from.pose());
    }
    if (cached_has_bits & 0x00000004u) {
      relativeincrement_ = from.relativeincrement_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void SrvSetPose::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mvsim_msgs.SrvSetPose)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SrvSetPose::CopyFrom(const SrvSetPose& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mvsim_msgs.SrvSetPose)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SrvSetPose::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  if (has_pose()) {
    if (!this->pose_->IsInitialized()) return false;
  }
  return true;
}

void SrvSetPose::Swap(SrvSetPose* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SrvSetPose::InternalSwap(SrvSetPose* other) {
  using std::swap;
  objectid_.Swap(&other->objectid_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(pose_, other->pose_);
  swap(relativeincrement_, other->relativeincrement_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata SrvSetPose::GetMetadata() const {
  protobuf_SrvSetPose_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_SrvSetPose_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace mvsim_msgs
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::mvsim_msgs::SrvSetPose* Arena::CreateMaybeMessage< ::mvsim_msgs::SrvSetPose >(Arena* arena) {
  return Arena::CreateInternal< ::mvsim_msgs::SrvSetPose >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)