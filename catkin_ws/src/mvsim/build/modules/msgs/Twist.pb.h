// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Twist.proto

#ifndef PROTOBUF_INCLUDED_Twist_2eproto
#define PROTOBUF_INCLUDED_Twist_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_Twist_2eproto 

namespace protobuf_Twist_2eproto {
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
}  // namespace protobuf_Twist_2eproto
namespace mvsim_msgs {
class Twist;
class TwistDefaultTypeInternal;
extern TwistDefaultTypeInternal _Twist_default_instance_;
}  // namespace mvsim_msgs
namespace google {
namespace protobuf {
template<> ::mvsim_msgs::Twist* Arena::CreateMaybeMessage<::mvsim_msgs::Twist>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace mvsim_msgs {

// ===================================================================

class Twist : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mvsim_msgs.Twist) */ {
 public:
  Twist();
  virtual ~Twist();

  Twist(const Twist& from);

  inline Twist& operator=(const Twist& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Twist(Twist&& from) noexcept
    : Twist() {
    *this = ::std::move(from);
  }

  inline Twist& operator=(Twist&& from) noexcept {
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
  static const Twist& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Twist* internal_default_instance() {
    return reinterpret_cast<const Twist*>(
               &_Twist_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Twist* other);
  friend void swap(Twist& a, Twist& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Twist* New() const final {
    return CreateMaybeMessage<Twist>(NULL);
  }

  Twist* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Twist>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Twist& from);
  void MergeFrom(const Twist& from);
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
  void InternalSwap(Twist* other);
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

  // required double vx = 1;
  bool has_vx() const;
  void clear_vx();
  static const int kVxFieldNumber = 1;
  double vx() const;
  void set_vx(double value);

  // required double vy = 2;
  bool has_vy() const;
  void clear_vy();
  static const int kVyFieldNumber = 2;
  double vy() const;
  void set_vy(double value);

  // required double vz = 3;
  bool has_vz() const;
  void clear_vz();
  static const int kVzFieldNumber = 3;
  double vz() const;
  void set_vz(double value);

  // required double wx = 4;
  bool has_wx() const;
  void clear_wx();
  static const int kWxFieldNumber = 4;
  double wx() const;
  void set_wx(double value);

  // required double wy = 5;
  bool has_wy() const;
  void clear_wy();
  static const int kWyFieldNumber = 5;
  double wy() const;
  void set_wy(double value);

  // required double wz = 6;
  bool has_wz() const;
  void clear_wz();
  static const int kWzFieldNumber = 6;
  double wz() const;
  void set_wz(double value);

  // @@protoc_insertion_point(class_scope:mvsim_msgs.Twist)
 private:
  void set_has_vx();
  void clear_has_vx();
  void set_has_vy();
  void clear_has_vy();
  void set_has_vz();
  void clear_has_vz();
  void set_has_wx();
  void clear_has_wx();
  void set_has_wy();
  void clear_has_wy();
  void set_has_wz();
  void clear_has_wz();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  double vx_;
  double vy_;
  double vz_;
  double wx_;
  double wy_;
  double wz_;
  friend struct ::protobuf_Twist_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Twist

// required double vx = 1;
inline bool Twist::has_vx() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Twist::set_has_vx() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Twist::clear_has_vx() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Twist::clear_vx() {
  vx_ = 0;
  clear_has_vx();
}
inline double Twist::vx() const {
  // @@protoc_insertion_point(field_get:mvsim_msgs.Twist.vx)
  return vx_;
}
inline void Twist::set_vx(double value) {
  set_has_vx();
  vx_ = value;
  // @@protoc_insertion_point(field_set:mvsim_msgs.Twist.vx)
}

// required double vy = 2;
inline bool Twist::has_vy() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Twist::set_has_vy() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Twist::clear_has_vy() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Twist::clear_vy() {
  vy_ = 0;
  clear_has_vy();
}
inline double Twist::vy() const {
  // @@protoc_insertion_point(field_get:mvsim_msgs.Twist.vy)
  return vy_;
}
inline void Twist::set_vy(double value) {
  set_has_vy();
  vy_ = value;
  // @@protoc_insertion_point(field_set:mvsim_msgs.Twist.vy)
}

// required double vz = 3;
inline bool Twist::has_vz() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Twist::set_has_vz() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Twist::clear_has_vz() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Twist::clear_vz() {
  vz_ = 0;
  clear_has_vz();
}
inline double Twist::vz() const {
  // @@protoc_insertion_point(field_get:mvsim_msgs.Twist.vz)
  return vz_;
}
inline void Twist::set_vz(double value) {
  set_has_vz();
  vz_ = value;
  // @@protoc_insertion_point(field_set:mvsim_msgs.Twist.vz)
}

// required double wx = 4;
inline bool Twist::has_wx() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Twist::set_has_wx() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Twist::clear_has_wx() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Twist::clear_wx() {
  wx_ = 0;
  clear_has_wx();
}
inline double Twist::wx() const {
  // @@protoc_insertion_point(field_get:mvsim_msgs.Twist.wx)
  return wx_;
}
inline void Twist::set_wx(double value) {
  set_has_wx();
  wx_ = value;
  // @@protoc_insertion_point(field_set:mvsim_msgs.Twist.wx)
}

// required double wy = 5;
inline bool Twist::has_wy() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Twist::set_has_wy() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Twist::clear_has_wy() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Twist::clear_wy() {
  wy_ = 0;
  clear_has_wy();
}
inline double Twist::wy() const {
  // @@protoc_insertion_point(field_get:mvsim_msgs.Twist.wy)
  return wy_;
}
inline void Twist::set_wy(double value) {
  set_has_wy();
  wy_ = value;
  // @@protoc_insertion_point(field_set:mvsim_msgs.Twist.wy)
}

// required double wz = 6;
inline bool Twist::has_wz() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Twist::set_has_wz() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Twist::clear_has_wz() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Twist::clear_wz() {
  wz_ = 0;
  clear_has_wz();
}
inline double Twist::wz() const {
  // @@protoc_insertion_point(field_get:mvsim_msgs.Twist.wz)
  return wz_;
}
inline void Twist::set_wz(double value) {
  set_has_wz();
  wz_ = value;
  // @@protoc_insertion_point(field_set:mvsim_msgs.Twist.wz)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace mvsim_msgs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_Twist_2eproto