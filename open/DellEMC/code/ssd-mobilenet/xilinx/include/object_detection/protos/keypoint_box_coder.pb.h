// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: object_detection/protos/keypoint_box_coder.proto

#ifndef PROTOBUF_object_5fdetection_2fprotos_2fkeypoint_5fbox_5fcoder_2eproto__INCLUDED
#define PROTOBUF_object_5fdetection_2fprotos_2fkeypoint_5fbox_5fcoder_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace object_detection {
namespace protos {
class KeypointBoxCoder;
class KeypointBoxCoderDefaultTypeInternal;
extern KeypointBoxCoderDefaultTypeInternal _KeypointBoxCoder_default_instance_;
}  // namespace protos
}  // namespace object_detection

namespace object_detection {
namespace protos {

namespace protobuf_object_5fdetection_2fprotos_2fkeypoint_5fbox_5fcoder_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_object_5fdetection_2fprotos_2fkeypoint_5fbox_5fcoder_2eproto

// ===================================================================

class KeypointBoxCoder : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:object_detection.protos.KeypointBoxCoder) */ {
 public:
  KeypointBoxCoder();
  virtual ~KeypointBoxCoder();

  KeypointBoxCoder(const KeypointBoxCoder& from);

  inline KeypointBoxCoder& operator=(const KeypointBoxCoder& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  KeypointBoxCoder(KeypointBoxCoder&& from) noexcept
    : KeypointBoxCoder() {
    *this = ::std::move(from);
  }

  inline KeypointBoxCoder& operator=(KeypointBoxCoder&& from) noexcept {
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
  static const KeypointBoxCoder& default_instance();

  static inline const KeypointBoxCoder* internal_default_instance() {
    return reinterpret_cast<const KeypointBoxCoder*>(
               &_KeypointBoxCoder_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(KeypointBoxCoder* other);
  friend void swap(KeypointBoxCoder& a, KeypointBoxCoder& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline KeypointBoxCoder* New() const PROTOBUF_FINAL { return New(NULL); }

  KeypointBoxCoder* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const KeypointBoxCoder& from);
  void MergeFrom(const KeypointBoxCoder& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(KeypointBoxCoder* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 num_keypoints = 1;
  bool has_num_keypoints() const;
  void clear_num_keypoints();
  static const int kNumKeypointsFieldNumber = 1;
  ::google::protobuf::int32 num_keypoints() const;
  void set_num_keypoints(::google::protobuf::int32 value);

  // optional float y_scale = 2 [default = 10];
  bool has_y_scale() const;
  void clear_y_scale();
  static const int kYScaleFieldNumber = 2;
  float y_scale() const;
  void set_y_scale(float value);

  // optional float x_scale = 3 [default = 10];
  bool has_x_scale() const;
  void clear_x_scale();
  static const int kXScaleFieldNumber = 3;
  float x_scale() const;
  void set_x_scale(float value);

  // optional float height_scale = 4 [default = 5];
  bool has_height_scale() const;
  void clear_height_scale();
  static const int kHeightScaleFieldNumber = 4;
  float height_scale() const;
  void set_height_scale(float value);

  // optional float width_scale = 5 [default = 5];
  bool has_width_scale() const;
  void clear_width_scale();
  static const int kWidthScaleFieldNumber = 5;
  float width_scale() const;
  void set_width_scale(float value);

  // @@protoc_insertion_point(class_scope:object_detection.protos.KeypointBoxCoder)
 private:
  void set_has_num_keypoints();
  void clear_has_num_keypoints();
  void set_has_y_scale();
  void clear_has_y_scale();
  void set_has_x_scale();
  void clear_has_x_scale();
  void set_has_height_scale();
  void clear_has_height_scale();
  void set_has_width_scale();
  void clear_has_width_scale();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::int32 num_keypoints_;
  float y_scale_;
  float x_scale_;
  float height_scale_;
  float width_scale_;
  friend struct protobuf_object_5fdetection_2fprotos_2fkeypoint_5fbox_5fcoder_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// KeypointBoxCoder

// optional int32 num_keypoints = 1;
inline bool KeypointBoxCoder::has_num_keypoints() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void KeypointBoxCoder::set_has_num_keypoints() {
  _has_bits_[0] |= 0x00000001u;
}
inline void KeypointBoxCoder::clear_has_num_keypoints() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void KeypointBoxCoder::clear_num_keypoints() {
  num_keypoints_ = 0;
  clear_has_num_keypoints();
}
inline ::google::protobuf::int32 KeypointBoxCoder::num_keypoints() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.KeypointBoxCoder.num_keypoints)
  return num_keypoints_;
}
inline void KeypointBoxCoder::set_num_keypoints(::google::protobuf::int32 value) {
  set_has_num_keypoints();
  num_keypoints_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.KeypointBoxCoder.num_keypoints)
}

// optional float y_scale = 2 [default = 10];
inline bool KeypointBoxCoder::has_y_scale() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void KeypointBoxCoder::set_has_y_scale() {
  _has_bits_[0] |= 0x00000002u;
}
inline void KeypointBoxCoder::clear_has_y_scale() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void KeypointBoxCoder::clear_y_scale() {
  y_scale_ = 10;
  clear_has_y_scale();
}
inline float KeypointBoxCoder::y_scale() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.KeypointBoxCoder.y_scale)
  return y_scale_;
}
inline void KeypointBoxCoder::set_y_scale(float value) {
  set_has_y_scale();
  y_scale_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.KeypointBoxCoder.y_scale)
}

// optional float x_scale = 3 [default = 10];
inline bool KeypointBoxCoder::has_x_scale() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void KeypointBoxCoder::set_has_x_scale() {
  _has_bits_[0] |= 0x00000004u;
}
inline void KeypointBoxCoder::clear_has_x_scale() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void KeypointBoxCoder::clear_x_scale() {
  x_scale_ = 10;
  clear_has_x_scale();
}
inline float KeypointBoxCoder::x_scale() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.KeypointBoxCoder.x_scale)
  return x_scale_;
}
inline void KeypointBoxCoder::set_x_scale(float value) {
  set_has_x_scale();
  x_scale_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.KeypointBoxCoder.x_scale)
}

