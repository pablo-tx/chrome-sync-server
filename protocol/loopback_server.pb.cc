// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: loopback_server.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "loopback_server.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

void protobuf_ShutdownFile_loopback_5fserver_2eproto() {
  delete LoopbackServerEntity::default_instance_;
  delete LoopbackServerProto::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_loopback_5fserver_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_loopback_5fserver_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::sync_pb::protobuf_AddDesc_sync_2eproto();
  LoopbackServerEntity::default_instance_ = new LoopbackServerEntity();
  LoopbackServerProto::default_instance_ = new LoopbackServerProto();
  LoopbackServerEntity::default_instance_->InitAsDefaultInstance();
  LoopbackServerProto::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_loopback_5fserver_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_loopback_5fserver_2eproto_once_);
void protobuf_AddDesc_loopback_5fserver_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_loopback_5fserver_2eproto_once_,
                 &protobuf_AddDesc_loopback_5fserver_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_loopback_5fserver_2eproto {
  StaticDescriptorInitializer_loopback_5fserver_2eproto() {
    protobuf_AddDesc_loopback_5fserver_2eproto();
  }
} static_descriptor_initializer_loopback_5fserver_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
GOOGLE_ATTRIBUTE_NOINLINE static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

static ::std::string* MutableUnknownFieldsForLoopbackServerEntity(
    LoopbackServerEntity* ptr) {
  return ptr->mutable_unknown_fields();
}

bool LoopbackServerEntity_Type_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const LoopbackServerEntity_Type LoopbackServerEntity::UNKNOWN;
const LoopbackServerEntity_Type LoopbackServerEntity::BOOKMARK;
const LoopbackServerEntity_Type LoopbackServerEntity::PERMANENT;
const LoopbackServerEntity_Type LoopbackServerEntity::TOMBSTONE;
const LoopbackServerEntity_Type LoopbackServerEntity::UNIQUE;
const LoopbackServerEntity_Type LoopbackServerEntity::Type_MIN;
const LoopbackServerEntity_Type LoopbackServerEntity::Type_MAX;
const int LoopbackServerEntity::Type_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LoopbackServerEntity::kTypeFieldNumber;
const int LoopbackServerEntity::kEntityFieldNumber;
const int LoopbackServerEntity::kModelTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LoopbackServerEntity::LoopbackServerEntity()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:sync_pb.LoopbackServerEntity)
}

void LoopbackServerEntity::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  entity_ = const_cast< ::sync_pb::SyncEntity*>(
      ::sync_pb::SyncEntity::internal_default_instance());
#else
  entity_ = const_cast< ::sync_pb::SyncEntity*>(&::sync_pb::SyncEntity::default_instance());
#endif
}

LoopbackServerEntity::LoopbackServerEntity(const LoopbackServerEntity& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:sync_pb.LoopbackServerEntity)
}

void LoopbackServerEntity::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  type_ = 0;
  entity_ = NULL;
  model_type_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LoopbackServerEntity::~LoopbackServerEntity() {
  // @@protoc_insertion_point(destructor:sync_pb.LoopbackServerEntity)
  SharedDtor();
}

void LoopbackServerEntity::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete entity_;
  }
}

void LoopbackServerEntity::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const LoopbackServerEntity& LoopbackServerEntity::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_loopback_5fserver_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_loopback_5fserver_2eproto();
#endif
  return *default_instance_;
}

LoopbackServerEntity* LoopbackServerEntity::default_instance_ = NULL;

LoopbackServerEntity* LoopbackServerEntity::New(::google::protobuf::Arena* arena) const {
  LoopbackServerEntity* n = new LoopbackServerEntity;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LoopbackServerEntity::Clear() {
// @@protoc_insertion_point(message_clear_start:sync_pb.LoopbackServerEntity)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(LoopbackServerEntity, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<LoopbackServerEntity*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 7u) {
    ZR_(model_type_, type_);
    if (has_entity()) {
      if (entity_ != NULL) entity_->::sync_pb::SyncEntity::Clear();
    }
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LoopbackServerEntity::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForLoopbackServerEntity, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:sync_pb.LoopbackServerEntity)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .sync_pb.LoopbackServerEntity.Type type = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::sync_pb::LoopbackServerEntity_Type_IsValid(value)) {
            set_type(static_cast< ::sync_pb::LoopbackServerEntity_Type >(value));
          } else {
            unknown_fields_stream.WriteVarint32(8);
            unknown_fields_stream.WriteVarint32(value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_entity;
        break;
      }

      // optional .sync_pb.SyncEntity entity = 2;
      case 2: {
        if (tag == 18) {
         parse_entity:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_entity()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_model_type;
        break;
      }

      // optional int64 model_type = 3;
      case 3: {
        if (tag == 24) {
         parse_model_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &model_type_)));
          set_has_model_type();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sync_pb.LoopbackServerEntity)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sync_pb.LoopbackServerEntity)
  return false;
