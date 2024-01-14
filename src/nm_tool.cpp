#include "nm_tool.h"
#include <grpcpp/grpcpp.h>
#include <fstream>
#include <iostream>
#include "config.grpc.pb.h"

using config_package::config;
using config_package::Request;
using config_package::Response;
using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;

class configImpl final : public config::Service {
   public:
    Status process_config(ServerContext* context, const Request* request,
                          Response* response) override {
        spdlog::info("Received network_config content:\n {}",request->network_config());
        spdlog::info("Received traffic_config content:\n {}",request->traffic_config());
        nm_tool tool(request->network_config(), request->traffic_config());
        tool.process();
        string response_content;
        tool.generate_node_utilization_report(response_content);
        response->set_html_content(response_content);
        return Status::OK;
    }
};

void RunServer() {
    string server_address("0.0.0.0:50051");
    configImpl service;

    ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
   
    unique_ptr<Server> server(builder.BuildAndStart());
    spdlog::info("listening on {}", server_address);
    server->Wait();
}

void initializeLogger() {
    logger = spdlog::stdout_color_mt("console");
    spdlog::set_default_logger(logger);
    spdlog::set_level(spdlog::level::info);
}

shared_ptr<spdlog::logger> logger;

int main() {
    initializeLogger();
    logger->info("Starting nm tool!");
    RunServer();
    return 0;
}
