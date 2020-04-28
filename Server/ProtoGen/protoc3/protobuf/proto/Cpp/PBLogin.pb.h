// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PBLogin.proto

#ifndef PROTOBUF_PBLogin_2eproto__INCLUDED
#define PROTOBUF_PBLogin_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace PBLogin {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_PBLogin_2eproto();
void protobuf_AssignDesc_PBLogin_2eproto();
void protobuf_ShutdownFile_PBLogin_2eproto();

class TcpLogin;
class TcpResponseLogin;

// ===================================================================

class TcpLogin : public ::google::protobuf::MessageLite {
 public:
  TcpLogin();
  virtual ~TcpLogin();

  TcpLogin(const TcpLogin& from);

  inline TcpLogin& operator=(const TcpLogin& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const TcpLogin& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const TcpLogin* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(TcpLogin* other);

  // implements Message ----------------------------------------------

  TcpLogin* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const TcpLogin& from);
  void MergeFrom(const TcpLogin& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string token = 1;
  inline bool has_token() const;
  inline void clear_token();
  static const int kTokenFieldNumber = 1;
  inline const ::std::string& token() const;
  inline void set_token(const ::std::string& value);
  inline void set_token(const char* value);
  inline void set_token(const char* value, size_t size);
  inline ::std::string* mutable_token();
  inline ::std::string* release_token();
  inline void set_allocated_token(::std::string* token);

  // @@protoc_insertion_point(class_scope:PBLogin.TcpLogin)
 private:
  inline void set_has_token();
  inline void clear_has_token();

  ::std::string _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* token_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_PBLogin_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_PBLogin_2eproto();
  #endif
  friend void protobuf_AssignDesc_PBLogin_2eproto();
  friend void protobuf_ShutdownFile_PBLogin_2eproto();

  void InitAsDefaultInstance();
  static TcpLogin* default_instance_;
};
// -------------------------------------------------------------------

class TcpResponseLogin : public ::google::protobuf::MessageLite {
 public:
  TcpResponseLogin();
  virtual ~TcpResponseLogin();

  TcpResponseLogin(const TcpResponseLogin& from);

  inline TcpResponseLogin& operator=(const TcpResponseLogin& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const TcpResponseLogin& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const TcpResponseLogin* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(TcpResponseLogin* other);

  // implements Message ----------------------------------------------

  TcpResponseLogin* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const TcpResponseLogin& from);
  void MergeFrom(const TcpResponseLogin& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bool result = 1;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 1;
  inline bool result() const;
  inline void set_result(bool value);

  // required int32 uid = 2;
  inline bool has_uid() const;
  inline void clear_uid();
  static const int kUidFieldNumber = 2;
  inline ::google::protobuf::int32 uid() const;
  inline void set_uid(::google::protobuf::int32 value);

  // required int32 udpPort = 3;
  inline bool has_udpport() const;
  inline void clear_udpport();
  static const int kUdpPortFieldNumber = 3;
  inline ::google::protobuf::int32 udpport() const;
  inline void set_udpport(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:PBLogin.TcpResponseLogin)
 private:
  inline void set_has_result();
  inline void clear_has_result();
  inline void set_has_uid();
  inline void clear_has_uid();
  inline void set_has_udpport();
  inline void clear_has_udpport();

  ::std::string _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  bool result_;
  ::google::protobuf::int32 uid_;
  ::google::protobuf::int32 udpport_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_PBLogin_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_PBLogin_2eproto();
  #endif
  friend void protobuf_AssignDesc_PBLogin_2eproto();
  friend void protobuf_ShutdownFile_PBLogin_2eproto();

  void InitAsDefaultInstance();
  static TcpResponseLogin* default_instance_;
};
// ===================================================================


// ===================================================================

// TcpLogin

// required string token = 1;
inline bool TcpLogin::has_token() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TcpLogin::set_has_token() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TcpLogin::clear_has_token() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TcpLogin::clear_token() {
  if (token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_->clear();
  }
  clear_has_token();
}
inline const ::std::string& TcpLogin::token() const {
  // @@protoc_insertion_point(field_get:PBLogin.TcpLogin.token)
  return *token_;
}
inline void TcpLogin::set_token(const ::std::string& value) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::std::string;
  }
  token_->assign(value);
  // @@protoc_insertion_point(field_set:PBLogin.TcpLogin.token)
}
inline void TcpLogin::set_token(const char* value) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::std::string;
  }
  token_->assign(value);
  // @@protoc_insertion_point(field_set_char:PBLogin.TcpLogin.token)
}
inline void TcpLogin::set_token(const char* value, size_t size) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::std::string;
  }
  token_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:PBLogin.TcpLogin.token)
}
inline ::std::string* TcpLogin::mutable_token() {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:PBLogin.TcpLogin.token)
  return token_;
}
inline ::std::string* TcpLogin::release_token() {
  clear_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = token_;
    token_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void TcpLogin::set_allocated_token(::std::string* token) {
  if (token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete token_;
  }
  if (token) {
    set_has_token();
    token_ = token;
  } else {
    clear_has_token();
    token_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:PBLogin.TcpLogin.token)
}

// -------------------------------------------------------------------

// TcpResponseLogin

// required bool result = 1;
inline bool TcpResponseLogin::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TcpResponseLogin::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TcpResponseLogin::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TcpResponseLogin::clear_result() {
  result_ = false;
  clear_has_result();
}
inline bool TcpResponseLogin::result() const {
  // @@protoc_insertion_point(field_get:PBLogin.TcpResponseLogin.result)
  return result_;
}
inline void TcpResponseLogin::set_result(bool value) {
  set_has_result();
  result_ = value;
  // @@protoc_insertion_point(field_set:PBLogin.TcpResponseLogin.result)
}

// required int32 uid = 2;
inline bool TcpResponseLogin::has_uid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TcpResponseLogin::set_has_uid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TcpResponseLogin::clear_has_uid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TcpResponseLogin::clear_uid() {
  uid_ = 0;
  clear_has_uid();
}
inline ::google::protobuf::int32 TcpResponseLogin::uid() const {
  // @@protoc_insertion_point(field_get:PBLogin.TcpResponseLogin.uid)
  return uid_;
}
inline void TcpResponseLogin::set_uid(::google::protobuf::int32 value) {
  set_has_uid();
  uid_ = value;
  // @@protoc_insertion_point(field_set:PBLogin.TcpResponseLogin.uid)
}

// required int32 udpPort = 3;
inline bool TcpResponseLogin::has_udpport() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TcpResponseLogin::set_has_udpport() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TcpResponseLogin::clear_has_udpport() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TcpResponseLogin::clear_udpport() {
  udpport_ = 0;
  clear_has_udpport();
}
inline ::google::protobuf::int32 TcpResponseLogin::udpport() const {
  // @@protoc_insertion_point(field_get:PBLogin.TcpResponseLogin.udpPort)
  return udpport_;
}
inline void TcpResponseLogin::set_udpport(::google::protobuf::int32 value) {
  set_has_udpport();
  udpport_ = value;
  // @@protoc_insertion_point(field_set:PBLogin.TcpResponseLogin.udpPort)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace PBLogin

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_PBLogin_2eproto__INCLUDED