#undef DO_
}

void LoopbackServerEntity::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sync_pb.LoopbackServerEntity)
  // optional .sync_pb.LoopbackServerEntity.Type type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // optional .sync_pb.SyncEntity entity = 2;
  if (has_entity()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, *this->entity_, output);
  }

  // optional int64 model_type = 3;
  if (has_model_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->model_type(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:sync_pb.LoopbackServerEntity)
}

int LoopbackServerEntity::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:sync_pb.LoopbackServerEntity)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 7u) {
    // optional .sync_pb.LoopbackServerEntity.Type type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional .sync_pb.SyncEntity entity = 2;
    if (has_entity()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->entity_);
    }

    // optional int64 model_type = 3;
    if (has_model_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->model_type());
    }

  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LoopbackServerEntity::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const LoopbackServerEntity*>(&from));
}

void LoopbackServerEntity::MergeFrom(const LoopbackServerEntity& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sync_pb.LoopbackServerEntity)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_entity()) {
      mutable_entity()->::sync_pb::SyncEntity::MergeFrom(from.entity());
    }
    if (from.has_model_type()) {
      set_model_type(from.model_type());
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void LoopbackServerEntity::CopyFrom(const LoopbackServerEntity& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sync_pb.LoopbackServerEntity)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoopbackServerEntity::IsInitialized() const {

  if (has_entity()) {
    if (!this->entity_->IsInitialized()) return false;
  }
  return true;
}

void LoopbackServerEntity::Swap(LoopbackServerEntity* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LoopbackServerEntity::InternalSwap(LoopbackServerEntity* other) {
  std::swap(type_, other->type_);
  std::swap(entity_, other->entity_);
  std::swap(model_type_, other->model_type_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string LoopbackServerEntity::GetTypeName() const {
  return "sync_pb.LoopbackServerEntity";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LoopbackServerEntity

// optional .sync_pb.LoopbackServerEntity.Type type = 1;
bool LoopbackServerEntity::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void LoopbackServerEntity::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
void LoopbackServerEntity::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
void LoopbackServerEntity::clear_type() {
  type_ = 0;
  clear_has_type();
}
 ::sync_pb::LoopbackServerEntity_Type LoopbackServerEntity::type() const {
  // @@protoc_insertion_point(field_get:sync_pb.LoopbackServerEntity.type)
  return static_cast< ::sync_pb::LoopbackServerEntity_Type >(type_);
}
 void LoopbackServerEntity::set_type(::sync_pb::LoopbackServerEntity_Type value) {
  assert(::sync_pb::LoopbackServerEntity_Type_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.LoopbackServerEntity.type)
}

// optional .sync_pb.SyncEntity entity = 2;
bool LoopbackServerEntity::has_entity() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void LoopbackServerEntity::set_has_entity() {
  _has_bits_[0] |= 0x00000002u;
}
void LoopbackServerEntity::clear_has_entity() {
  _has_bits_[0] &= ~0x00000002u;
}
void LoopbackServerEntity::clear_entity() {
  if (entity_ != NULL) entity_->::sync_pb::SyncEntity::Clear();
  clear_has_entity();
}
const ::sync_pb::SyncEntity& LoopbackServerEntity::entity() const {
  // @@protoc_insertion_point(field_get:sync_pb.LoopbackServerEntity.entity)
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return entity_ != NULL ? *entity_ : *default_instance().entity_;
#else
  return entity_ != NULL ? *entity_ : *default_instance_->entity_;
#endif
}
::sync_pb::SyncEntity* LoopbackServerEntity::mutable_entity() {
  set_has_entity();
  if (entity_ == NULL) {
    entity_ = new ::sync_pb::SyncEntity;
  }
  // @@protoc_insertion_point(field_mutable:sync_pb.LoopbackServerEntity.entity)
  return entity_;
}
::sync_pb::SyncEntity* LoopbackServerEntity::release_entity() {
  // @@protoc_insertion_point(field_release:sync_pb.LoopbackServerEntity.entity)
  clear_has_entity();
  ::sync_pb::SyncEntity* temp = entity_;
  entity_ = NULL;
  return temp;
}
void LoopbackServerEntity::set_allocated_entity(::sync_pb::SyncEntity* entity) {
  delete entity_;
  entity_ = entity;
  if (entity) {
    set_has_entity();
  } else {
    clear_has_entity();
  }
  // @@protoc_insertion_point(field_set_allocated:sync_pb.LoopbackServerEntity.entity)
}

// optional int64 model_type = 3;
bool LoopbackServerEntity::has_model_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void LoopbackServerEntity::set_has_model_type() {
  _has_bits_[0] |= 0x00000004u;
}
void LoopbackServerEntity::clear_has_model_type() {
  _has_bits_[0] &= ~0x00000004u;
}
void LoopbackServerEntity::clear_model_type() {
  model_type_ = GOOGLE_LONGLONG(0);
  clear_has_model_type();
}
 ::google::protobuf::int64 LoopbackServerEntity::model_type() const {
  // @@protoc_insertion_point(field_get:sync_pb.LoopbackServerEntity.model_type)
  return model_type_;
}
 void LoopbackServerEntity::set_model_type(::google::protobuf::int64 value) {
  set_has_model_type();
  model_type_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.LoopbackServerEntity.model_type)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

static ::std::string* MutableUnknownFieldsForLoopbackServerProto(
    LoopbackServerProto* ptr) {
  return ptr->mutable_unknown_fields();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LoopbackServerProto::kVersionFieldNumber;
const int LoopbackServerProto::kStoreBirthdayFieldNumber;
const int LoopbackServerProto::kEntitiesFieldNumber;
const int LoopbackServerProto::kKeystoreKeysFieldNumber;
const int LoopbackServerProto::kLastVersionAssignedFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LoopbackServerProto::LoopbackServerProto()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:sync_pb.LoopbackServerProto)
}

void LoopbackServerProto::InitAsDefaultInstance() {
}

LoopbackServerProto::LoopbackServerProto(const LoopbackServerProto& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:sync_pb.LoopbackServerProto)
}

void LoopbackServerProto::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_ = GOOGLE_LONGLONG(0);
  store_birthday_ = GOOGLE_LONGLONG(0);
  last_version_assigned_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LoopbackServerProto::~LoopbackServerProto() {
  // @@protoc_insertion_point(destructor:sync_pb.LoopbackServerProto)
  SharedDtor();
}

void LoopbackServerProto::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void LoopbackServerProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const LoopbackServerProto& LoopbackServerProto::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_loopback_5fserver_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_loopback_5fserver_2eproto();
#endif
  return *default_instance_;
}

LoopbackServerProto* LoopbackServerProto::default_instance_ = NULL;

LoopbackServerProto* LoopbackServerProto::New(::google::protobuf::Arena* arena) const {
  LoopbackServerProto* n = new LoopbackServerProto;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LoopbackServerProto::Clear() {
// @@protoc_insertion_point(message_clear_start:sync_pb.LoopbackServerProto)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(LoopbackServerProto, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<LoopbackServerProto*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 19u) {
    ZR_(version_, store_birthday_);
    last_version_assigned_ = GOOGLE_LONGLONG(0);
  }

#undef ZR_HELPER_
#undef ZR_

  entities_.Clear();
  keystore_keys_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LoopbackServerProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForLoopbackServerProto, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:sync_pb.LoopbackServerProto)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 version = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &version_)));
          set_has_version();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_store_birthday;
        break;
      }

      // optional int64 store_birthday = 2;
      case 2: {
        if (tag == 16) {
         parse_store_birthday:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &store_birthday_)));
          set_has_store_birthday();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_entities;
        break;
      }

      // repeated .sync_pb.LoopbackServerEntity entities = 3;
      case 3: {
        if (tag == 26) {
         parse_entities:
          DO_(input->IncrementRecursionDepth());
         parse_loop_entities:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_entities()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_loop_entities;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(34)) goto parse_keystore_keys;
        break;
      }

      // repeated string keystore_keys = 4;
      case 4: {
        if (tag == 34) {
         parse_keystore_keys:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_keystore_keys()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_keystore_keys;
        if (input->ExpectTag(40)) goto parse_last_version_assigned;
        break;
      }

      // optional int64 last_version_assigned = 5;
      case 5: {
        if (tag == 40) {
         parse_last_version_assigned:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &last_version_assigned_)));
          set_has_last_version_assigned();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sync_pb.LoopbackServerProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sync_pb.LoopbackServerProto)
  return false;
