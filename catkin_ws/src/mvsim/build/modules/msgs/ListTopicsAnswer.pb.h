// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ListTopicsAnswer.proto

#ifndef PROTOBUF_INCLUDED_ListTopicsAnswer_2eproto
#define PROTOBUF_INCLUDED_ListTopicsAnswer_2eproto

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
#include "TopicInfo.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_ListTopicsAnswer_2eproto 

namespace protobuf_ListTopicsAnswer_2eproto {
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
}  // namespace protobuf_ListTopicsAnswer_2eproto
namespace mvsim_msgs {
class ListTopicsAnswer;
class ListTopicsAnswerDefaultTypeInternal;
extern ListTopicsAnswerDefaultTypeInternal _ListTopicsAnswer_default_instance_;
}  // namespace mvsim_msgs
namespace google {
namespace protobuf {
template<> ::mvsim_msgs::ListTopicsAnswer* Arena::CreateMaybeMessage<::mvsim_msgs::ListTopicsAnswer>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace mvsim_msgs {

// ===================================================================

class ListTopicsAnswer : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mvsim_msgs.ListTopicsAnswer) */ {
 public:
  ListTopicsAnswer();
  virtual ~ListTopicsAnswer();

  ListTopicsAnswer(const ListTopicsAnswer& from);

  inline ListTopicsAnswer& operator=(const ListTopicsAnswer& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ListTopicsAnswer(ListTopicsAnswer&& from) noexcept
    : ListTopicsAnswer() {
    *this = ::std::move(from);
  }

  inline ListTopicsAnswer& operator=(ListTopicsAnswer&& from) noexcept {
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
  static const ListTopicsAnswer& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ListTopicsAnswer* internal_default_instance() {
    return reinterpret_cast<const ListTopicsAnswer*>(
               &_ListTopicsAnswer_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ListTopicsAnswer* other);
  friend void swap(ListTopicsAnswer& a, ListTopicsAnswer& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ListTopicsAnswer* New() const final {
    return CreateMaybeMessage<ListTopicsAnswer>(NULL);
  }

  ListTopicsAnswer* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ListTopicsAnswer>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ListTopicsAnswer& from);
  void MergeFrom(const ListTopicsAnswer& from);
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
  void InternalSwap(ListTopicsAnswer* other);
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

  // repeated .mvsim_msgs.TopicInfo topics = 1;
  int topics_size() const;
  void clear_topics();
  static const int kTopicsFieldNumber = 1;
  ::mvsim_msgs::TopicInfo* mutable_topics(int index);
  ::google::protobuf::RepeatedPtrField< ::mvsim_msgs::TopicInfo >*
      mutable_topics();
  const ::mvsim_msgs::TopicInfo& topics(int index) const;
  ::mvsim_msgs::TopicInfo* add_topics();
  const ::google::protobuf::RepeatedPtrField< ::mvsim_msgs::TopicInfo >&
      topics() const;

  // @@protoc_insertion_point(class_scope:mvsim_msgs.ListTopicsAnswer)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::mvsim_msgs::TopicInfo > topics_;
  friend struct ::protobuf_ListTopicsAnswer_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ListTopicsAnswer

// repeated .mvsim_msgs.TopicInfo topics = 1;
inline int ListTopicsAnswer::topics_size() const {
  return topics_.size();
}
inline ::mvsim_msgs::TopicInfo* ListTopicsAnswer::mutable_topics(int index) {
  // @@protoc_insertion_point(field_mutable:mvsim_msgs.ListTopicsAnswer.topics)
  return topics_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::mvsim_msgs::TopicInfo >*
ListTopicsAnswer::mutable_topics() {
  // @@protoc_insertion_point(field_mutable_list:mvsim_msgs.ListTopicsAnswer.topics)
  return &topics_;
}
inline const ::mvsim_msgs::TopicInfo& ListTopicsAnswer::topics(int index) const {
  // @@protoc_insertion_point(field_get:mvsim_msgs.ListTopicsAnswer.topics)
  return topics_.Get(index);
}
inline ::mvsim_msgs::TopicInfo* ListTopicsAnswer::add_topics() {
  // @@protoc_insertion_point(field_add:mvsim_msgs.ListTopicsAnswer.topics)
  return topics_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::mvsim_msgs::TopicInfo >&
ListTopicsAnswer::topics() const {
  // @@protoc_insertion_point(field_list:mvsim_msgs.ListTopicsAnswer.topics)
  return topics_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace mvsim_msgs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_ListTopicsAnswer_2eproto