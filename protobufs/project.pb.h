// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: project.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_project_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_project_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
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
#define PROTOBUF_INTERNAL_EXPORT_project_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_project_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_project_2eproto;
class Project;
struct ProjectDefaultTypeInternal;
extern ProjectDefaultTypeInternal _Project_default_instance_;
class projectPortal;
struct projectPortalDefaultTypeInternal;
extern projectPortalDefaultTypeInternal _projectPortal_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Project* Arena::CreateMaybeMessage<::Project>(Arena*);
template<> ::projectPortal* Arena::CreateMaybeMessage<::projectPortal>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Project final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Project) */ {
 public:
  inline Project() : Project(nullptr) {}
  ~Project() override;
  explicit PROTOBUF_CONSTEXPR Project(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Project(const Project& from);
  Project(Project&& from) noexcept
    : Project() {
    *this = ::std::move(from);
  }

  inline Project& operator=(const Project& from) {
    CopyFrom(from);
    return *this;
  }
  inline Project& operator=(Project&& from) noexcept {
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

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Project& default_instance() {
    return *internal_default_instance();
  }
  static inline const Project* internal_default_instance() {
    return reinterpret_cast<const Project*>(
               &_Project_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Project& a, Project& b) {
    a.Swap(&b);
  }
  inline void Swap(Project* other) {
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
  void UnsafeArenaSwap(Project* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Project* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Project>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Project& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Project& from) {
    Project::MergeImpl(*this, from);
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
  void InternalSwap(Project* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Project";
  }
  protected:
  explicit Project(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 2,
    kIdFieldNumber = 1,
    kUserIdFieldNumber = 3,
    kCurrentVersionFieldNumber = 4,
    kTotalVersionFieldNumber = 5,
    kModuloFactorFieldNumber = 6,
  };
  // string name = 2;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // int32 id = 1;
  void clear_id();
  int32_t id() const;
  void set_id(int32_t value);
  private:
  int32_t _internal_id() const;
  void _internal_set_id(int32_t value);
  public:

  // int32 userId = 3;
  void clear_userid();
  int32_t userid() const;
  void set_userid(int32_t value);
  private:
  int32_t _internal_userid() const;
  void _internal_set_userid(int32_t value);
  public:

  // int32 currentVersion = 4;
  void clear_currentversion();
  int32_t currentversion() const;
  void set_currentversion(int32_t value);
  private:
  int32_t _internal_currentversion() const;
  void _internal_set_currentversion(int32_t value);
  public:

  // int32 totalVersion = 5;
  void clear_totalversion();
  int32_t totalversion() const;
  void set_totalversion(int32_t value);
  private:
  int32_t _internal_totalversion() const;
  void _internal_set_totalversion(int32_t value);
  public:

  // int32 moduloFactor = 6;
  void clear_modulofactor();
  int32_t modulofactor() const;
  void set_modulofactor(int32_t value);
  private:
  int32_t _internal_modulofactor() const;
  void _internal_set_modulofactor(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:Project)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    int32_t id_;
    int32_t userid_;
    int32_t currentversion_;
    int32_t totalversion_;
    int32_t modulofactor_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_project_2eproto;
};
// -------------------------------------------------------------------

class projectPortal final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:projectPortal) */ {
 public:
  inline projectPortal() : projectPortal(nullptr) {}
  ~projectPortal() override;
  explicit PROTOBUF_CONSTEXPR projectPortal(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  projectPortal(const projectPortal& from);
  projectPortal(projectPortal&& from) noexcept
    : projectPortal() {
    *this = ::std::move(from);
  }

  inline projectPortal& operator=(const projectPortal& from) {
    CopyFrom(from);
    return *this;
  }
  inline projectPortal& operator=(projectPortal&& from) noexcept {
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

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const projectPortal& default_instance() {
    return *internal_default_instance();
  }
  static inline const projectPortal* internal_default_instance() {
    return reinterpret_cast<const projectPortal*>(
               &_projectPortal_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(projectPortal& a, projectPortal& b) {
    a.Swap(&b);
  }
  inline void Swap(projectPortal* other) {
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
  void UnsafeArenaSwap(projectPortal* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  projectPortal* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<projectPortal>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const projectPortal& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const projectPortal& from) {
    projectPortal::MergeImpl(*this, from);
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
  void InternalSwap(projectPortal* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "projectPortal";
  }
  protected:
  explicit projectPortal(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kProjectsFieldNumber = 1,
  };
  // repeated .Project projects = 1;
  int projects_size() const;
  private:
  int _internal_projects_size() const;
  public:
  void clear_projects();
  ::Project* mutable_projects(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Project >*
      mutable_projects();
  private:
  const ::Project& _internal_projects(int index) const;
  ::Project* _internal_add_projects();
  public:
  const ::Project& projects(int index) const;
  ::Project* add_projects();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Project >&
      projects() const;

  // @@protoc_insertion_point(class_scope:projectPortal)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Project > projects_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_project_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Project

// int32 id = 1;
inline void Project::clear_id() {
  _impl_.id_ = 0;
}
inline int32_t Project::_internal_id() const {
  return _impl_.id_;
}
inline int32_t Project::id() const {
  // @@protoc_insertion_point(field_get:Project.id)
  return _internal_id();
}
inline void Project::_internal_set_id(int32_t value) {
  
  _impl_.id_ = value;
}
inline void Project::set_id(int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:Project.id)
}

// string name = 2;
inline void Project::clear_name() {
  _impl_.name_.ClearToEmpty();
}
inline const std::string& Project::name() const {
  // @@protoc_insertion_point(field_get:Project.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Project::set_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Project.name)
}
inline std::string* Project::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:Project.name)
  return _s;
}
inline const std::string& Project::_internal_name() const {
  return _impl_.name_.Get();
}
inline void Project::_internal_set_name(const std::string& value) {
  
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* Project::_internal_mutable_name() {
  
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* Project::release_name() {
  // @@protoc_insertion_point(field_release:Project.name)
  return _impl_.name_.Release();
}
inline void Project::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Project.name)
}

// int32 userId = 3;
inline void Project::clear_userid() {
  _impl_.userid_ = 0;
}
inline int32_t Project::_internal_userid() const {
  return _impl_.userid_;
}
inline int32_t Project::userid() const {
  // @@protoc_insertion_point(field_get:Project.userId)
  return _internal_userid();
}
inline void Project::_internal_set_userid(int32_t value) {
  
  _impl_.userid_ = value;
}
inline void Project::set_userid(int32_t value) {
  _internal_set_userid(value);
  // @@protoc_insertion_point(field_set:Project.userId)
}

// int32 currentVersion = 4;
inline void Project::clear_currentversion() {
  _impl_.currentversion_ = 0;
}
inline int32_t Project::_internal_currentversion() const {
  return _impl_.currentversion_;
}
inline int32_t Project::currentversion() const {
  // @@protoc_insertion_point(field_get:Project.currentVersion)
  return _internal_currentversion();
}
inline void Project::_internal_set_currentversion(int32_t value) {
  
  _impl_.currentversion_ = value;
}
inline void Project::set_currentversion(int32_t value) {
  _internal_set_currentversion(value);
  // @@protoc_insertion_point(field_set:Project.currentVersion)
}

// int32 totalVersion = 5;
inline void Project::clear_totalversion() {
  _impl_.totalversion_ = 0;
}
inline int32_t Project::_internal_totalversion() const {
  return _impl_.totalversion_;
}
inline int32_t Project::totalversion() const {
  // @@protoc_insertion_point(field_get:Project.totalVersion)
  return _internal_totalversion();
}
inline void Project::_internal_set_totalversion(int32_t value) {
  
  _impl_.totalversion_ = value;
}
inline void Project::set_totalversion(int32_t value) {
  _internal_set_totalversion(value);
  // @@protoc_insertion_point(field_set:Project.totalVersion)
}

// int32 moduloFactor = 6;
inline void Project::clear_modulofactor() {
  _impl_.modulofactor_ = 0;
}
inline int32_t Project::_internal_modulofactor() const {
  return _impl_.modulofactor_;
}
inline int32_t Project::modulofactor() const {
  // @@protoc_insertion_point(field_get:Project.moduloFactor)
  return _internal_modulofactor();
}
inline void Project::_internal_set_modulofactor(int32_t value) {
  
  _impl_.modulofactor_ = value;
}
inline void Project::set_modulofactor(int32_t value) {
  _internal_set_modulofactor(value);
  // @@protoc_insertion_point(field_set:Project.moduloFactor)
}

// -------------------------------------------------------------------

// projectPortal

// repeated .Project projects = 1;
inline int projectPortal::_internal_projects_size() const {
  return _impl_.projects_.size();
}
inline int projectPortal::projects_size() const {
  return _internal_projects_size();
}
inline void projectPortal::clear_projects() {
  _impl_.projects_.Clear();
}
inline ::Project* projectPortal::mutable_projects(int index) {
  // @@protoc_insertion_point(field_mutable:projectPortal.projects)
  return _impl_.projects_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Project >*
projectPortal::mutable_projects() {
  // @@protoc_insertion_point(field_mutable_list:projectPortal.projects)
  return &_impl_.projects_;
}
inline const ::Project& projectPortal::_internal_projects(int index) const {
  return _impl_.projects_.Get(index);
}
inline const ::Project& projectPortal::projects(int index) const {
  // @@protoc_insertion_point(field_get:projectPortal.projects)
  return _internal_projects(index);
}
inline ::Project* projectPortal::_internal_add_projects() {
  return _impl_.projects_.Add();
}
inline ::Project* projectPortal::add_projects() {
  ::Project* _add = _internal_add_projects();
  // @@protoc_insertion_point(field_add:projectPortal.projects)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Project >&
projectPortal::projects() const {
  // @@protoc_insertion_point(field_list:projectPortal.projects)
  return _impl_.projects_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_project_2eproto
