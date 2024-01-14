#include <grpcpp/grpcpp.h>
#include <fstream>
#include <iostream>
#include <string>
#include "config.grpc.pb.h"
#include "logger.h"

using config_package::config;
using config_package::Request;
using config_package::Response;
using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using namespace std;


class configClient {
   public:
    configClient(shared_ptr<Channel> channel) : stub_(config::NewStub(channel)) {}
    string process_config(const string& net_csv, const string& traf_csv) {
        Request request;
        request.set_network_config(net_csv);
        request.set_traffic_config(traf_csv);
        Response response;
        ClientContext context;
        Status status = stub_->process_config(&context, request, &response);
        if (status.ok()) {
            return response.html_content();
        } else {
            cerr << "RPC failed: " << status.error_message() << endl;
            logger->info("RPC failed: {}", status.error_message());
            return "";
        }
    }
    private:
    unique_ptr<config::Stub> stub_;
};

void initializeLogger() {
    logger = spdlog::stdout_color_mt("console");
    spdlog::set_default_logger(logger);
    spdlog::set_level(spdlog::level::info);
}
shared_ptr<spdlog::logger> logger;

int main() {

    initializeLogger();
    ifstream input_file("net_conf.csv");
    if (!input_file.is_open()) {
        cerr << "Error opening file 'net_conf.csv'" << endl;
        logger->error("Error opening file 'net_conf.csv'");
        return 1;
    }

    string net_csv((istreambuf_iterator<char>(input_file)),
                        istreambuf_iterator<char>());

    logger->info("network config content: {}\n", net_csv);
    input_file.close();

    ifstream input_file1("traffic_conf.csv");

    if (!input_file1.is_open()) {
        cerr << "Error opening file 'traf_conf.csv'" << endl;
        logger->error("Error opening file 'traf_conf.csv'");
        return 1;
    }

    string traf_csv((istreambuf_iterator<char>(input_file1)),
                         istreambuf_iterator<char>());
    input_file1.close();

    logger->info("traffic config content:\n", traf_csv);

    grpc::ChannelArguments channel_args;
    auto channel = grpc::CreateCustomChannel("localhost:50051", grpc::InsecureChannelCredentials(),
                                             channel_args);
    configClient client(channel);

    string html_content = client.process_config(net_csv, traf_csv);

    logger->info("Received HTML content:\n", html_content);

    ofstream html_file("output.html");
    if (html_file.is_open()) {
        html_file << html_content;
        html_file.close();
        logger->error("HTML content written to 'output.html'");
    } else {
        cerr << "Error opening 'output.html' for writing" << endl;
        logger->error("HTML content written to 'output.html'");
        return 1;
    }
    string fullCommand("google-chrome output.html");
    system(fullCommand.c_str());
    return 0;
}
