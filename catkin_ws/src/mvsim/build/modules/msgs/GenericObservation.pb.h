// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GenericObservation.proto

#ifndef PROTOBUF_INCLUDED_GenericObservation_2eproto
#define PROTOBUF_INCLUDED_GenericObservation_2eproto

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
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_GenericObservation_2eproto 

namespace protobuf_GenericObservation_2eproto {
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
}  // namespace protobuf_GenericObservation_2eproto
namespace mvsim_msgs {
class GenericObservation;
class GenericObservationDefaultTypeInternal;
extern GenericObservationDefaultTypeInternal _GenericObservation_default_instance_;
}  // namespace mvsim_msgs
namespace google {
namespace protobuf {
template<> ::mvsim_msgs::GenericObservation* Arena::CreateMaybeMessage<::mvsim_msgs::GenericObservation>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace mvsim_msgs {

// ===================================================================

class GenericObservation : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mvsim_msgs.GenericObservation) */ {
 public:
  GenericObservation();
  virtual ~GenericObservation();

  GenericObservation(const GenericObservation& from);

  inline GenericObservation& operator=(const GenericObservation& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GenericObservation(GenericObservation&& from) noexcept
    : GenericObservation() {
    *this = ::std::move(from);
  }

  inline GenericObservation& operator=(GenericObservation&& from) noexcept {
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
  static const GenericObservation& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GenericObservation* internal_default_instance() {
    return reinterpret_cast<const GenericObservation*>(
               &_GenericObservation_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(GenericObservation* other);
  friend void swap(GenericObservation& a, GenericObservation& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GenericObservation* New() const final {
    return CreateMaybeMessage<GenericObservation>(NULL);
  }

  GenericObservation* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GenericObservation>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GenericObservation& from);
  void MergeFrom(const GenericObservation& from);
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
  void InternalSwap(GenericObservation* other);
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

  // required string sourceObjectId = 2;
  bool has_sourceobjectid() const;
  void clear_sourceobjectid();
  static const int kSourceObjectIdFieldNumber = 2;
  const ::std::string& sourceobjectid() const;
  void set_sourceobjectid(const ::std::string& value);
  #if LANG_CXX11
  void set_sourceobjectid(::std::string&& value);
  #endif
  void set_sourceobjectid(const char* value);
  void set_sourceobjectid(const char* value, size_t size);
  ::std::string* mutable_sourceobjectid();
  ::std::string* release_sourceobjectid();
  void set_allocated_sourceobjectid(::std::string* sourceobjectid);

  // required bytes mrptSerializedObservation = 3;
  bool has_mrptserializedobservation() const;
  void clear_mrptserializedobservation();
  static const int kMrptSerializedObservationFieldNumber = 3;
  const ::std::string& mrptserializedobservation() const;
  void set_mrptserializedobservation(const ::std::string& value);
  #if LANG_CXX11
  void set_mrptserializedobservation(::std::string&& value);
  #endif
  void set_mrptserializedobservation(const char* value);
  void set_mrptserializedobservation(const void* value, size_t size);
  ::std::string* mutable_mrptserializedobservation();
  ::std::string* release_mrptserializedobservation();
  void set_allocated_mrptserializedobservation(::std::string* mrptserializedobservation);

  // required double unixTimestamp = 1;
  bool has_unixtimestamp() const;
  void clear_unixtimestamp();
  static const int kUnixTimestampFieldNumber = 1;
  double unixtimestamp() const;
  void set_unixtimestamp(double value);

  // @@protoc_insertion_point(class_scope:mvsim_msgs.GenericObservation)
 private:
  void set_has_unixtimestamp();
  void clear_has_unixtimestamp();
  void set_has_sourceobjectid();
  void clear_has_sourceobjectid();
  void set_has_mrptserializedobservation();
  void clear_has_mrptserializedobservation();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr sourceobjectid_;
  ::google::protobuf::internal::ArenaStringPtr mrptserializedobservation_;
  double unixtimestamp_;
  friend struct ::protobuf_GenericObservation_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GenericObservation

// required double unixTimestamp = 1;
inline bool GenericObservation::has_unixtimestamp() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void GenericObservation::set_has_unixtimestamp() {
  _has_bits_[0] |= 0x00000004u;
}
inline void GenericObservation::clear_has_unixtimestamp() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void GenericObservation::clear_unixtimestamp() {
  unixtimestamp_ = 0;
  clear_has_unixtimestamp();
}
inline double GenericObservation::unixtimestamp() const {
  // @@protoc_insertion_point(field_get:mvsim_msgs.GenericObservation.unixTimestamp)
  return unixtimestamp_;
}
inline void GenericObservation::set_unixtimestamp(double value) {
  set_has_unixtimestamp();
  unixtimestamp_ = value;
  // @@protoc_insertion_point(field_set:mvsim_msgs.GenericObservation.unixTimestamp)
}

// required string sourceObjectId = 2;
inline bool GenericObservation::has_sourceobjectid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GenericObservation::set_has_sourceobjectid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GenericObservation::clear_has_sourceobjectid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GenericObservation::clear_sourceobjectid() {
  sourceobjectid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_sourceobjectid();
}
inline const ::std::string& GenericObservation::sourceobjectid() const {
  // @@protoc_insertion_point(field_get:mvsim_msgs.GenericObservation.sourceObjectId)
  return sourceobjectid_.GetNoArena();
}
inline void GenericObservation::set_sourceobjectid(const ::std::string& value) {
  set_has_sourceobjectid();
  sourceobjectid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:mvsim_msgs.GenericObservation.sourceObjectId)
}
#if LANG_CXX11
inline void GenericObservation::set_sourceobjectid(::std::string&& value) {
  set_has_sourceobjectid();
  sourceobjectid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mvsim_msgs.GenericObservation.sourceObjectId)
}
#endif
inline void GenericObservation::set_sourceobjectid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_sourceobjectid();
  sourceobjectid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mvsim_msgs.GenericObservation.sourceObjectId)
}
inline void GenericObservation::set_sourceobjectid(const char* value, size_t size) {
  set_has_sourceobjectid();
  sourceobjectid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mvsim_msgs.GenericObservation.sourceObjectId)
}
inline ::std::string* GenericObservation::mutable_sourceobjectid() {
  set_has_sourceobjectid();
  // @@protoc_insertion_point(field_mutable:mvsim_msgs.GenericObservation.sourceObjectId)
  return sourceobjectid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GenericObservation::release_sourceobjectid() {
  // @@protoc_insertion_point(field_release:mvsim_msgs.GenericObservation.sourceObjectId)
  if (!has_sourceobjectid()) {
    return NULL;
  }
  clear_has_sourceobjectid();
  return sourceobjectid_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GenericObservation::set_allocated_sourceobjectid(::std::string* sourceobjectid) {
  if (sourceobjectid != NULL) {
    set_has_sourceobjectid();
  } else {
    clear_has_sourceobjectid();
  }
  sourceobjectid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sourceobjectid);
  // @@protoc_insertion_point(field_set_allocated:mvsim_msgs.GenericObservation.sourceObjectId)
}

// required bytes mrptSerializedObservation = 3;
inline bool GenericObservation::has_mrptserializedobservation() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GenericObservation::set_has_mrptserializedobservation() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GenericObservation::clear_has_mrptserializedobservation() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GenericObservation::clear_mrptserializedobservation() {
  mrptserializedobservation_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_mrptserializedobservation();
}
inline const ::std::string& GenericObservation::mrptserializedobservation() const {
  // @@protoc_insertion_point(field_get:mvsim_msgs.GenericObservation.mrptSerializedObservation)
  return mrptserializedobservation_.GetNoArena();
}
inline void GenericObservation::set_mrptserializedobservation(const ::std::string& value) {
  set_has_mrptserializedobservation();
  mrptserializedobservation_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:mvsim_msgs.GenericObservation.mrptSerializedObservation)
}
#if LANG_CXX11
inline void GenericObservation::set_mrptserializedobservation(::std::string&& value) {
  set_has_mrptserializedobservation();
  mrptserializedobservation_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mvsim_msgs.GenericObservation.mrptSerializedObservation)
}
#endif
inline void GenericObservation::set_mrptserializedobservation(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_mrptserializedobservation();
  mrptserializedobservation_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mvsim_msgs.GenericObservation.mrptSerializedObservation)
}
inline void GenericObservation::set_mrptserializedobservation(const void* value, size_t size) {
  set_has_mrptserializedobservation();
  mrptserializedobservation_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mvsim_msgs.GenericObservation.mrptSerializedObservation)
}
inline ::std::string* GenericObservation::mutable_mrptserializedobservation() {
  set_has_mrptserializedobservation();
  // @@protoc_insertion_point(field_mutable:mvsim_msgs.GenericObservation.mrptSerializedObservation)
  return mrptserializedobservation_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GenericObservation::release_mrptserializedobservation() {
  // @@protoc_insertion_point(field_release:mvsim_msgs.GenericObservation.mrptSerializedObservation)
  if (!has_mrptserializedobservation()) {
    return NULL;
  }
  clear_has_mrptserializedobservation();
  return mrptserializedobservation_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GenericObservation::set_allocated_mrptserializedobservation(::std::string* mrptserializedobservation) {
  if (mrptserializedobservation != NULL) {
    set_has_mrptserializedobservation();
  } else {
    clear_has_mrptserializedobservation();
  }
  mrptserializedobservation_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), mrptserializedobservation);
  // @@protoc_insertion_point(field_set_allocated:mvsim_msgs.GenericObservation.mrptSerializedObservation)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace mvsim_msgs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_GenericObservation_2eproto
