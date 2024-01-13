// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config.proto

#include "config.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = ::PROTOBUF_NAMESPACE_ID::internal;
namespace config_package {
template <typename>
PROTOBUF_CONSTEXPR Request::Request(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.network_config_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.traffic_config_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct RequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~RequestDefaultTypeInternal() {}
  union {
    Request _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RequestDefaultTypeInternal _Request_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR Response::Response(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.html_content_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ResponseDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ResponseDefaultTypeInternal() {}
  union {
    Response _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ResponseDefaultTypeInternal _Response_default_instance_;
}  // namespace config_package
static ::_pb::Metadata file_level_metadata_config_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_config_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_config_2eproto = nullptr;
const ::uint32_t TableStruct_config_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::config_package::Request, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::config_package::Request, _impl_.network_config_),
    PROTOBUF_FIELD_OFFSET(::config_package::Request, _impl_.traffic_config_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::config_package::Response, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::config_package::Response, _impl_.html_content_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::config_package::Request)},
        { 10, -1, -1, sizeof(::config_package::Response)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::config_package::_Request_default_instance_._instance,
    &::config_package::_Response_default_instance_._instance,
};
const char descriptor_table_protodef_config_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\014config.proto\022\016config_package\"9\n\007Reques"
    "t\022\026\n\016network_config\030\001 \001(\t\022\026\n\016traffic_con"
    "fig\030\002 \001(\t\" \n\010Response\022\024\n\014html_content\030\001 "
    "\001(\t2M\n\006config\022C\n\016process_config\022\027.config"
    "_package.Request\032\030.config_package.Respon"
    "seb\006proto3"
};
static ::absl::once_flag descriptor_table_config_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_config_2eproto = {
    false,
    false,
    210,
    descriptor_table_protodef_config_2eproto,
    "config.proto",
    &descriptor_table_config_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_config_2eproto::offsets,
    file_level_metadata_config_2eproto,
    file_level_enum_descriptors_config_2eproto,
    file_level_service_descriptors_config_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_config_2eproto_getter() {
  return &descriptor_table_config_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_config_2eproto(&descriptor_table_config_2eproto);
namespace config_package {
// ===================================================================

class Request::_Internal {
 public:
};

Request::Request(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:config_package.Request)
}
Request::Request(const Request& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Request* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.network_config_) {}

    , decltype(_impl_.traffic_config_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.network_config_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.network_config_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_network_config().empty()) {
    _this->_impl_.network_config_.Set(from._internal_network_config(), _this->GetArenaForAllocation());
  }
  _impl_.traffic_config_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.traffic_config_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_traffic_config().empty()) {
    _this->_impl_.traffic_config_.Set(from._internal_traffic_config(), _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:config_package.Request)
}

inline void Request::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.network_config_) {}

    , decltype(_impl_.traffic_config_) {}

    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.network_config_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.network_config_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.traffic_config_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.traffic_config_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Request::~Request() {
  // @@protoc_insertion_point(destructor:config_package.Request)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Request::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.network_config_.Destroy();
  _impl_.traffic_config_.Destroy();
}

void Request::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Request::Clear() {
// @@protoc_insertion_point(message_clear_start:config_package.Request)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.network_config_.ClearToEmpty();
  _impl_.traffic_config_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Request::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string network_config = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_network_config();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "config_package.Request.network_config"));
        } else {
          goto handle_unusual;
        }
        continue;
      // string traffic_config = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_traffic_config();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "config_package.Request.traffic_config"));
        } else {
          goto handle_unusual;
        }
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

::uint8_t* Request::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:config_package.Request)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string network_config = 1;
  if (!this->_internal_network_config().empty()) {
    const std::string& _s = this->_internal_network_config();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "config_package.Request.network_config");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // string traffic_config = 2;
  if (!this->_internal_traffic_config().empty()) {
    const std::string& _s = this->_internal_traffic_config();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "config_package.Request.traffic_config");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:config_package.Request)
  return target;
}

::size_t Request::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:config_package.Request)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string network_config = 1;
  if (!this->_internal_network_config().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_network_config());
  }

  // string traffic_config = 2;
  if (!this->_internal_traffic_config().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_traffic_config());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Request::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Request::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Request::GetClassData() const { return &_class_data_; }


void Request::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Request*>(&to_msg);
  auto& from = static_cast<const Request&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:config_package.Request)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_network_config().empty()) {
    _this->_internal_set_network_config(from._internal_network_config());
  }
  if (!from._internal_traffic_config().empty()) {
    _this->_internal_set_traffic_config(from._internal_traffic_config());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Request::CopyFrom(const Request& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:config_package.Request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Request::IsInitialized() const {
  return true;
}

void Request::InternalSwap(Request* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.network_config_, lhs_arena,
                                       &other->_impl_.network_config_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.traffic_config_, lhs_arena,
                                       &other->_impl_.traffic_config_, rhs_arena);
}

::PROTOBUF_NAMESPACE_ID::Metadata Request::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_config_2eproto_getter, &descriptor_table_config_2eproto_once,
      file_level_metadata_config_2eproto[0]);
}
// ===================================================================

class Response::_Internal {
 public:
};

Response::Response(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:config_package.Response)
}
Response::Response(const Response& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Response* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.html_content_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.html_content_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.html_content_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_html_content().empty()) {
    _this->_impl_.html_content_.Set(from._internal_html_content(), _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:config_package.Response)
}

inline void Response::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.html_content_) {}

    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.html_content_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.html_content_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Response::~Response() {
  // @@protoc_insertion_point(destructor:config_package.Response)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Response::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.html_content_.Destroy();
}

void Response::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Response::Clear() {
// @@protoc_insertion_point(message_clear_start:config_package.Response)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.html_content_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Response::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string html_content = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_html_content();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "config_package.Response.html_content"));
        } else {
          goto handle_unusual;
        }
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

::uint8_t* Response::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:config_package.Response)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string html_content = 1;
  if (!this->_internal_html_content().empty()) {
    const std::string& _s = this->_internal_html_content();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "config_package.Response.html_content");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:config_package.Response)
  return target;
}

::size_t Response::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:config_package.Response)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string html_content = 1;
  if (!this->_internal_html_content().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_html_content());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Response::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Response::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Response::GetClassData() const { return &_class_data_; }


void Response::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Response*>(&to_msg);
  auto& from = static_cast<const Response&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:config_package.Response)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_html_content().empty()) {
    _this->_internal_set_html_content(from._internal_html_content());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Response::CopyFrom(const Response& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:config_package.Response)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Response::IsInitialized() const {
  return true;
}

void Response::InternalSwap(Response* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.html_content_, lhs_arena,
                                       &other->_impl_.html_content_, rhs_arena);
}

::PROTOBUF_NAMESPACE_ID::Metadata Response::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_config_2eproto_getter, &descriptor_table_config_2eproto_once,
      file_level_metadata_config_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace config_package
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::config_package::Request*
Arena::CreateMaybeMessage< ::config_package::Request >(Arena* arena) {
  return Arena::CreateMessageInternal< ::config_package::Request >(arena);
}
template<> PROTOBUF_NOINLINE ::config_package::Response*
Arena::CreateMaybeMessage< ::config_package::Response >(Arena* arena) {
  return Arena::CreateMessageInternal< ::config_package::Response >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
