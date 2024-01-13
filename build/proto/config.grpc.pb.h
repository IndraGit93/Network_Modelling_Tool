// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: config.proto
#ifndef GRPC_config_2eproto__INCLUDED
#define GRPC_config_2eproto__INCLUDED

#include "config.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace config_package {

class config final {
 public:
  static constexpr char const* service_full_name() {
    return "config_package.config";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status process_config(::grpc::ClientContext* context, const ::config_package::Request& request, ::config_package::Response* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::config_package::Response>> Asyncprocess_config(::grpc::ClientContext* context, const ::config_package::Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::config_package::Response>>(Asyncprocess_configRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::config_package::Response>> PrepareAsyncprocess_config(::grpc::ClientContext* context, const ::config_package::Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::config_package::Response>>(PrepareAsyncprocess_configRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void process_config(::grpc::ClientContext* context, const ::config_package::Request* request, ::config_package::Response* response, std::function<void(::grpc::Status)>) = 0;
      virtual void process_config(::grpc::ClientContext* context, const ::config_package::Request* request, ::config_package::Response* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::config_package::Response>* Asyncprocess_configRaw(::grpc::ClientContext* context, const ::config_package::Request& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::config_package::Response>* PrepareAsyncprocess_configRaw(::grpc::ClientContext* context, const ::config_package::Request& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status process_config(::grpc::ClientContext* context, const ::config_package::Request& request, ::config_package::Response* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::config_package::Response>> Asyncprocess_config(::grpc::ClientContext* context, const ::config_package::Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::config_package::Response>>(Asyncprocess_configRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::config_package::Response>> PrepareAsyncprocess_config(::grpc::ClientContext* context, const ::config_package::Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::config_package::Response>>(PrepareAsyncprocess_configRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void process_config(::grpc::ClientContext* context, const ::config_package::Request* request, ::config_package::Response* response, std::function<void(::grpc::Status)>) override;
      void process_config(::grpc::ClientContext* context, const ::config_package::Request* request, ::config_package::Response* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::config_package::Response>* Asyncprocess_configRaw(::grpc::ClientContext* context, const ::config_package::Request& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::config_package::Response>* PrepareAsyncprocess_configRaw(::grpc::ClientContext* context, const ::config_package::Request& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_process_config_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status process_config(::grpc::ServerContext* context, const ::config_package::Request* request, ::config_package::Response* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_process_config : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_process_config() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_process_config() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status process_config(::grpc::ServerContext* /*context*/, const ::config_package::Request* /*request*/, ::config_package::Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestprocess_config(::grpc::ServerContext* context, ::config_package::Request* request, ::grpc::ServerAsyncResponseWriter< ::config_package::Response>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_process_config<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_process_config : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_process_config() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::config_package::Request, ::config_package::Response>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::config_package::Request* request, ::config_package::Response* response) { return this->process_config(context, request, response); }));}
    void SetMessageAllocatorFor_process_config(
        ::grpc::MessageAllocator< ::config_package::Request, ::config_package::Response>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::config_package::Request, ::config_package::Response>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_process_config() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status process_config(::grpc::ServerContext* /*context*/, const ::config_package::Request* /*request*/, ::config_package::Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* process_config(
      ::grpc::CallbackServerContext* /*context*/, const ::config_package::Request* /*request*/, ::config_package::Response* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_process_config<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_process_config : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_process_config() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_process_config() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status process_config(::grpc::ServerContext* /*context*/, const ::config_package::Request* /*request*/, ::config_package::Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_process_config : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_process_config() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_process_config() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status process_config(::grpc::ServerContext* /*context*/, const ::config_package::Request* /*request*/, ::config_package::Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestprocess_config(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_process_config : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_process_config() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->process_config(context, request, response); }));
    }
    ~WithRawCallbackMethod_process_config() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status process_config(::grpc::ServerContext* /*context*/, const ::config_package::Request* /*request*/, ::config_package::Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* process_config(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_process_config : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_process_config() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::config_package::Request, ::config_package::Response>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::config_package::Request, ::config_package::Response>* streamer) {
                       return this->Streamedprocess_config(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_process_config() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status process_config(::grpc::ServerContext* /*context*/, const ::config_package::Request* /*request*/, ::config_package::Response* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedprocess_config(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::config_package::Request,::config_package::Response>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_process_config<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_process_config<Service > StreamedService;
};

}  // namespace config_package


#endif  // GRPC_config_2eproto__INCLUDED