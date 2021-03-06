// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: parameters.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_parameters_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_parameters_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_parameters_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_parameters_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_parameters_2eproto;
namespace aproto {
class Parameter;
class ParameterDefaultTypeInternal;
extern ParameterDefaultTypeInternal _Parameter_default_instance_;
class Parameters;
class ParametersDefaultTypeInternal;
extern ParametersDefaultTypeInternal _Parameters_default_instance_;
}  // namespace aproto
PROTOBUF_NAMESPACE_OPEN
template<> ::aproto::Parameter* Arena::CreateMaybeMessage<::aproto::Parameter>(Arena*);
template<> ::aproto::Parameters* Arena::CreateMaybeMessage<::aproto::Parameters>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace aproto {

// ===================================================================

class Parameter PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:aproto.Parameter) */ {
 public:
  inline Parameter() : Parameter(nullptr) {}
  virtual ~Parameter();

  Parameter(const Parameter& from);
  Parameter(Parameter&& from) noexcept
    : Parameter() {
    *this = ::std::move(from);
  }

  inline Parameter& operator=(const Parameter& from) {
    CopyFrom(from);
    return *this;
  }
  inline Parameter& operator=(Parameter&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Parameter& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Parameter* internal_default_instance() {
    return reinterpret_cast<const Parameter*>(
               &_Parameter_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Parameter& a, Parameter& b) {
    a.Swap(&b);
  }
  inline void Swap(Parameter* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Parameter* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Parameter* New() const final {
    return CreateMaybeMessage<Parameter>(nullptr);
  }

  Parameter* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Parameter>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Parameter& from);
  void MergeFrom(const Parameter& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Parameter* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "aproto.Parameter";
  }
  protected:
  explicit Parameter(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_parameters_2eproto);
    return ::descriptor_table_parameters_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kValueFieldNumber = 2,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // float value = 2;
  void clear_value();
  float value() const;
  void set_value(float value);
  private:
  float _internal_value() const;
  void _internal_set_value(float value);
  public:

  // @@protoc_insertion_point(class_scope:aproto.Parameter)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  float value_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_parameters_2eproto;
};
// -------------------------------------------------------------------

class Parameters PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:aproto.Parameters) */ {
 public:
  inline Parameters() : Parameters(nullptr) {}
  virtual ~Parameters();

  Parameters(const Parameters& from);
  Parameters(Parameters&& from) noexcept
    : Parameters() {
    *this = ::std::move(from);
  }

  inline Parameters& operator=(const Parameters& from) {
    CopyFrom(from);
    return *this;
  }
  inline Parameters& operator=(Parameters&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Parameters& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Parameters* internal_default_instance() {
    return reinterpret_cast<const Parameters*>(
               &_Parameters_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Parameters& a, Parameters& b) {
    a.Swap(&b);
  }
  inline void Swap(Parameters* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Parameters* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Parameters* New() const final {
    return CreateMaybeMessage<Parameters>(nullptr);
  }

  Parameters* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Parameters>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Parameters& from);
  void MergeFrom(const Parameters& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Parameters* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "aproto.Parameters";
  }
  protected:
  explicit Parameters(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_parameters_2eproto);
    return ::descriptor_table_parameters_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kParametersFieldNumber = 1,
  };
  // repeated .aproto.Parameter parameters = 1;
  int parameters_size() const;
  private:
  int _internal_parameters_size() const;
  public:
  void clear_parameters();
  ::aproto::Parameter* mutable_parameters(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::aproto::Parameter >*
      mutable_parameters();
  private:
  const ::aproto::Parameter& _internal_parameters(int index) const;
  ::aproto::Parameter* _internal_add_parameters();
  public:
  const ::aproto::Parameter& parameters(int index) const;
  ::aproto::Parameter* add_parameters();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::aproto::Parameter >&
      parameters() const;

  // @@protoc_insertion_point(class_scope:aproto.Parameters)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::aproto::Parameter > parameters_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_parameters_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Parameter

// string name = 1;
inline void Parameter::clear_name() {
  name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Parameter::name() const {
  // @@protoc_insertion_point(field_get:aproto.Parameter.name)
  return _internal_name();
}
inline void Parameter::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:aproto.Parameter.name)
}
inline std::string* Parameter::mutable_name() {
  // @@protoc_insertion_point(field_mutable:aproto.Parameter.name)
  return _internal_mutable_name();
}
inline const std::string& Parameter::_internal_name() const {
  return name_.Get();
}
inline void Parameter::_internal_set_name(const std::string& value) {
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Parameter::set_name(std::string&& value) {
  
  name_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:aproto.Parameter.name)
}
inline void Parameter::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:aproto.Parameter.name)
}
inline void Parameter::set_name(const char* value,
    size_t size) {
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:aproto.Parameter.name)
}
inline std::string* Parameter::_internal_mutable_name() {
  
  return name_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Parameter::release_name() {
  // @@protoc_insertion_point(field_release:aproto.Parameter.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Parameter::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:aproto.Parameter.name)
}

// float value = 2;
inline void Parameter::clear_value() {
  value_ = 0;
}
inline float Parameter::_internal_value() const {
  return value_;
}
inline float Parameter::value() const {
  // @@protoc_insertion_point(field_get:aproto.Parameter.value)
  return _internal_value();
}
inline void Parameter::_internal_set_value(float value) {
  
  value_ = value;
}
inline void Parameter::set_value(float value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:aproto.Parameter.value)
}

// -------------------------------------------------------------------

// Parameters

// repeated .aproto.Parameter parameters = 1;
inline int Parameters::_internal_parameters_size() const {
  return parameters_.size();
}
inline int Parameters::parameters_size() const {
  return _internal_parameters_size();
}
inline void Parameters::clear_parameters() {
  parameters_.Clear();
}
inline ::aproto::Parameter* Parameters::mutable_parameters(int index) {
  // @@protoc_insertion_point(field_mutable:aproto.Parameters.parameters)
  return parameters_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::aproto::Parameter >*
Parameters::mutable_parameters() {
  // @@protoc_insertion_point(field_mutable_list:aproto.Parameters.parameters)
  return &parameters_;
}
inline const ::aproto::Parameter& Parameters::_internal_parameters(int index) const {
  return parameters_.Get(index);
}
inline const ::aproto::Parameter& Parameters::parameters(int index) const {
  // @@protoc_insertion_point(field_get:aproto.Parameters.parameters)
  return _internal_parameters(index);
}
inline ::aproto::Parameter* Parameters::_internal_add_parameters() {
  return parameters_.Add();
}
inline ::aproto::Parameter* Parameters::add_parameters() {
  // @@protoc_insertion_point(field_add:aproto.Parameters.parameters)
  return _internal_add_parameters();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::aproto::Parameter >&
Parameters::parameters() const {
  // @@protoc_insertion_point(field_list:aproto.Parameters.parameters)
  return parameters_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace aproto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_parameters_2eproto
