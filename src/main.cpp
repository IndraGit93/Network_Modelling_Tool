#include "main.h"
#include <iostream>
#include <fstream>
#include <grpcpp/grpcpp.h>
#include "config.grpc.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using config_package::config;
using config_package::Request;
using config_package::Response;

class configImpl final : public config::Service {
public:
    Status process_config(ServerContext* context, const Request* request, Response* response) override {
        // Print the received CSV content
        std::cout << "Received network_config.csv content:\n" << request->network_config() << std::endl;
        std::cout << "Received traffic_config.csv content:\n" << request->traffic_config() << std::endl;

        // Send a dummy HTML content in response
       


        nm_tool tool(request->network_config(), request->traffic_config());
        tool.get_config_store().print();
      
        tool.store_and_create_topology();
        tool.print_NodeMap();
        tool.learn_routes();
        tool.print_routing_tables();
        tool.load_demand_traffic();
        string response_content;
        tool.generate_node_utilization_report(response_content);

        response->set_html_content(response_content);
        return Status::OK;
    }
};

void RunServer() {
    std::string server_address("0.0.0.0:50051");
    configImpl service;

    ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);

    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << server_address << std::endl;
    server->Wait();
}

int main() {
    RunServer();
    return 0;
}
