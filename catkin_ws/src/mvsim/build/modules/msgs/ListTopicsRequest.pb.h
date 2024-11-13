// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ListTopicsRequest.proto

#ifndef PROTOBUF_INCLUDED_ListTopicsRequest_2eproto
#define PROTOBUF_INCLUDED_ListTopicsRequest_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_ListTopicsRequest_2eproto 

namespace protobuf_ListTopicsRequest_2eproto {
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
}  // namespace protobuf_ListTopicsRequest_2eproto
namespace mvsim_msgs {
class ListTopicsRequest;
class ListTopicsRequestDefaultTypeInternal;
extern ListTopicsRequestDefaultTypeInternal _ListTopicsRequest_default_instance_;
}  // namespace mvsim_msgs
namespace google {
namespace protobuf {
template<> ::mvsim_msgs::ListTopicsRequest* Arena::CreateMaybeMessage<::mvsim_msgs::ListTopicsRequest>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace mvsim_msgs {

// ===================================================================

class ListTopicsRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mvsim_msgs.ListTopicsRequest) */ {
 public:
  ListTopicsRequest();
  virtual ~ListTopicsRequest();

  ListTopicsRequest(const ListTopicsRequest& from);

  inline ListTopicsRequest& operator=(const ListTopicsRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ListTopicsRequest(ListTopicsRequest&& from) noexcept
    : ListTopicsRequest() {
    *this = ::std::move(from);
  }

  inline ListTopicsRequest& operator=(ListTopicsRequest&& from) noexcept {
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
  static const ListTopicsRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ListTopicsRequest* internal_default_instance() {
    return reinterpret_cast<const ListTopicsRequest*>(
               &_ListTopicsRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ListTopicsRequest* other);
  friend void swap(ListTopicsRequest& a, ListTopicsRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ListTopicsRequest* New() const final {
    return CreateMaybeMessage<ListTopicsRequest>(NULL);
  }

  ListTopicsRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ListTopicsRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ListTopicsRequest& from);
  void MergeFrom(const ListTopicsRequest& from);
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
  void InternalSwap(ListTopicsRequest* other);
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

  // optional string topicStartsWith = 1;
  bool has_topicstartswith() const;
  void clear_topicstartswith();
  static const int kTopicStartsWithFieldNumber = 1;
  const ::std::string& topicstartswith() const;
  void set_topicstartswith(const ::std::string& value);
  #if LANG_CXX11
  void set_topicstartswith(::std::string&& value);
  #endif
  void set_topicstartswith(const char* value);
  void set_topicstartswith(const char* value, size_t size);
  ::std::string* mutable_topicstartswith();
  ::std::string* release_topicstartswith();
  void set_allocated_topicstartswith(::std::string* topicstartswith);

  // @@protoc_insertion_point(class_scope:mvsim_msgs.ListTopicsRequest)
 private:
  void set_has_topicstartswith();
  void clear_has_topicstartswith();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr topicstartswith_;
  friend struct ::protobuf_ListTopicsRequest_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ListTopicsRequest

// optional string topicStartsWith = 1;
inline bool ListTopicsRequest::has_topicstartswith() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ListTopicsRequest::set_has_topicstartswith() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ListTopicsRequest::clear_has_topicstartswith() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ListTopicsRequest::clear_topicstartswith() {
  topicstartswith_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_topicstartswith();
}
inline const ::std::string& ListTopicsRequest::topicstartswith() const {
  // @@protoc_insertion_point(field_get:mvsim_msgs.ListTopicsRequest.topicStartsWith)
  return topicstartswith_.GetNoArena();
}
inline void ListTopicsRequest::set_topicstartswith(const ::std::string& value) {
  set_has_topicstartswith();
  topicstartswith_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:mvsim_msgs.ListTopicsRequest.topicStartsWith)
}
#if LANG_CXX11
inline void ListTopicsRequest::set_topicstartswith(::std::string&& value) {
  set_has_topicstartswith();
  topicstartswith_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mvsim_msgs.ListTopicsRequest.topicStartsWith)
}
#endif
inline void ListTopicsRequest::set_topicstartswith(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_topicstartswith();
  topicstartswith_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mvsim_msgs.ListTopicsRequest.topicStartsWith)
}
inline void ListTopicsRequest::set_topicstartswith(const char* value, size_t size) {
  set_has_topicstartswith();
  topicstartswith_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mvsim_msgs.ListTopicsRequest.topicStartsWith)
}
inline ::std::string* ListTopicsRequest::mutable_topicstartswith() {
  set_has_topicstartswith();
  // @@protoc_insertion_point(field_mutable:mvsim_msgs.ListTopicsRequest.topicStartsWith)
  return topicstartswith_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ListTopicsRequest::release_topicstartswith() {
  // @@protoc_insertion_point(field_release:mvsim_msgs.ListTopicsRequest.topicStartsWith)
  if (!has_topicstartswith()) {
    return NULL;
  }
  clear_has_topicstartswith();
  return topicstartswith_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ListTopicsRequest::set_allocated_topicstartswith(::std::string* topicstartswith) {
  if (topicstartswith != NULL) {
    set_has_topicstartswith();
  } else {
    clear_has_topicstartswith();
  }
  topicstartswith_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), topicstartswith);
  // @@protoc_insertion_point(field_set_allocated:mvsim_msgs.ListTopicsRequest.topicStartsWith)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace mvsim_msgs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_ListTopicsRequest_2eproto