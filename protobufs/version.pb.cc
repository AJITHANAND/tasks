// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: version.proto

#include "version.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR Operaion::Operaion(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.content_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.type_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct OperaionDefaultTypeInternal {
  PROTOBUF_CONSTEXPR OperaionDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~OperaionDefaultTypeInternal() {}
  union {
    Operaion _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 OperaionDefaultTypeInternal _Operaion_default_instance_;
PROTOBUF_CONSTEXPR Version::Version(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.versionid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.time_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.versionnum_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.operation_)*/nullptr
  , /*decltype(_impl_.projectid_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct VersionDefaultTypeInternal {
  PROTOBUF_CONSTEXPR VersionDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~VersionDefaultTypeInternal() {}
  union {
    Version _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 VersionDefaultTypeInternal _Version_default_instance_;
PROTOBUF_CONSTEXPR Versions::Versions(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.versions_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct VersionsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR VersionsDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~VersionsDefaultTypeInternal() {}
  union {
    Versions _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 VersionsDefaultTypeInternal _Versions_default_instance_;
static ::_pb::Metadata file_level_metadata_version_2eproto[3];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_version_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_version_2eproto = nullptr;

const uint32_t TableStruct_version_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Operaion, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Operaion, _impl_.type_),
  PROTOBUF_FIELD_OFFSET(::Operaion, _impl_.content_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Version, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Version, _impl_.versionid_),
  PROTOBUF_FIELD_OFFSET(::Version, _impl_.operation_),
  PROTOBUF_FIELD_OFFSET(::Version, _impl_.projectid_),
  PROTOBUF_FIELD_OFFSET(::Version, _impl_.time_),
  PROTOBUF_FIELD_OFFSET(::Version, _impl_.versionnum_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Versions, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Versions, _impl_.versions_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::Operaion)},
  { 8, -1, -1, sizeof(::Version)},
  { 19, -1, -1, sizeof(::Versions)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_Operaion_default_instance_._instance,
  &::_Version_default_instance_._instance,
  &::_Versions_default_instance_._instance,
};

const char descriptor_table_protodef_version_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rversion.proto\"u\n\010Operaion\022%\n\004type\030\001 \001("
  "\0162\027.Operaion.operaion_type\022\017\n\007content\030\002 "
  "\001(\t\"1\n\roperaion_type\022\n\n\006insert\020\000\022\010\n\004edit"
  "\020\001\022\n\n\006delete\020\002\"o\n\007Version\022\021\n\tversionId\030\001"
  " \001(\t\022\034\n\toperation\030\002 \001(\0132\t.Operaion\022\021\n\tpr"
  "ojectId\030\003 \001(\005\022\014\n\004time\030\004 \001(\t\022\022\n\nversionNu"
  "m\030\005 \001(\t\"&\n\010Versions\022\032\n\010versions\030\001 \003(\0132\010."
  "Versionb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_version_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_version_2eproto = {
    false, false, 295, descriptor_table_protodef_version_2eproto,
    "version.proto",
    &descriptor_table_version_2eproto_once, nullptr, 0, 3,
    schemas, file_default_instances, TableStruct_version_2eproto::offsets,
    file_level_metadata_version_2eproto, file_level_enum_descriptors_version_2eproto,
    file_level_service_descriptors_version_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_version_2eproto_getter() {
  return &descriptor_table_version_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_version_2eproto(&descriptor_table_version_2eproto);
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Operaion_operaion_type_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_version_2eproto);
  return file_level_enum_descriptors_version_2eproto[0];
}
bool Operaion_operaion_type_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr Operaion_operaion_type Operaion::insert;
constexpr Operaion_operaion_type Operaion::edit;
constexpr Operaion_operaion_type Operaion::delete_;
constexpr Operaion_operaion_type Operaion::operaion_type_MIN;
constexpr Operaion_operaion_type Operaion::operaion_type_MAX;
constexpr int Operaion::operaion_type_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class Operaion::_Internal {
 public:
};

Operaion::Operaion(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Operaion)
}
Operaion::Operaion(const Operaion& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Operaion* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.content_){}
    , decltype(_impl_.type_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.content_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.content_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_content().empty()) {
    _this->_impl_.content_.Set(from._internal_content(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.type_ = from._impl_.type_;
  // @@protoc_insertion_point(copy_constructor:Operaion)
}

inline void Operaion::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.content_){}
    , decltype(_impl_.type_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.content_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.content_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Operaion::~Operaion() {
  // @@protoc_insertion_point(destructor:Operaion)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Operaion::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.content_.Destroy();
}

void Operaion::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Operaion::Clear() {
// @@protoc_insertion_point(message_clear_start:Operaion)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.content_.ClearToEmpty();
  _impl_.type_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Operaion::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .Operaion.operaion_type type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_type(static_cast<::Operaion_operaion_type>(val));
        } else
          goto handle_unusual;
        continue;
      // string content = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_content();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Operaion.content"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Operaion::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Operaion)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .Operaion.operaion_type type = 1;
  if (this->_internal_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      1, this->_internal_type(), target);
  }

  // string content = 2;
  if (!this->_internal_content().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_content().data(), static_cast<int>(this->_internal_content().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Operaion.content");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_content(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Operaion)
  return target;
}

size_t Operaion::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Operaion)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string content = 2;
  if (!this->_internal_content().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_content());
  }

  // .Operaion.operaion_type type = 1;
  if (this->_internal_type() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_type());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Operaion::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Operaion::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Operaion::GetClassData() const { return &_class_data_; }


void Operaion::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Operaion*>(&to_msg);
  auto& from = static_cast<const Operaion&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Operaion)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_content().empty()) {
    _this->_internal_set_content(from._internal_content());
  }
  if (from._internal_type() != 0) {
    _this->_internal_set_type(from._internal_type());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Operaion::CopyFrom(const Operaion& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Operaion)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Operaion::IsInitialized() const {
  return true;
}

void Operaion::InternalSwap(Operaion* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.content_, lhs_arena,
      &other->_impl_.content_, rhs_arena
  );
  swap(_impl_.type_, other->_impl_.type_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Operaion::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_version_2eproto_getter, &descriptor_table_version_2eproto_once,
      file_level_metadata_version_2eproto[0]);
}

// ===================================================================

class Version::_Internal {
 public:
  static const ::Operaion& operation(const Version* msg);
};

const ::Operaion&
Version::_Internal::operation(const Version* msg) {
  return *msg->_impl_.operation_;
}
Version::Version(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Version)
}
Version::Version(const Version& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Version* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.versionid_){}
    , decltype(_impl_.time_){}
    , decltype(_impl_.versionnum_){}
    , decltype(_impl_.operation_){nullptr}
    , decltype(_impl_.projectid_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.versionid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.versionid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_versionid().empty()) {
    _this->_impl_.versionid_.Set(from._internal_versionid(), 
      _this->GetArenaForAllocation());
  }
  _impl_.time_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.time_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_time().empty()) {
    _this->_impl_.time_.Set(from._internal_time(), 
      _this->GetArenaForAllocation());
  }
  _impl_.versionnum_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.versionnum_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_versionnum().empty()) {
    _this->_impl_.versionnum_.Set(from._internal_versionnum(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_operation()) {
    _this->_impl_.operation_ = new ::Operaion(*from._impl_.operation_);
  }
  _this->_impl_.projectid_ = from._impl_.projectid_;
  // @@protoc_insertion_point(copy_constructor:Version)
}

inline void Version::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.versionid_){}
    , decltype(_impl_.time_){}
    , decltype(_impl_.versionnum_){}
    , decltype(_impl_.operation_){nullptr}
    , decltype(_impl_.projectid_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.versionid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.versionid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.time_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.time_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.versionnum_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.versionnum_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Version::~Version() {
  // @@protoc_insertion_point(destructor:Version)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Version::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.versionid_.Destroy();
  _impl_.time_.Destroy();
  _impl_.versionnum_.Destroy();
  if (this != internal_default_instance()) delete _impl_.operation_;
}

void Version::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Version::Clear() {
// @@protoc_insertion_point(message_clear_start:Version)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.versionid_.ClearToEmpty();
  _impl_.time_.ClearToEmpty();
  _impl_.versionnum_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.operation_ != nullptr) {
    delete _impl_.operation_;
  }
  _impl_.operation_ = nullptr;
  _impl_.projectid_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Version::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string versionId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_versionid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Version.versionId"));
        } else
          goto handle_unusual;
        continue;
      // .Operaion operation = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_operation(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 projectId = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.projectid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string time = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_time();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Version.time"));
        } else
          goto handle_unusual;
        continue;
      // string versionNum = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_versionnum();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Version.versionNum"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Version::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Version)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string versionId = 1;
  if (!this->_internal_versionid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_versionid().data(), static_cast<int>(this->_internal_versionid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Version.versionId");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_versionid(), target);
  }

  // .Operaion operation = 2;
  if (this->_internal_has_operation()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::operation(this),
        _Internal::operation(this).GetCachedSize(), target, stream);
  }

  // int32 projectId = 3;
  if (this->_internal_projectid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_projectid(), target);
  }

  // string time = 4;
  if (!this->_internal_time().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_time().data(), static_cast<int>(this->_internal_time().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Version.time");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_time(), target);
  }

  // string versionNum = 5;
  if (!this->_internal_versionnum().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_versionnum().data(), static_cast<int>(this->_internal_versionnum().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Version.versionNum");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_versionnum(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Version)
  return target;
}

size_t Version::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Version)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string versionId = 1;
  if (!this->_internal_versionid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_versionid());
  }

  // string time = 4;
  if (!this->_internal_time().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_time());
  }

  // string versionNum = 5;
  if (!this->_internal_versionnum().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_versionnum());
  }

  // .Operaion operation = 2;
  if (this->_internal_has_operation()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.operation_);
  }

  // int32 projectId = 3;
  if (this->_internal_projectid() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_projectid());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Version::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Version::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Version::GetClassData() const { return &_class_data_; }


void Version::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Version*>(&to_msg);
  auto& from = static_cast<const Version&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Version)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_versionid().empty()) {
    _this->_internal_set_versionid(from._internal_versionid());
  }
  if (!from._internal_time().empty()) {
    _this->_internal_set_time(from._internal_time());
  }
  if (!from._internal_versionnum().empty()) {
    _this->_internal_set_versionnum(from._internal_versionnum());
  }
  if (from._internal_has_operation()) {
    _this->_internal_mutable_operation()->::Operaion::MergeFrom(
        from._internal_operation());
  }
  if (from._internal_projectid() != 0) {
    _this->_internal_set_projectid(from._internal_projectid());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Version::CopyFrom(const Version& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Version)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Version::IsInitialized() const {
  return true;
}

void Version::InternalSwap(Version* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.versionid_, lhs_arena,
      &other->_impl_.versionid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.time_, lhs_arena,
      &other->_impl_.time_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.versionnum_, lhs_arena,
      &other->_impl_.versionnum_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Version, _impl_.projectid_)
      + sizeof(Version::_impl_.projectid_)
      - PROTOBUF_FIELD_OFFSET(Version, _impl_.operation_)>(
          reinterpret_cast<char*>(&_impl_.operation_),
          reinterpret_cast<char*>(&other->_impl_.operation_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Version::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_version_2eproto_getter, &descriptor_table_version_2eproto_once,
      file_level_metadata_version_2eproto[1]);
}

// ===================================================================

class Versions::_Internal {
 public:
};

Versions::Versions(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Versions)
}
Versions::Versions(const Versions& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Versions* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.versions_){from._impl_.versions_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:Versions)
}

inline void Versions::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.versions_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Versions::~Versions() {
  // @@protoc_insertion_point(destructor:Versions)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Versions::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.versions_.~RepeatedPtrField();
}

void Versions::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Versions::Clear() {
// @@protoc_insertion_point(message_clear_start:Versions)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.versions_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Versions::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .Version versions = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_versions(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Versions::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Versions)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .Version versions = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_versions_size()); i < n; i++) {
    const auto& repfield = this->_internal_versions(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Versions)
  return target;
}

size_t Versions::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Versions)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .Version versions = 1;
  total_size += 1UL * this->_internal_versions_size();
  for (const auto& msg : this->_impl_.versions_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Versions::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Versions::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Versions::GetClassData() const { return &_class_data_; }


void Versions::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Versions*>(&to_msg);
  auto& from = static_cast<const Versions&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Versions)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.versions_.MergeFrom(from._impl_.versions_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Versions::CopyFrom(const Versions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Versions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Versions::IsInitialized() const {
  return true;
}

void Versions::InternalSwap(Versions* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.versions_.InternalSwap(&other->_impl_.versions_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Versions::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_version_2eproto_getter, &descriptor_table_version_2eproto_once,
      file_level_metadata_version_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Operaion*
Arena::CreateMaybeMessage< ::Operaion >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Operaion >(arena);
}
template<> PROTOBUF_NOINLINE ::Version*
Arena::CreateMaybeMessage< ::Version >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Version >(arena);
}
template<> PROTOBUF_NOINLINE ::Versions*
Arena::CreateMaybeMessage< ::Versions >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Versions >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
