// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ortools/packing/multiple_dimensions_bin_packing.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ortools_2fpacking_2fmultiple_5fdimensions_5fbin_5fpacking_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ortools_2fpacking_2fmultiple_5fdimensions_5fbin_5fpacking_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_ortools_2fpacking_2fmultiple_5fdimensions_5fbin_5fpacking_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ortools_2fpacking_2fmultiple_5fdimensions_5fbin_5fpacking_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ortools_2fpacking_2fmultiple_5fdimensions_5fbin_5fpacking_2eproto;
namespace operations_research {
namespace packing {
class MultipleDimensionsBinPackingItem;
struct MultipleDimensionsBinPackingItemDefaultTypeInternal;
extern MultipleDimensionsBinPackingItemDefaultTypeInternal _MultipleDimensionsBinPackingItem_default_instance_;
class MultipleDimensionsBinPackingProblem;
struct MultipleDimensionsBinPackingProblemDefaultTypeInternal;
extern MultipleDimensionsBinPackingProblemDefaultTypeInternal _MultipleDimensionsBinPackingProblem_default_instance_;
class MultipleDimensionsBinPackingShape;
struct MultipleDimensionsBinPackingShapeDefaultTypeInternal;
extern MultipleDimensionsBinPackingShapeDefaultTypeInternal _MultipleDimensionsBinPackingShape_default_instance_;
}  // namespace packing
}  // namespace operations_research
PROTOBUF_NAMESPACE_OPEN
template<> ::operations_research::packing::MultipleDimensionsBinPackingItem* Arena::CreateMaybeMessage<::operations_research::packing::MultipleDimensionsBinPackingItem>(Arena*);
template<> ::operations_research::packing::MultipleDimensionsBinPackingProblem* Arena::CreateMaybeMessage<::operations_research::packing::MultipleDimensionsBinPackingProblem>(Arena*);
template<> ::operations_research::packing::MultipleDimensionsBinPackingShape* Arena::CreateMaybeMessage<::operations_research::packing::MultipleDimensionsBinPackingShape>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace operations_research {
namespace packing {

// ===================================================================

class MultipleDimensionsBinPackingShape final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:operations_research.packing.MultipleDimensionsBinPackingShape) */ {
 public:
  inline MultipleDimensionsBinPackingShape() : MultipleDimensionsBinPackingShape(nullptr) {}
  ~MultipleDimensionsBinPackingShape() override;
  explicit PROTOBUF_CONSTEXPR MultipleDimensionsBinPackingShape(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MultipleDimensionsBinPackingShape(const MultipleDimensionsBinPackingShape& from);
  MultipleDimensionsBinPackingShape(MultipleDimensionsBinPackingShape&& from) noexcept
    : MultipleDimensionsBinPackingShape() {
    *this = ::std::move(from);
  }

  inline MultipleDimensionsBinPackingShape& operator=(const MultipleDimensionsBinPackingShape& from) {
    CopyFrom(from);
    return *this;
  }
  inline MultipleDimensionsBinPackingShape& operator=(MultipleDimensionsBinPackingShape&& from) noexcept {
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
  static const MultipleDimensionsBinPackingShape& default_instance() {
    return *internal_default_instance();
  }
  static inline const MultipleDimensionsBinPackingShape* internal_default_instance() {
    return reinterpret_cast<const MultipleDimensionsBinPackingShape*>(
               &_MultipleDimensionsBinPackingShape_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MultipleDimensionsBinPackingShape& a, MultipleDimensionsBinPackingShape& b) {
    a.Swap(&b);
  }
  inline void Swap(MultipleDimensionsBinPackingShape* other) {
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
  void UnsafeArenaSwap(MultipleDimensionsBinPackingShape* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MultipleDimensionsBinPackingShape* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MultipleDimensionsBinPackingShape>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MultipleDimensionsBinPackingShape& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const MultipleDimensionsBinPackingShape& from) {
    MultipleDimensionsBinPackingShape::MergeImpl(*this, from);
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
  void InternalSwap(MultipleDimensionsBinPackingShape* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "operations_research.packing.MultipleDimensionsBinPackingShape";
  }
  protected:
  explicit MultipleDimensionsBinPackingShape(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDimensionsFieldNumber = 1,
  };
  // repeated int64 dimensions = 1;
  int dimensions_size() const;
  private:
  int _internal_dimensions_size() const;
  public:
  void clear_dimensions();
  private:
  int64_t _internal_dimensions(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
      _internal_dimensions() const;
  void _internal_add_dimensions(int64_t value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
      _internal_mutable_dimensions();
  public:
  int64_t dimensions(int index) const;
  void set_dimensions(int index, int64_t value);
  void add_dimensions(int64_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
      dimensions() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
      mutable_dimensions();

  // @@protoc_insertion_point(class_scope:operations_research.packing.MultipleDimensionsBinPackingShape)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t > dimensions_;
    mutable std::atomic<int> _dimensions_cached_byte_size_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ortools_2fpacking_2fmultiple_5fdimensions_5fbin_5fpacking_2eproto;
};
// -------------------------------------------------------------------

class MultipleDimensionsBinPackingItem final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:operations_research.packing.MultipleDimensionsBinPackingItem) */ {
 public:
  inline MultipleDimensionsBinPackingItem() : MultipleDimensionsBinPackingItem(nullptr) {}
  ~MultipleDimensionsBinPackingItem() override;
  explicit PROTOBUF_CONSTEXPR MultipleDimensionsBinPackingItem(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MultipleDimensionsBinPackingItem(const MultipleDimensionsBinPackingItem& from);
  MultipleDimensionsBinPackingItem(MultipleDimensionsBinPackingItem&& from) noexcept
    : MultipleDimensionsBinPackingItem() {
    *this = ::std::move(from);
  }

  inline MultipleDimensionsBinPackingItem& operator=(const MultipleDimensionsBinPackingItem& from) {
    CopyFrom(from);
    return *this;
  }
  inline MultipleDimensionsBinPackingItem& operator=(MultipleDimensionsBinPackingItem&& from) noexcept {
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
  static const MultipleDimensionsBinPackingItem& default_instance() {
    return *internal_default_instance();
  }
  static inline const MultipleDimensionsBinPackingItem* internal_default_instance() {
    return reinterpret_cast<const MultipleDimensionsBinPackingItem*>(
               &_MultipleDimensionsBinPackingItem_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(MultipleDimensionsBinPackingItem& a, MultipleDimensionsBinPackingItem& b) {
    a.Swap(&b);
  }
  inline void Swap(MultipleDimensionsBinPackingItem* other) {
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
  void UnsafeArenaSwap(MultipleDimensionsBinPackingItem* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MultipleDimensionsBinPackingItem* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MultipleDimensionsBinPackingItem>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MultipleDimensionsBinPackingItem& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const MultipleDimensionsBinPackingItem& from) {
    MultipleDimensionsBinPackingItem::MergeImpl(*this, from);
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
  void InternalSwap(MultipleDimensionsBinPackingItem* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "operations_research.packing.MultipleDimensionsBinPackingItem";
  }
  protected:
  explicit MultipleDimensionsBinPackingItem(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kShapesFieldNumber = 1,
    kValueFieldNumber = 2,
  };
  // repeated .operations_research.packing.MultipleDimensionsBinPackingShape shapes = 1;
  int shapes_size() const;
  private:
  int _internal_shapes_size() const;
  public:
  void clear_shapes();
  ::operations_research::packing::MultipleDimensionsBinPackingShape* mutable_shapes(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::operations_research::packing::MultipleDimensionsBinPackingShape >*
      mutable_shapes();
  private:
  const ::operations_research::packing::MultipleDimensionsBinPackingShape& _internal_shapes(int index) const;
  ::operations_research::packing::MultipleDimensionsBinPackingShape* _internal_add_shapes();
  public:
  const ::operations_research::packing::MultipleDimensionsBinPackingShape& shapes(int index) const;
  ::operations_research::packing::MultipleDimensionsBinPackingShape* add_shapes();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::operations_research::packing::MultipleDimensionsBinPackingShape >&
      shapes() const;

  // int64 value = 2;
  void clear_value();
  int64_t value() const;
  void set_value(int64_t value);
  private:
  int64_t _internal_value() const;
  void _internal_set_value(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:operations_research.packing.MultipleDimensionsBinPackingItem)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::operations_research::packing::MultipleDimensionsBinPackingShape > shapes_;
    int64_t value_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ortools_2fpacking_2fmultiple_5fdimensions_5fbin_5fpacking_2eproto;
};
// -------------------------------------------------------------------

class MultipleDimensionsBinPackingProblem final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:operations_research.packing.MultipleDimensionsBinPackingProblem) */ {
 public:
  inline MultipleDimensionsBinPackingProblem() : MultipleDimensionsBinPackingProblem(nullptr) {}
  ~MultipleDimensionsBinPackingProblem() override;
  explicit PROTOBUF_CONSTEXPR MultipleDimensionsBinPackingProblem(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MultipleDimensionsBinPackingProblem(const MultipleDimensionsBinPackingProblem& from);
  MultipleDimensionsBinPackingProblem(MultipleDimensionsBinPackingProblem&& from) noexcept
    : MultipleDimensionsBinPackingProblem() {
    *this = ::std::move(from);
  }

  inline MultipleDimensionsBinPackingProblem& operator=(const MultipleDimensionsBinPackingProblem& from) {
    CopyFrom(from);
    return *this;
  }
  inline MultipleDimensionsBinPackingProblem& operator=(MultipleDimensionsBinPackingProblem&& from) noexcept {
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
  static const MultipleDimensionsBinPackingProblem& default_instance() {
    return *internal_default_instance();
  }
  static inline const MultipleDimensionsBinPackingProblem* internal_default_instance() {
    return reinterpret_cast<const MultipleDimensionsBinPackingProblem*>(
               &_MultipleDimensionsBinPackingProblem_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(MultipleDimensionsBinPackingProblem& a, MultipleDimensionsBinPackingProblem& b) {
    a.Swap(&b);
  }
  inline void Swap(MultipleDimensionsBinPackingProblem* other) {
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
  void UnsafeArenaSwap(MultipleDimensionsBinPackingProblem* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MultipleDimensionsBinPackingProblem* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MultipleDimensionsBinPackingProblem>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MultipleDimensionsBinPackingProblem& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const MultipleDimensionsBinPackingProblem& from) {
    MultipleDimensionsBinPackingProblem::MergeImpl(*this, from);
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
  void InternalSwap(MultipleDimensionsBinPackingProblem* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "operations_research.packing.MultipleDimensionsBinPackingProblem";
  }
  protected:
  explicit MultipleDimensionsBinPackingProblem(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kItemsFieldNumber = 2,
    kBoxShapeFieldNumber = 1,
  };
  // repeated .operations_research.packing.MultipleDimensionsBinPackingItem items = 2;
  int items_size() const;
  private:
  int _internal_items_size() const;
  public:
  void clear_items();
  ::operations_research::packing::MultipleDimensionsBinPackingItem* mutable_items(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::operations_research::packing::MultipleDimensionsBinPackingItem >*
      mutable_items();
  private:
  const ::operations_research::packing::MultipleDimensionsBinPackingItem& _internal_items(int index) const;
  ::operations_research::packing::MultipleDimensionsBinPackingItem* _internal_add_items();
  public:
  const ::operations_research::packing::MultipleDimensionsBinPackingItem& items(int index) const;
  ::operations_research::packing::MultipleDimensionsBinPackingItem* add_items();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::operations_research::packing::MultipleDimensionsBinPackingItem >&
      items() const;

  // .operations_research.packing.MultipleDimensionsBinPackingShape box_shape = 1;
  bool has_box_shape() const;
  private:
  bool _internal_has_box_shape() const;
  public:
  void clear_box_shape();
  const ::operations_research::packing::MultipleDimensionsBinPackingShape& box_shape() const;
  PROTOBUF_NODISCARD ::operations_research::packing::MultipleDimensionsBinPackingShape* release_box_shape();
  ::operations_research::packing::MultipleDimensionsBinPackingShape* mutable_box_shape();
  void set_allocated_box_shape(::operations_research::packing::MultipleDimensionsBinPackingShape* box_shape);
  private:
  const ::operations_research::packing::MultipleDimensionsBinPackingShape& _internal_box_shape() const;
  ::operations_research::packing::MultipleDimensionsBinPackingShape* _internal_mutable_box_shape();
  public:
  void unsafe_arena_set_allocated_box_shape(
      ::operations_research::packing::MultipleDimensionsBinPackingShape* box_shape);
  ::operations_research::packing::MultipleDimensionsBinPackingShape* unsafe_arena_release_box_shape();

  // @@protoc_insertion_point(class_scope:operations_research.packing.MultipleDimensionsBinPackingProblem)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::operations_research::packing::MultipleDimensionsBinPackingItem > items_;
    ::operations_research::packing::MultipleDimensionsBinPackingShape* box_shape_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ortools_2fpacking_2fmultiple_5fdimensions_5fbin_5fpacking_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MultipleDimensionsBinPackingShape

// repeated int64 dimensions = 1;
inline int MultipleDimensionsBinPackingShape::_internal_dimensions_size() const {
  return _impl_.dimensions_.size();
}
inline int MultipleDimensionsBinPackingShape::dimensions_size() const {
  return _internal_dimensions_size();
}
inline void MultipleDimensionsBinPackingShape::clear_dimensions() {
  _impl_.dimensions_.Clear();
}
inline int64_t MultipleDimensionsBinPackingShape::_internal_dimensions(int index) const {
  return _impl_.dimensions_.Get(index);
}
inline int64_t MultipleDimensionsBinPackingShape::dimensions(int index) const {
  // @@protoc_insertion_point(field_get:operations_research.packing.MultipleDimensionsBinPackingShape.dimensions)
  return _internal_dimensions(index);
}
inline void MultipleDimensionsBinPackingShape::set_dimensions(int index, int64_t value) {
  _impl_.dimensions_.Set(index, value);
  // @@protoc_insertion_point(field_set:operations_research.packing.MultipleDimensionsBinPackingShape.dimensions)
}
inline void MultipleDimensionsBinPackingShape::_internal_add_dimensions(int64_t value) {
  _impl_.dimensions_.Add(value);
}
inline void MultipleDimensionsBinPackingShape::add_dimensions(int64_t value) {
  _internal_add_dimensions(value);
  // @@protoc_insertion_point(field_add:operations_research.packing.MultipleDimensionsBinPackingShape.dimensions)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
MultipleDimensionsBinPackingShape::_internal_dimensions() const {
  return _impl_.dimensions_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
MultipleDimensionsBinPackingShape::dimensions() const {
  // @@protoc_insertion_point(field_list:operations_research.packing.MultipleDimensionsBinPackingShape.dimensions)
  return _internal_dimensions();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
MultipleDimensionsBinPackingShape::_internal_mutable_dimensions() {
  return &_impl_.dimensions_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
MultipleDimensionsBinPackingShape::mutable_dimensions() {
  // @@protoc_insertion_point(field_mutable_list:operations_research.packing.MultipleDimensionsBinPackingShape.dimensions)
  return _internal_mutable_dimensions();
}

// -------------------------------------------------------------------

// MultipleDimensionsBinPackingItem

// repeated .operations_research.packing.MultipleDimensionsBinPackingShape shapes = 1;
inline int MultipleDimensionsBinPackingItem::_internal_shapes_size() const {
  return _impl_.shapes_.size();
}
inline int MultipleDimensionsBinPackingItem::shapes_size() const {
  return _internal_shapes_size();
}
inline void MultipleDimensionsBinPackingItem::clear_shapes() {
  _impl_.shapes_.Clear();
}
inline ::operations_research::packing::MultipleDimensionsBinPackingShape* MultipleDimensionsBinPackingItem::mutable_shapes(int index) {
  // @@protoc_insertion_point(field_mutable:operations_research.packing.MultipleDimensionsBinPackingItem.shapes)
  return _impl_.shapes_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::operations_research::packing::MultipleDimensionsBinPackingShape >*
MultipleDimensionsBinPackingItem::mutable_shapes() {
  // @@protoc_insertion_point(field_mutable_list:operations_research.packing.MultipleDimensionsBinPackingItem.shapes)
  return &_impl_.shapes_;
}
inline const ::operations_research::packing::MultipleDimensionsBinPackingShape& MultipleDimensionsBinPackingItem::_internal_shapes(int index) const {
  return _impl_.shapes_.Get(index);
}
inline const ::operations_research::packing::MultipleDimensionsBinPackingShape& MultipleDimensionsBinPackingItem::shapes(int index) const {
  // @@protoc_insertion_point(field_get:operations_research.packing.MultipleDimensionsBinPackingItem.shapes)
  return _internal_shapes(index);
}
inline ::operations_research::packing::MultipleDimensionsBinPackingShape* MultipleDimensionsBinPackingItem::_internal_add_shapes() {
  return _impl_.shapes_.Add();
}
inline ::operations_research::packing::MultipleDimensionsBinPackingShape* MultipleDimensionsBinPackingItem::add_shapes() {
  ::operations_research::packing::MultipleDimensionsBinPackingShape* _add = _internal_add_shapes();
  // @@protoc_insertion_point(field_add:operations_research.packing.MultipleDimensionsBinPackingItem.shapes)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::operations_research::packing::MultipleDimensionsBinPackingShape >&
MultipleDimensionsBinPackingItem::shapes() const {
  // @@protoc_insertion_point(field_list:operations_research.packing.MultipleDimensionsBinPackingItem.shapes)
  return _impl_.shapes_;
}

// int64 value = 2;
inline void MultipleDimensionsBinPackingItem::clear_value() {
  _impl_.value_ = int64_t{0};
}
inline int64_t MultipleDimensionsBinPackingItem::_internal_value() const {
  return _impl_.value_;
}
inline int64_t MultipleDimensionsBinPackingItem::value() const {
  // @@protoc_insertion_point(field_get:operations_research.packing.MultipleDimensionsBinPackingItem.value)
  return _internal_value();
}
inline void MultipleDimensionsBinPackingItem::_internal_set_value(int64_t value) {
  
  _impl_.value_ = value;
}
inline void MultipleDimensionsBinPackingItem::set_value(int64_t value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:operations_research.packing.MultipleDimensionsBinPackingItem.value)
}

// -------------------------------------------------------------------

// MultipleDimensionsBinPackingProblem

// .operations_research.packing.MultipleDimensionsBinPackingShape box_shape = 1;
inline bool MultipleDimensionsBinPackingProblem::_internal_has_box_shape() const {
  return this != internal_default_instance() && _impl_.box_shape_ != nullptr;
}
inline bool MultipleDimensionsBinPackingProblem::has_box_shape() const {
  return _internal_has_box_shape();
}
inline void MultipleDimensionsBinPackingProblem::clear_box_shape() {
  if (GetArenaForAllocation() == nullptr && _impl_.box_shape_ != nullptr) {
    delete _impl_.box_shape_;
  }
  _impl_.box_shape_ = nullptr;
}
inline const ::operations_research::packing::MultipleDimensionsBinPackingShape& MultipleDimensionsBinPackingProblem::_internal_box_shape() const {
  const ::operations_research::packing::MultipleDimensionsBinPackingShape* p = _impl_.box_shape_;
  return p != nullptr ? *p : reinterpret_cast<const ::operations_research::packing::MultipleDimensionsBinPackingShape&>(
      ::operations_research::packing::_MultipleDimensionsBinPackingShape_default_instance_);
}
inline const ::operations_research::packing::MultipleDimensionsBinPackingShape& MultipleDimensionsBinPackingProblem::box_shape() const {
  // @@protoc_insertion_point(field_get:operations_research.packing.MultipleDimensionsBinPackingProblem.box_shape)
  return _internal_box_shape();
}
inline void MultipleDimensionsBinPackingProblem::unsafe_arena_set_allocated_box_shape(
    ::operations_research::packing::MultipleDimensionsBinPackingShape* box_shape) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.box_shape_);
  }
  _impl_.box_shape_ = box_shape;
  if (box_shape) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:operations_research.packing.MultipleDimensionsBinPackingProblem.box_shape)
}
inline ::operations_research::packing::MultipleDimensionsBinPackingShape* MultipleDimensionsBinPackingProblem::release_box_shape() {
  
  ::operations_research::packing::MultipleDimensionsBinPackingShape* temp = _impl_.box_shape_;
  _impl_.box_shape_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::operations_research::packing::MultipleDimensionsBinPackingShape* MultipleDimensionsBinPackingProblem::unsafe_arena_release_box_shape() {
  // @@protoc_insertion_point(field_release:operations_research.packing.MultipleDimensionsBinPackingProblem.box_shape)
  
  ::operations_research::packing::MultipleDimensionsBinPackingShape* temp = _impl_.box_shape_;
  _impl_.box_shape_ = nullptr;
  return temp;
}
inline ::operations_research::packing::MultipleDimensionsBinPackingShape* MultipleDimensionsBinPackingProblem::_internal_mutable_box_shape() {
  
  if (_impl_.box_shape_ == nullptr) {
    auto* p = CreateMaybeMessage<::operations_research::packing::MultipleDimensionsBinPackingShape>(GetArenaForAllocation());
    _impl_.box_shape_ = p;
  }
  return _impl_.box_shape_;
}
inline ::operations_research::packing::MultipleDimensionsBinPackingShape* MultipleDimensionsBinPackingProblem::mutable_box_shape() {
  ::operations_research::packing::MultipleDimensionsBinPackingShape* _msg = _internal_mutable_box_shape();
  // @@protoc_insertion_point(field_mutable:operations_research.packing.MultipleDimensionsBinPackingProblem.box_shape)
  return _msg;
}
inline void MultipleDimensionsBinPackingProblem::set_allocated_box_shape(::operations_research::packing::MultipleDimensionsBinPackingShape* box_shape) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete _impl_.box_shape_;
  }
  if (box_shape) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(box_shape);
    if (message_arena != submessage_arena) {
      box_shape = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, box_shape, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.box_shape_ = box_shape;
  // @@protoc_insertion_point(field_set_allocated:operations_research.packing.MultipleDimensionsBinPackingProblem.box_shape)
}

// repeated .operations_research.packing.MultipleDimensionsBinPackingItem items = 2;
inline int MultipleDimensionsBinPackingProblem::_internal_items_size() const {
  return _impl_.items_.size();
}
inline int MultipleDimensionsBinPackingProblem::items_size() const {
  return _internal_items_size();
}
inline void MultipleDimensionsBinPackingProblem::clear_items() {
  _impl_.items_.Clear();
}
inline ::operations_research::packing::MultipleDimensionsBinPackingItem* MultipleDimensionsBinPackingProblem::mutable_items(int index) {
  // @@protoc_insertion_point(field_mutable:operations_research.packing.MultipleDimensionsBinPackingProblem.items)
  return _impl_.items_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::operations_research::packing::MultipleDimensionsBinPackingItem >*
MultipleDimensionsBinPackingProblem::mutable_items() {
  // @@protoc_insertion_point(field_mutable_list:operations_research.packing.MultipleDimensionsBinPackingProblem.items)
  return &_impl_.items_;
}
inline const ::operations_research::packing::MultipleDimensionsBinPackingItem& MultipleDimensionsBinPackingProblem::_internal_items(int index) const {
  return _impl_.items_.Get(index);
}
inline const ::operations_research::packing::MultipleDimensionsBinPackingItem& MultipleDimensionsBinPackingProblem::items(int index) const {
  // @@protoc_insertion_point(field_get:operations_research.packing.MultipleDimensionsBinPackingProblem.items)
  return _internal_items(index);
}
inline ::operations_research::packing::MultipleDimensionsBinPackingItem* MultipleDimensionsBinPackingProblem::_internal_add_items() {
  return _impl_.items_.Add();
}
inline ::operations_research::packing::MultipleDimensionsBinPackingItem* MultipleDimensionsBinPackingProblem::add_items() {
  ::operations_research::packing::MultipleDimensionsBinPackingItem* _add = _internal_add_items();
  // @@protoc_insertion_point(field_add:operations_research.packing.MultipleDimensionsBinPackingProblem.items)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::operations_research::packing::MultipleDimensionsBinPackingItem >&
MultipleDimensionsBinPackingProblem::items() const {
  // @@protoc_insertion_point(field_list:operations_research.packing.MultipleDimensionsBinPackingProblem.items)
  return _impl_.items_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace packing
}  // namespace operations_research

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ortools_2fpacking_2fmultiple_5fdimensions_5fbin_5fpacking_2eproto
