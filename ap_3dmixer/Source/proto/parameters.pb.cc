// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/parameters.proto

#include "proto/parameters.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_proto_2fparameters_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Parameter_proto_2fparameters_2eproto;
namespace aproto {
class ParameterDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Parameter> _instance;
} _Parameter_default_instance_;
class ParametersDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Parameters> _instance;
} _Parameters_default_instance_;
}  // namespace aproto
static void InitDefaultsscc_info_Parameter_proto_2fparameters_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::aproto::_Parameter_default_instance_;
    new (ptr) ::aproto::Parameter();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::aproto::Parameter::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Parameter_proto_2fparameters_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Parameter_proto_2fparameters_2eproto}, {}};

static void InitDefaultsscc_info_Parameters_proto_2fparameters_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::aproto::_Parameters_default_instance_;
    new (ptr) ::aproto::Parameters();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::aproto::Parameters::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Parameters_proto_2fparameters_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Parameters_proto_2fparameters_2eproto}, {
      &scc_info_Parameter_proto_2fparameters_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_proto_2fparameters_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_proto_2fparameters_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_proto_2fparameters_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_proto_2fparameters_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::aproto::Parameter, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::aproto::Parameter, name_),
  PROTOBUF_FIELD_OFFSET(::aproto::Parameter, value_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::aproto::Parameters, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::aproto::Parameters, parameters_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::aproto::Parameter)},
  { 7, -1, sizeof(::aproto::Parameters)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::aproto::_Parameter_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::aproto::_Parameters_default_instance_),
};

const char descriptor_table_protodef_proto_2fparameters_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\026proto/parameters.proto\022\006aproto\"(\n\tPara"
  "meter\022\014\n\004name\030\001 \001(\t\022\r\n\005value\030\002 \001(\002\"3\n\nPa"
  "rameters\022%\n\nparameters\030\001 \003(\0132\021.aproto.Pa"
  "rameterb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_proto_2fparameters_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_proto_2fparameters_2eproto_sccs[2] = {
  &scc_info_Parameter_proto_2fparameters_2eproto.base,
  &scc_info_Parameters_proto_2fparameters_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_proto_2fparameters_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fparameters_2eproto = {
  false, false, descriptor_table_protodef_proto_2fparameters_2eproto, "proto/parameters.proto", 135,
  &descriptor_table_proto_2fparameters_2eproto_once, descriptor_table_proto_2fparameters_2eproto_sccs, descriptor_table_proto_2fparameters_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_proto_2fparameters_2eproto::offsets,
  file_level_metadata_proto_2fparameters_2eproto, 2, file_level_enum_descriptors_proto_2fparameters_2eproto, file_level_service_descriptors_proto_2fparameters_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_proto_2fparameters_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_proto_2fparameters_2eproto)), true);
namespace aproto {

// ===================================================================

void Parameter::InitAsDefaultInstance() {
}
class Parameter::_Internal {
 public:
};

Parameter::Parameter(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:aproto.Parameter)
}
Parameter::Parameter(const Parameter& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_name(),
      GetArena());
  }
  value_ = from.value_;
  // @@protoc_insertion_point(copy_constructor:aproto.Parameter)
}

void Parameter::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Parameter_proto_2fparameters_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  value_ = 0;
}

Parameter::~Parameter() {
  // @@protoc_insertion_point(destructor:aproto.Parameter)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Parameter::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Parameter::ArenaDtor(void* object) {
  Parameter* _this = reinterpret_cast< Parameter* >(object);
  (void)_this;
}
void Parameter::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Parameter::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Parameter& Parameter::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Parameter_proto_2fparameters_2eproto.base);
  return *internal_default_instance();
}


void Parameter::Clear() {
// @@protoc_insertion_point(message_clear_start:aproto.Parameter)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  value_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Parameter::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "aproto.Parameter.name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // float value = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          value_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Parameter::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:aproto.Parameter)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "aproto.Parameter.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // float value = 2;
  if (!(this->value() <= 0 && this->value() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->_internal_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:aproto.Parameter)
  return target;
}

size_t Parameter::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aproto.Parameter)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // float value = 2;
  if (!(this->value() <= 0 && this->value() >= 0)) {
    total_size += 1 + 4;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Parameter::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:aproto.Parameter)
  GOOGLE_DCHECK_NE(&from, this);
  const Parameter* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Parameter>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:aproto.Parameter)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:aproto.Parameter)
    MergeFrom(*source);
  }
}

void Parameter::MergeFrom(const Parameter& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aproto.Parameter)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {
    _internal_set_name(from._internal_name());
  }
  if (!(from.value() <= 0 && from.value() >= 0)) {
    _internal_set_value(from._internal_value());
  }
}

void Parameter::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:aproto.Parameter)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Parameter::CopyFrom(const Parameter& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aproto.Parameter)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Parameter::IsInitialized() const {
  return true;
}

void Parameter::InternalSwap(Parameter* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(value_, other->value_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Parameter::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Parameters::InitAsDefaultInstance() {
}
class Parameters::_Internal {
 public:
};

Parameters::Parameters(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  parameters_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:aproto.Parameters)
}
Parameters::Parameters(const Parameters& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      parameters_(from.parameters_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:aproto.Parameters)
}

void Parameters::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Parameters_proto_2fparameters_2eproto.base);
}

Parameters::~Parameters() {
  // @@protoc_insertion_point(destructor:aproto.Parameters)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Parameters::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void Parameters::ArenaDtor(void* object) {
  Parameters* _this = reinterpret_cast< Parameters* >(object);
  (void)_this;
}
void Parameters::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Parameters::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Parameters& Parameters::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Parameters_proto_2fparameters_2eproto.base);
  return *internal_default_instance();
}


void Parameters::Clear() {
// @@protoc_insertion_point(message_clear_start:aproto.Parameters)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  parameters_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Parameters::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .aproto.Parameter parameters = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_parameters(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Parameters::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:aproto.Parameters)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .aproto.Parameter parameters = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_parameters_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_parameters(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:aproto.Parameters)
  return target;
}

size_t Parameters::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aproto.Parameters)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .aproto.Parameter parameters = 1;
  total_size += 1UL * this->_internal_parameters_size();
  for (const auto& msg : this->parameters_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Parameters::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:aproto.Parameters)
  GOOGLE_DCHECK_NE(&from, this);
  const Parameters* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Parameters>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:aproto.Parameters)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:aproto.Parameters)
    MergeFrom(*source);
  }
}

void Parameters::MergeFrom(const Parameters& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aproto.Parameters)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  parameters_.MergeFrom(from.parameters_);
}

void Parameters::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:aproto.Parameters)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Parameters::CopyFrom(const Parameters& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aproto.Parameters)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Parameters::IsInitialized() const {
  return true;
}

void Parameters::InternalSwap(Parameters* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  parameters_.InternalSwap(&other->parameters_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Parameters::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace aproto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::aproto::Parameter* Arena::CreateMaybeMessage< ::aproto::Parameter >(Arena* arena) {
  return Arena::CreateMessageInternal< ::aproto::Parameter >(arena);
}
template<> PROTOBUF_NOINLINE ::aproto::Parameters* Arena::CreateMaybeMessage< ::aproto::Parameters >(Arena* arena) {
  return Arena::CreateMessageInternal< ::aproto::Parameters >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
