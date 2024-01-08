// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: user.proto

#include "user.pb.h"

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

PROTOBUF_CONSTEXPR User::User(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.address_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.email_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.psswd_hash_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.uid_)*/0
  , /*decltype(_impl_.project_count_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct UserDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UserDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~UserDefaultTypeInternal() {}
  union {
    User _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UserDefaultTypeInternal _User_default_instance_;
PROTOBUF_CONSTEXPR UserPortal::UserPortal(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.user_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct UserPortalDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UserPortalDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~UserPortalDefaultTypeInternal() {}
  union {
    UserPortal _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UserPortalDefaultTypeInternal _UserPortal_default_instance_;
static ::_pb::Metadata file_level_metadata_user_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_user_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_user_2eproto = nullptr;

const uint32_t TableStruct_user_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::User, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::User, _impl_.uid_),
  PROTOBUF_FIELD_OFFSET(::User, _impl_.name_),
  PROTOBUF_FIELD_OFFSET(::User, _impl_.address_),
  PROTOBUF_FIELD_OFFSET(::User, _impl_.email_),
  PROTOBUF_FIELD_OFFSET(::User, _impl_.psswd_hash_),
  PROTOBUF_FIELD_OFFSET(::User, _impl_.project_count_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::UserPortal, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::UserPortal, _impl_.user_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::User)},
  { 12, -1, -1, sizeof(::UserPortal)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_User_default_instance_._instance,
  &::_UserPortal_default_instance_._instance,
};

const char descriptor_table_protodef_user_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\nuser.proto\"l\n\004User\022\013\n\003uid\030\001 \001(\005\022\014\n\004nam"
  "e\030\002 \001(\t\022\017\n\007address\030\003 \001(\t\022\r\n\005email\030\004 \001(\t\022"
  "\022\n\npsswd_hash\030\005 \001(\t\022\025\n\rproject_count\030\006 \001"
  "(\005\"!\n\nUserPortal\022\023\n\004user\030\001 \003(\0132\005.Userb\006p"
  "roto3"
  ;
static ::_pbi::once_flag descriptor_table_user_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_user_2eproto = {
    false, false, 165, descriptor_table_protodef_user_2eproto,
    "user.proto",
    &descriptor_table_user_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_user_2eproto::offsets,
    file_level_metadata_user_2eproto, file_level_enum_descriptors_user_2eproto,
    file_level_service_descriptors_user_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_user_2eproto_getter() {
  return &descriptor_table_user_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_user_2eproto(&descriptor_table_user_2eproto);

// ===================================================================

class User::_Internal {
 public:
};

User::User(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:User)
}
User::User(const User& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  User* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.name_){}
    , decltype(_impl_.address_){}
    , decltype(_impl_.email_){}
    , decltype(_impl_.psswd_hash_){}
    , decltype(_impl_.uid_){}
    , decltype(_impl_.project_count_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  _impl_.address_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.address_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_address().empty()) {
    _this->_impl_.address_.Set(from._internal_address(), 
      _this->GetArenaForAllocation());
  }
  _impl_.email_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.email_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_email().empty()) {
    _this->_impl_.email_.Set(from._internal_email(), 
      _this->GetArenaForAllocation());
  }
  _impl_.psswd_hash_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.psswd_hash_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_psswd_hash().empty()) {
    _this->_impl_.psswd_hash_.Set(from._internal_psswd_hash(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.uid_, &from._impl_.uid_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.project_count_) -
    reinterpret_cast<char*>(&_impl_.uid_)) + sizeof(_impl_.project_count_));
  // @@protoc_insertion_point(copy_constructor:User)
}

inline void User::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.name_){}
    , decltype(_impl_.address_){}
    , decltype(_impl_.email_){}
    , decltype(_impl_.psswd_hash_){}
    , decltype(_impl_.uid_){0}
    , decltype(_impl_.project_count_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.address_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.address_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.email_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.email_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.psswd_hash_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.psswd_hash_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

User::~User() {
  // @@protoc_insertion_point(destructor:User)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void User::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.name_.Destroy();
  _impl_.address_.Destroy();
  _impl_.email_.Destroy();
  _impl_.psswd_hash_.Destroy();
}

void User::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void User::Clear() {
// @@protoc_insertion_point(message_clear_start:User)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.name_.ClearToEmpty();
  _impl_.address_.ClearToEmpty();
  _impl_.email_.ClearToEmpty();
  _impl_.psswd_hash_.ClearToEmpty();
  ::memset(&_impl_.uid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.project_count_) -
      reinterpret_cast<char*>(&_impl_.uid_)) + sizeof(_impl_.project_count_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* User::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 uid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.uid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "User.name"));
        } else
          goto handle_unusual;
        continue;
      // string address = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_address();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "User.address"));
        } else
          goto handle_unusual;
        continue;
      // string email = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_email();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "User.email"));
        } else
          goto handle_unusual;
        continue;
      // string psswd_hash = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_psswd_hash();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "User.psswd_hash"));
        } else
          goto handle_unusual;
        continue;
      // int32 project_count = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _impl_.project_count_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
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

uint8_t* User::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:User)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 uid = 1;
  if (this->_internal_uid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_uid(), target);
  }

  // string name = 2;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "User.name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name(), target);
  }

  // string address = 3;
  if (!this->_internal_address().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_address().data(), static_cast<int>(this->_internal_address().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "User.address");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_address(), target);
  }

  // string email = 4;
  if (!this->_internal_email().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_email().data(), static_cast<int>(this->_internal_email().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "User.email");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_email(), target);
  }

  // string psswd_hash = 5;
  if (!this->_internal_psswd_hash().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_psswd_hash().data(), static_cast<int>(this->_internal_psswd_hash().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "User.psswd_hash");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_psswd_hash(), target);
  }

  // int32 project_count = 6;
  if (this->_internal_project_count() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(6, this->_internal_project_count(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:User)
  return target;
}

size_t User::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:User)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 2;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // string address = 3;
  if (!this->_internal_address().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_address());
  }

  // string email = 4;
  if (!this->_internal_email().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_email());
  }

  // string psswd_hash = 5;
  if (!this->_internal_psswd_hash().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_psswd_hash());
  }

  // int32 uid = 1;
  if (this->_internal_uid() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_uid());
  }

  // int32 project_count = 6;
  if (this->_internal_project_count() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_project_count());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData User::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    User::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*User::GetClassData() const { return &_class_data_; }


void User::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<User*>(&to_msg);
  auto& from = static_cast<const User&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:User)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  if (!from._internal_address().empty()) {
    _this->_internal_set_address(from._internal_address());
  }
  if (!from._internal_email().empty()) {
    _this->_internal_set_email(from._internal_email());
  }
  if (!from._internal_psswd_hash().empty()) {
    _this->_internal_set_psswd_hash(from._internal_psswd_hash());
  }
  if (from._internal_uid() != 0) {
    _this->_internal_set_uid(from._internal_uid());
  }
  if (from._internal_project_count() != 0) {
    _this->_internal_set_project_count(from._internal_project_count());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void User::CopyFrom(const User& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:User)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool User::IsInitialized() const {
  return true;
}

void User::InternalSwap(User* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.address_, lhs_arena,
      &other->_impl_.address_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.email_, lhs_arena,
      &other->_impl_.email_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.psswd_hash_, lhs_arena,
      &other->_impl_.psswd_hash_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(User, _impl_.project_count_)
      + sizeof(User::_impl_.project_count_)
      - PROTOBUF_FIELD_OFFSET(User, _impl_.uid_)>(
          reinterpret_cast<char*>(&_impl_.uid_),
          reinterpret_cast<char*>(&other->_impl_.uid_));
}

::PROTOBUF_NAMESPACE_ID::Metadata User::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_user_2eproto_getter, &descriptor_table_user_2eproto_once,
      file_level_metadata_user_2eproto[0]);
}

// ===================================================================

class UserPortal::_Internal {
 public:
};

UserPortal::UserPortal(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:UserPortal)
}
UserPortal::UserPortal(const UserPortal& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  UserPortal* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.user_){from._impl_.user_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:UserPortal)
}

inline void UserPortal::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.user_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

UserPortal::~UserPortal() {
  // @@protoc_insertion_point(destructor:UserPortal)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void UserPortal::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.user_.~RepeatedPtrField();
}

void UserPortal::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void UserPortal::Clear() {
// @@protoc_insertion_point(message_clear_start:UserPortal)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.user_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* UserPortal::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .User user = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_user(), ptr);
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

uint8_t* UserPortal::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:UserPortal)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .User user = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_user_size()); i < n; i++) {
    const auto& repfield = this->_internal_user(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:UserPortal)
  return target;
}

size_t UserPortal::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:UserPortal)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .User user = 1;
  total_size += 1UL * this->_internal_user_size();
  for (const auto& msg : this->_impl_.user_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData UserPortal::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    UserPortal::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*UserPortal::GetClassData() const { return &_class_data_; }


void UserPortal::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<UserPortal*>(&to_msg);
  auto& from = static_cast<const UserPortal&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:UserPortal)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.user_.MergeFrom(from._impl_.user_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void UserPortal::CopyFrom(const UserPortal& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:UserPortal)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserPortal::IsInitialized() const {
  return true;
}

void UserPortal::InternalSwap(UserPortal* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.user_.InternalSwap(&other->_impl_.user_);
}

::PROTOBUF_NAMESPACE_ID::Metadata UserPortal::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_user_2eproto_getter, &descriptor_table_user_2eproto_once,
      file_level_metadata_user_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::User*
Arena::CreateMaybeMessage< ::User >(Arena* arena) {
  return Arena::CreateMessageInternal< ::User >(arena);
}
template<> PROTOBUF_NOINLINE ::UserPortal*
Arena::CreateMaybeMessage< ::UserPortal >(Arena* arena) {
  return Arena::CreateMessageInternal< ::UserPortal >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
