// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: testutil.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_testutil_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_testutil_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021005 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_testutil_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_testutil_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_testutil_2eproto;
namespace rome {
namespace testutil {
class ConnectionManagerTestProto;
struct ConnectionManagerTestProtoDefaultTypeInternal;
extern ConnectionManagerTestProtoDefaultTypeInternal _ConnectionManagerTestProto_default_instance_;
class RdmaChannelTestProto;
struct RdmaChannelTestProtoDefaultTypeInternal;
extern RdmaChannelTestProtoDefaultTypeInternal _RdmaChannelTestProto_default_instance_;
}  // namespace testutil
}  // namespace rome
PROTOBUF_NAMESPACE_OPEN
template<> ::rome::testutil::ConnectionManagerTestProto* Arena::CreateMaybeMessage<::rome::testutil::ConnectionManagerTestProto>(Arena*);
template<> ::rome::testutil::RdmaChannelTestProto* Arena::CreateMaybeMessage<::rome::testutil::RdmaChannelTestProto>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace rome {
namespace testutil {

// ===================================================================

class RdmaChannelTestProto final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:rome.testutil.RdmaChannelTestProto) */ {
 public:
  inline RdmaChannelTestProto() : RdmaChannelTestProto(nullptr) {}
  ~RdmaChannelTestProto() override;
  explicit PROTOBUF_CONSTEXPR RdmaChannelTestProto(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RdmaChannelTestProto(const RdmaChannelTestProto& from);
  RdmaChannelTestProto(RdmaChannelTestProto&& from) noexcept
    : RdmaChannelTestProto() {
    *this = ::std::move(from);
  }

  inline RdmaChannelTestProto& operator=(const RdmaChannelTestProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline RdmaChannelTestProto& operator=(RdmaChannelTestProto&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const RdmaChannelTestProto& default_instance() {
    return *internal_default_instance();
  }
  static inline const RdmaChannelTestProto* internal_default_instance() {
    return reinterpret_cast<const RdmaChannelTestProto*>(
               &_RdmaChannelTestProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RdmaChannelTestProto& a, RdmaChannelTestProto& b) {
    a.Swap(&b);
  }
  inline void Swap(RdmaChannelTestProto* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RdmaChannelTestProto* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RdmaChannelTestProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RdmaChannelTestProto>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const RdmaChannelTestProto& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const RdmaChannelTestProto& from) {
    RdmaChannelTestProto::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RdmaChannelTestProto* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "rome.testutil.RdmaChannelTestProto";
  }
  protected:
  explicit RdmaChannelTestProto(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessageFieldNumber = 1,
  };
  // optional string message = 1;
  bool has_message() const;
  private:
  bool _internal_has_message() const;
  public:
  void clear_message();
  const std::string& message() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_message(ArgT0&& arg0, ArgT... args);
  std::string* mutable_message();
  PROTOBUF_NODISCARD std::string* release_message();
  void set_allocated_message(std::string* message);
  private:
  const std::string& _internal_message() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // @@protoc_insertion_point(class_scope:rome.testutil.RdmaChannelTestProto)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_testutil_2eproto;
};
// -------------------------------------------------------------------

class ConnectionManagerTestProto final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:rome.testutil.ConnectionManagerTestProto) */ {
 public:
  inline ConnectionManagerTestProto() : ConnectionManagerTestProto(nullptr) {}
  ~ConnectionManagerTestProto() override;
  explicit PROTOBUF_CONSTEXPR ConnectionManagerTestProto(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ConnectionManagerTestProto(const ConnectionManagerTestProto& from);
  ConnectionManagerTestProto(ConnectionManagerTestProto&& from) noexcept
    : ConnectionManagerTestProto() {
    *this = ::std::move(from);
  }

  inline ConnectionManagerTestProto& operator=(const ConnectionManagerTestProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline ConnectionManagerTestProto& operator=(ConnectionManagerTestProto&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ConnectionManagerTestProto& default_instance() {
    return *internal_default_instance();
  }
  static inline const ConnectionManagerTestProto* internal_default_instance() {
    return reinterpret_cast<const ConnectionManagerTestProto*>(
               &_ConnectionManagerTestProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ConnectionManagerTestProto& a, ConnectionManagerTestProto& b) {
    a.Swap(&b);
  }
  inline void Swap(ConnectionManagerTestProto* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ConnectionManagerTestProto* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ConnectionManagerTestProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ConnectionManagerTestProto>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ConnectionManagerTestProto& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ConnectionManagerTestProto& from) {
    ConnectionManagerTestProto::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ConnectionManagerTestProto* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "rome.testutil.ConnectionManagerTestProto";
  }
  protected:
  explicit ConnectionManagerTestProto(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessageFieldNumber = 1,
  };
  // optional string message = 1;
  bool has_message() const;
  private:
  bool _internal_has_message() const;
  public:
  void clear_message();
  const std::string& message() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_message(ArgT0&& arg0, ArgT... args);
  std::string* mutable_message();
  PROTOBUF_NODISCARD std::string* release_message();
  void set_allocated_message(std::string* message);
  private:
  const std::string& _internal_message() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // @@protoc_insertion_point(class_scope:rome.testutil.ConnectionManagerTestProto)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_testutil_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RdmaChannelTestProto

// optional string message = 1;
inline bool RdmaChannelTestProto::_internal_has_message() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool RdmaChannelTestProto::has_message() const {
  return _internal_has_message();
}
inline void RdmaChannelTestProto::clear_message() {
  _impl_.message_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& RdmaChannelTestProto::message() const {
  // @@protoc_insertion_point(field_get:rome.testutil.RdmaChannelTestProto.message)
  return _internal_message();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void RdmaChannelTestProto::set_message(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.message_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:rome.testutil.RdmaChannelTestProto.message)
}
inline std::string* RdmaChannelTestProto::mutable_message() {
  std::string* _s = _internal_mutable_message();
  // @@protoc_insertion_point(field_mutable:rome.testutil.RdmaChannelTestProto.message)
  return _s;
}
inline const std::string& RdmaChannelTestProto::_internal_message() const {
  return _impl_.message_.Get();
}
inline void RdmaChannelTestProto::_internal_set_message(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.message_.Set(value, GetArenaForAllocation());
}
inline std::string* RdmaChannelTestProto::_internal_mutable_message() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.message_.Mutable(GetArenaForAllocation());
}
inline std::string* RdmaChannelTestProto::release_message() {
  // @@protoc_insertion_point(field_release:rome.testutil.RdmaChannelTestProto.message)
  if (!_internal_has_message()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.message_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.message_.IsDefault()) {
    _impl_.message_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void RdmaChannelTestProto::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.message_.SetAllocated(message, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.message_.IsDefault()) {
    _impl_.message_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:rome.testutil.RdmaChannelTestProto.message)
}

// -------------------------------------------------------------------

// ConnectionManagerTestProto

// optional string message = 1;
inline bool ConnectionManagerTestProto::_internal_has_message() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ConnectionManagerTestProto::has_message() const {
  return _internal_has_message();
}
inline void ConnectionManagerTestProto::clear_message() {
  _impl_.message_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& ConnectionManagerTestProto::message() const {
  // @@protoc_insertion_point(field_get:rome.testutil.ConnectionManagerTestProto.message)
  return _internal_message();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ConnectionManagerTestProto::set_message(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.message_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:rome.testutil.ConnectionManagerTestProto.message)
}
inline std::string* ConnectionManagerTestProto::mutable_message() {
  std::string* _s = _internal_mutable_message();
  // @@protoc_insertion_point(field_mutable:rome.testutil.ConnectionManagerTestProto.message)
  return _s;
}
inline const std::string& ConnectionManagerTestProto::_internal_message() const {
  return _impl_.message_.Get();
}
inline void ConnectionManagerTestProto::_internal_set_message(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.message_.Set(value, GetArenaForAllocation());
}
inline std::string* ConnectionManagerTestProto::_internal_mutable_message() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.message_.Mutable(GetArenaForAllocation());
}
inline std::string* ConnectionManagerTestProto::release_message() {
  // @@protoc_insertion_point(field_release:rome.testutil.ConnectionManagerTestProto.message)
  if (!_internal_has_message()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.message_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.message_.IsDefault()) {
    _impl_.message_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void ConnectionManagerTestProto::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.message_.SetAllocated(message, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.message_.IsDefault()) {
    _impl_.message_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:rome.testutil.ConnectionManagerTestProto.message)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace testutil
}  // namespace rome

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_testutil_2eproto
