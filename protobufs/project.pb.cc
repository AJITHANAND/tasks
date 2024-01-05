// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: project.proto

#include "project.pb.h"

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

PROTOBUF_CONSTEXPR Project::Project(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.id_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.userid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ProjectDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ProjectDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ProjectDefaultTypeInternal() {}
  union {
    Project _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ProjectDefaultTypeInternal _Project_default_instance_;
PROTOBUF_CONSTEXPR projectProtal::projectProtal(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.projects_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct projectProtalDefaultTypeInternal {
  PROTOBUF_CONSTEXPR projectProtalDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~projectProtalDefaultTypeInternal() {}
  union {
    projectProtal _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 projectProtalDefaultTypeInternal _projectProtal_default_instance_;
static ::_pb::Metadata file_level_metadata_project_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_project_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_project_2eproto = nullptr;

const uint32_t TableStruct_project_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Project, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Project, _impl_.id_),
  PROTOBUF_FIELD_OFFSET(::Project, _impl_.name_),
  PROTOBUF_FIELD_OFFSET(::Project, _impl_.userid_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::projectProtal, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::projectProtal, _impl_.projects_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::Project)},
  { 9, -1, -1, sizeof(::projectProtal)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_Project_default_instance_._instance,
  &::_projectProtal_default_instance_._instance,
};

const char descriptor_table_protodef_project_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rproject.proto\"3\n\007Project\022\n\n\002id\030\001 \001(\t\022\014"
  "\n\004name\030\002 \001(\t\022\016\n\006userId\030\003 \001(\t\"+\n\rprojectP"
  "rotal\022\032\n\010projects\030\001 \003(\0132\010.Projectb\006proto"
  "3"
  ;
static ::_pbi::once_flag descriptor_table_project_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_project_2eproto = {
    false, false, 121, descriptor_table_protodef_project_2eproto,
    "project.proto",
    &descriptor_table_project_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_project_2eproto::offsets,
    file_level_metadata_project_2eproto, file_level_enum_descriptors_project_2eproto,
    file_level_service_descriptors_project_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_project_2eproto_getter() {
  return &descriptor_table_project_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_project_2eproto(&descriptor_table_project_2eproto);

// ===================================================================

class Project::_Internal {
 public:
};

Project::Project(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Project)
}
Project::Project(const Project& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Project* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.id_){}
    , decltype(_impl_.name_){}
    , decltype(_impl_.userid_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.id_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_id().empty()) {
    _this->_impl_.id_.Set(from._internal_id(), 
      _this->GetArenaForAllocation());
  }
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  _impl_.userid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.userid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_userid().empty()) {
    _this->_impl_.userid_.Set(from._internal_userid(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:Project)
}

inline void Project::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.id_){}
    , decltype(_impl_.name_){}
    , decltype(_impl_.userid_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.id_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.userid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.userid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Project::~Project() {
  // @@protoc_insertion_point(destructor:Project)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Project::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.id_.Destroy();
  _impl_.name_.Destroy();
  _impl_.userid_.Destroy();
}

void Project::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Project::Clear() {
// @@protoc_insertion_point(message_clear_start:Project)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.id_.ClearToEmpty();
  _impl_.name_.ClearToEmpty();
  _impl_.userid_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Project::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_id();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Project.id"));
        } else
          goto handle_unusual;
        continue;
      // string name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Project.name"));
        } else
          goto handle_unusual;
        continue;
      // string userId = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_userid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Project.userId"));
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

uint8_t* Project::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Project)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string id = 1;
  if (!this->_internal_id().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_id().data(), static_cast<int>(this->_internal_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Project.id");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_id(), target);
  }

  // string name = 2;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Project.name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name(), target);
  }

  // string userId = 3;
  if (!this->_internal_userid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_userid().data(), static_cast<int>(this->_internal_userid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Project.userId");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_userid(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Project)
  return target;
}

size_t Project::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Project)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string id = 1;
  if (!this->_internal_id().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_id());
  }

  // string name = 2;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // string userId = 3;
  if (!this->_internal_userid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_userid());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Project::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Project::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Project::GetClassData() const { return &_class_data_; }


void Project::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Project*>(&to_msg);
  auto& from = static_cast<const Project&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Project)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_id().empty()) {
    _this->_internal_set_id(from._internal_id());
  }
  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  if (!from._internal_userid().empty()) {
    _this->_internal_set_userid(from._internal_userid());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Project::CopyFrom(const Project& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Project)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Project::IsInitialized() const {
  return true;
}

void Project::InternalSwap(Project* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.id_, lhs_arena,
      &other->_impl_.id_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.userid_, lhs_arena,
      &other->_impl_.userid_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata Project::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_project_2eproto_getter, &descriptor_table_project_2eproto_once,
      file_level_metadata_project_2eproto[0]);
}

// ===================================================================

class projectProtal::_Internal {
 public:
};

projectProtal::projectProtal(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:projectProtal)
}
projectProtal::projectProtal(const projectProtal& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  projectProtal* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.projects_){from._impl_.projects_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:projectProtal)
}

inline void projectProtal::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.projects_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

projectProtal::~projectProtal() {
  // @@protoc_insertion_point(destructor:projectProtal)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void projectProtal::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.projects_.~RepeatedPtrField();
}

void projectProtal::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void projectProtal::Clear() {
// @@protoc_insertion_point(message_clear_start:projectProtal)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.projects_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* projectProtal::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .Project projects = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_projects(), ptr);
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

uint8_t* projectProtal::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:projectProtal)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .Project projects = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_projects_size()); i < n; i++) {
    const auto& repfield = this->_internal_projects(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:projectProtal)
  return target;
}

size_t projectProtal::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:projectProtal)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .Project projects = 1;
  total_size += 1UL * this->_internal_projects_size();
  for (const auto& msg : this->_impl_.projects_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData projectProtal::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    projectProtal::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*projectProtal::GetClassData() const { return &_class_data_; }


void projectProtal::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<projectProtal*>(&to_msg);
  auto& from = static_cast<const projectProtal&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:projectProtal)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.projects_.MergeFrom(from._impl_.projects_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void projectProtal::CopyFrom(const projectProtal& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:projectProtal)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool projectProtal::IsInitialized() const {
  return true;
}

void projectProtal::InternalSwap(projectProtal* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.projects_.InternalSwap(&other->_impl_.projects_);
}

::PROTOBUF_NAMESPACE_ID::Metadata projectProtal::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_project_2eproto_getter, &descriptor_table_project_2eproto_once,
      file_level_metadata_project_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Project*
Arena::CreateMaybeMessage< ::Project >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Project >(arena);
}
template<> PROTOBUF_NOINLINE ::projectProtal*
Arena::CreateMaybeMessage< ::projectProtal >(Arena* arena) {
  return Arena::CreateMessageInternal< ::projectProtal >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