#undef DO_
}

void LoopbackServerProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sync_pb.LoopbackServerProto)
  // optional int64 version = 1;
  if (has_version()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->version(), output);
  }

  // optional int64 store_birthday = 2;
  if (has_store_birthday()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->store_birthday(), output);
  }

  // repeated .sync_pb.LoopbackServerEntity entities = 3;
  for (unsigned int i = 0, n = this->entities_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->entities(i), output);
  }

  // repeated string keystore_keys = 4;
  for (int i = 0; i < this->keystore_keys_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->keystore_keys(i), output);
  }

  // optional int64 last_version_assigned = 5;
  if (has_last_version_assigned()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->last_version_assigned(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:sync_pb.LoopbackServerProto)
}

int LoopbackServerProto::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:sync_pb.LoopbackServerProto)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 19u) {
    // optional int64 version = 1;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->version());
    }

    // optional int64 store_birthday = 2;
    if (has_store_birthday()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->store_birthday());
    }

    // optional int64 last_version_assigned = 5;
    if (has_last_version_assigned()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->last_version_assigned());
    }

  }
  // repeated .sync_pb.LoopbackServerEntity entities = 3;
  total_size += 1 * this->entities_size();
  for (int i = 0; i < this->entities_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->entities(i));
  }

  // repeated string keystore_keys = 4;
  total_size += 1 * this->keystore_keys_size();
  for (int i = 0; i < this->keystore_keys_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->keystore_keys(i));
  }

  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LoopbackServerProto::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const LoopbackServerProto*>(&from));
}