// optional float height_scale = 4 [default = 5];
inline bool KeypointBoxCoder::has_height_scale() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void KeypointBoxCoder::set_has_height_scale() {
  _has_bits_[0] |= 0x00000008u;
}
inline void KeypointBoxCoder::clear_has_height_scale() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void KeypointBoxCoder::clear_height_scale() {
  height_scale_ = 5;
  clear_has_height_scale();
}
inline float KeypointBoxCoder::height_scale() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.KeypointBoxCoder.height_scale)
  return height_scale_;
}
inline void KeypointBoxCoder::set_height_scale(float value) {
  set_has_height_scale();
  height_scale_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.KeypointBoxCoder.height_scale)
}

// optional float width_scale = 5 [default = 5];
inline bool KeypointBoxCoder::has_width_scale() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void KeypointBoxCoder::set_has_width_scale() {
  _has_bits_[0] |= 0x00000010u;
}
inline void KeypointBoxCoder::clear_has_width_scale() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void KeypointBoxCoder::clear_width_scale() {
  width_scale_ = 5;
  clear_has_width_scale();
}
inline float KeypointBoxCoder::width_scale() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.KeypointBoxCoder.width_scale)
  return width_scale_;
}
inline void KeypointBoxCoder::set_width_scale(float value) {
  set_has_width_scale();
  width_scale_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.KeypointBoxCoder.width_scale)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace protos
}  // namespace object_detection

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_object_5fdetection_2fprotos_2fkeypoint_5fbox_5fcoder_2eproto__INCLUDED
