// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SrvSetControllerTwist.proto

#ifndef PROTOBUF_INCLUDED_SrvSetControllerTwist_2eproto
#define PROTOBUF_INCLUDED_SrvSetControllerTwist_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "Twist.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_SrvSetControllerTwist_2eproto 

namespace protobuf_SrvSetControllerTwist_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_SrvSetControllerTwist_2eproto
namespace mvsim_msgs {
class SrvSetControllerTwist;
class SrvSetControllerTwistDefaultTypeInternal;
extern SrvSetControllerTwistDefaultTypeInternal _SrvSetControllerTwist_default_instance_;
}  // namespace mvsim_msgs
namespace google {
namespace protobuf {
template<> ::mvsim_msgs::SrvSetControllerTwist* Arena::CreateMaybeMessage<::mvsim_msgs::SrvSetControllerTwist>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace mvsim_msgs {

// ===================================================================

class SrvSetControllerTwist : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mvsim_msgs.SrvSetControllerTwist) */ {
 public:
  SrvSetControllerTwist();
  virtual ~SrvSetControllerTwist();

  SrvSetControllerTwist(const SrvSetControllerTwist& from);

  inline SrvSetControllerTwist& operator=(const SrvSetControllerTwist& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SrvSetControllerTwist(SrvSetControllerTwist&& from) noexcept
    : SrvSetControllerTwist() {
    *this = ::std::move(from);
  }

  inline SrvSetControllerTwist& operator=(SrvSetControllerTwist&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SrvSetControllerTwist& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SrvSetControllerTwist* internal_default_instance() {
    return reinterpret_cast<const SrvSetControllerTwist*>(
               &_SrvSetControllerTwist_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(SrvSetControllerTwist* other);
  friend void swap(SrvSetControllerTwist& a, SrvSetControllerTwist& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SrvSetControllerTwist* New() const final {
    return CreateMaybeMessage<SrvSetControllerTwist>(NULL);
  }

  SrvSetControllerTwist* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SrvSetControllerTwist>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SrvSetControllerTwist& from);
  void MergeFrom(const SrvSetControllerTwist& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SrvSetControllerTwist* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string objectId = 1;
  bool has_objectid() const;
  void clear_objectid();
  static const int kObjectIdFieldNumber = 1;
  const ::std::string& objectid() const;
  void set_objectid(const ::std::string& value);
  #if LANG_CXX11
  void set_objectid(::std::string&& value);
  #endif
  void set_objectid(const char* value);
  void set_objectid(const char* value, size_t size);
  ::std::string* mutable_objectid();
  ::std::string* release_objectid();
  void set_allocated_objectid(::std::string* objectid);

  // required .mvsim_msgs.Twist twistSetPoint = 2;
  bool has_twistsetpoint() const;
  void clear_twistsetpoint();
  static const int kTwistSetPointFieldNumber = 2;
  private:
  const ::mvsim_msgs::Twist& _internal_twistsetpoint() const;
  public:
  const ::mvsim_msgs::Twist& twistsetpoint() const;
  ::mvsim_msgs::Twist* release_twistsetpoint();
  ::mvsim_msgs::Twist* mutable_twistsetpoint();
  void set_allocated_twistsetpoint(::mvsim_msgs::Twist* twistsetpoint);

  // @@protoc_insertion_point(class_scope:mvsim_msgs.SrvSetControllerTwist)
 private:
  void set_has_objectid();
  void clear_has_objectid();
  void set_has_twistsetpoint();
  void clear_has_twistsetpoint();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr objectid_;
  ::mvsim_msgs::Twist* twistsetpoint_;
  friend struct ::protobuf_SrvSetControllerTwist_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SrvSetControllerTwist

// required string objectId = 1;
inline bool SrvSetControllerTwist::has_objectid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SrvSetControllerTwist::set_has_objectid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SrvSetControllerTwist::clear_has_objectid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SrvSetControllerTwist::clear_objectid() {
  objectid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_objectid();
}
inline const ::std::string& SrvSetControllerTwist::objectid() const {
  // @@protoc_insertion_point(field_get:mvsim_msgs.SrvSetControllerTwist.objectId)
  return objectid_.GetNoArena();
}
inline void SrvSetControllerTwist::set_objectid(const ::std::string& value) {
  set_has_objectid();
  objectid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:mvsim_msgs.SrvSetControllerTwist.objectId)
}
#if LANG_CXX11
inline void SrvSetControllerTwist::set_objectid(::std::string&& value) {
  set_has_objectid();
  objectid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mvsim_msgs.SrvSetControllerTwist.objectId)
}
#endif
inline void SrvSetControllerTwist::set_objectid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_objectid();
  objectid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mvsim_msgs.SrvSetControllerTwist.objectId)
}
inline void SrvSetControllerTwist::set_objectid(const char* value, size_t size) {
  set_has_objectid();
  objectid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mvsim_msgs.SrvSetControllerTwist.objectId)
}
inline ::std::string* SrvSetControllerTwist::mutable_objectid() {
  set_has_objectid();
  // @@protoc_insertion_point(field_mutable:mvsim_msgs.SrvSetControllerTwist.objectId)
  return objectid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SrvSetControllerTwist::release_objectid() {
  // @@protoc_insertion_point(field_release:mvsim_msgs.SrvSetControllerTwist.objectId)
  if (!has_objectid()) {
    return NULL;
  }
  clear_has_objectid();
  return objectid_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SrvSetControllerTwist::set_allocated_objectid(::std::string* objectid) {
  if (objectid != NULL) {
    set_has_objectid();
  } else {
    clear_has_objectid();
  }
  objectid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), objectid);
  // @@protoc_insertion_point(field_set_allocated:mvsim_msgs.SrvSetControllerTwist.objectId)
}

// required .mvsim_msgs.Twist twistSetPoint = 2;
inline bool SrvSetControllerTwist::has_twistsetpoint() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SrvSetControllerTwist::set_has_twistsetpoint() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SrvSetControllerTwist::clear_has_twistsetpoint() {
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::mvsim_msgs::Twist& SrvSetControllerTwist::_internal_twistsetpoint() const {
  return *twistsetpoint_;
}
inline const ::mvsim_msgs::Twist& SrvSetControllerTwist::twistsetpoint() const {
  const ::mvsim_msgs::Twist* p = twistsetpoint_;
  // @@protoc_insertion_point(field_get:mvsim_msgs.SrvSetControllerTwist.twistSetPoint)
  return p != NULL ? *p : *reinterpret_cast<const ::mvsim_msgs::Twist*>(
      &::mvsim_msgs::_Twist_default_instance_);
}
inline ::mvsim_msgs::Twist* SrvSetControllerTwist::release_twistsetpoint() {
  // @@protoc_insertion_point(field_release:mvsim_msgs.SrvSetControllerTwist.twistSetPoint)
  clear_has_twistsetpoint();
  ::mvsim_msgs::Twist* temp = twistsetpoint_;
  twistsetpoint_ = NULL;
  return temp;
}
inline ::mvsim_msgs::Twist* SrvSetControllerTwist::mutable_twistsetpoint() {
  set_has_twistsetpoint();
  if (twistsetpoint_ == NULL) {
    auto* p = CreateMaybeMessage<::mvsim_msgs::Twist>(GetArenaNoVirtual());
    twistsetpoint_ = p;
  }
  // @@protoc_insertion_point(field_mutable:mvsim_msgs.SrvSetControllerTwist.twistSetPoint)
  return twistsetpoint_;
}
inline void SrvSetControllerTwist::set_allocated_twistsetpoint(::mvsim_msgs::Twist* twistsetpoint) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(twistsetpoint_);
  }
  if (twistsetpoint) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      twistsetpoint = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, twistsetpoint, submessage_arena);
    }
    set_has_twistsetpoint();
  } else {
    clear_has_twistsetpoint();
  }
  twistsetpoint_ = twistsetpoint;
  // @@protoc_insertion_point(field_set_allocated:mvsim_msgs.SrvSetControllerTwist.twistSetPoint)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace mvsim_msgs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_SrvSetControllerTwist_2eproto