void LoopbackServerProto::MergeFrom(const LoopbackServerProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sync_pb.LoopbackServerProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  entities_.MergeFrom(from.entities_);
  keystore_keys_.MergeFrom(from.keystore_keys_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_version()) {
      set_version(from.version());
    }
    if (from.has_store_birthday()) {
      set_store_birthday(from.store_birthday());
    }
    if (from.has_last_version_assigned()) {
      set_last_version_assigned(from.last_version_assigned());
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void LoopbackServerProto::CopyFrom(const LoopbackServerProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sync_pb.LoopbackServerProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoopbackServerProto::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->entities())) return false;
  return true;
}

void LoopbackServerProto::Swap(LoopbackServerProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LoopbackServerProto::InternalSwap(LoopbackServerProto* other) {
  std::swap(version_, other->version_);
  std::swap(store_birthday_, other->store_birthday_);
  entities_.UnsafeArenaSwap(&other->entities_);
  keystore_keys_.UnsafeArenaSwap(&other->keystore_keys_);
  std::swap(last_version_assigned_, other->last_version_assigned_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string LoopbackServerProto::GetTypeName() const {
  return "sync_pb.LoopbackServerProto";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LoopbackServerProto

// optional int64 version = 1;
bool LoopbackServerProto::has_version() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void LoopbackServerProto::set_has_version() {
  _has_bits_[0] |= 0x00000001u;
}
void LoopbackServerProto::clear_has_version() {
  _has_bits_[0] &= ~0x00000001u;
}
void LoopbackServerProto::clear_version() {
  version_ = GOOGLE_LONGLONG(0);
  clear_has_version();
}
 ::google::protobuf::int64 LoopbackServerProto::version() const {
  // @@protoc_insertion_point(field_get:sync_pb.LoopbackServerProto.version)
  return version_;
}
 void LoopbackServerProto::set_version(::google::protobuf::int64 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.LoopbackServerProto.version)
}

// optional int64 store_birthday = 2;
bool LoopbackServerProto::has_store_birthday() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void LoopbackServerProto::set_has_store_birthday() {
  _has_bits_[0] |= 0x00000002u;
}
void LoopbackServerProto::clear_has_store_birthday() {
  _has_bits_[0] &= ~0x00000002u;
}
void LoopbackServerProto::clear_store_birthday() {
  store_birthday_ = GOOGLE_LONGLONG(0);
  clear_has_store_birthday();
}
 ::google::protobuf::int64 LoopbackServerProto::store_birthday() const {
  // @@protoc_insertion_point(field_get:sync_pb.LoopbackServerProto.store_birthday)
  return store_birthday_;
}
 void LoopbackServerProto::set_store_birthday(::google::protobuf::int64 value) {
  set_has_store_birthday();
  store_birthday_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.LoopbackServerProto.store_birthday)
}

// repeated .sync_pb.LoopbackServerEntity entities = 3;
int LoopbackServerProto::entities_size() const {
  return entities_.size();
}
void LoopbackServerProto::clear_entities() {
  entities_.Clear();
}
const ::sync_pb::LoopbackServerEntity& LoopbackServerProto::entities(int index) const {
  // @@protoc_insertion_point(field_get:sync_pb.LoopbackServerProto.entities)
  return entities_.Get(index);
}
::sync_pb::LoopbackServerEntity* LoopbackServerProto::mutable_entities(int index) {
  // @@protoc_insertion_point(field_mutable:sync_pb.LoopbackServerProto.entities)
  return entities_.Mutable(index);
}
::sync_pb::LoopbackServerEntity* LoopbackServerProto::add_entities() {
  // @@protoc_insertion_point(field_add:sync_pb.LoopbackServerProto.entities)
  return entities_.Add();
}
::google::protobuf::RepeatedPtrField< ::sync_pb::LoopbackServerEntity >*
LoopbackServerProto::mutable_entities() {
  // @@protoc_insertion_point(field_mutable_list:sync_pb.LoopbackServerProto.entities)
  return &entities_;
}
const ::google::protobuf::RepeatedPtrField< ::sync_pb::LoopbackServerEntity >&
LoopbackServerProto::entities() const {
  // @@protoc_insertion_point(field_list:sync_pb.LoopbackServerProto.entities)
  return entities_;
}

// repeated string keystore_keys = 4;
int LoopbackServerProto::keystore_keys_size() const {
  return keystore_keys_.size();
}
void LoopbackServerProto::clear_keystore_keys() {
  keystore_keys_.Clear();
}
 const ::std::string& LoopbackServerProto::keystore_keys(int index) const {
  // @@protoc_insertion_point(field_get:sync_pb.LoopbackServerProto.keystore_keys)
  return keystore_keys_.Get(index);
}
 ::std::string* LoopbackServerProto::mutable_keystore_keys(int index) {
  // @@protoc_insertion_point(field_mutable:sync_pb.LoopbackServerProto.keystore_keys)
  return keystore_keys_.Mutable(index);
}
 void LoopbackServerProto::set_keystore_keys(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:sync_pb.LoopbackServerProto.keystore_keys)
  keystore_keys_.Mutable(index)->assign(value);
}
 void LoopbackServerProto::set_keystore_keys(int index, const char* value) {
  keystore_keys_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:sync_pb.LoopbackServerProto.keystore_keys)
}
 void LoopbackServerProto::set_keystore_keys(int index, const char* value, size_t size) {
  keystore_keys_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:sync_pb.LoopbackServerProto.keystore_keys)
}
 ::std::string* LoopbackServerProto::add_keystore_keys() {
  // @@protoc_insertion_point(field_add_mutable:sync_pb.LoopbackServerProto.keystore_keys)
  return keystore_keys_.Add();
}
 void LoopbackServerProto::add_keystore_keys(const ::std::string& value) {
  keystore_keys_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:sync_pb.LoopbackServerProto.keystore_keys)
}
 void LoopbackServerProto::add_keystore_keys(const char* value) {
  keystore_keys_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:sync_pb.LoopbackServerProto.keystore_keys)
}
 void LoopbackServerProto::add_keystore_keys(const char* value, size_t size) {
  keystore_keys_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:sync_pb.LoopbackServerProto.keystore_keys)
}
 const ::google::protobuf::RepeatedPtrField< ::std::string>&
LoopbackServerProto::keystore_keys() const {
  // @@protoc_insertion_point(field_list:sync_pb.LoopbackServerProto.keystore_keys)
  return keystore_keys_;
}
 ::google::protobuf::RepeatedPtrField< ::std::string>*
LoopbackServerProto::mutable_keystore_keys() {
  // @@protoc_insertion_point(field_mutable_list:sync_pb.LoopbackServerProto.keystore_keys)
  return &keystore_keys_;
}

// optional int64 last_version_assigned = 5;
bool LoopbackServerProto::has_last_version_assigned() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void LoopbackServerProto::set_has_last_version_assigned() {
  _has_bits_[0] |= 0x00000010u;
}
void LoopbackServerProto::clear_has_last_version_assigned() {
  _has_bits_[0] &= ~0x00000010u;
}
void LoopbackServerProto::clear_last_version_assigned() {
  last_version_assigned_ = GOOGLE_LONGLONG(0);
  clear_has_last_version_assigned();
}
 ::google::protobuf::int64 LoopbackServerProto::last_version_assigned() const {
  // @@protoc_insertion_point(field_get:sync_pb.LoopbackServerProto.last_version_assigned)
  return last_version_assigned_;
}
 void LoopbackServerProto::set_last_version_assigned(::google::protobuf::int64 value) {
  set_has_last_version_assigned();
  last_version_assigned_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.LoopbackServerProto.last_version_assigned)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)