#include <iostream>
#include <fstream>
#include <grpcpp/grpcpp.h>
#include "config.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using config_package::config;
using config_package::Request;
using config_package::Response;

class configClient {
public:
    configClient(std::shared_ptr<Channel> channel)
        : stub_(config::NewStub(channel)) {}

    std::string process_config(const std::string& net_csv , const std::string& traf_csv ) {
        Request request;
        request.set_network_config(net_csv);
        request.set_traffic_config(traf_csv);
        Response response;      
        ClientContext context;

        Status status = stub_->process_config(&context, request, &response);

        if (status.ok()) {
            return response.html_content();
        } else {
            std::cerr << "RPC failed: " << status.error_message() << std::endl;
            return "";
        }
    }

private:
    std::unique_ptr<config::Stub> stub_;
};

int main() {
    std::ifstream input_file("network_config.csv");
    if (!input_file.is_open()) {
        std::cerr << "Error opening file 'network_config.csv'" << std::endl;
        return 1;
    }

    std::string net_csv((std::istreambuf_iterator<char>(input_file)),
                            std::istreambuf_iterator<char>());
    std::cout << "network_config.csv content:\n" << net_csv << std::endl;
    input_file.close();

    std::ifstream input_file1("traffic_config.csv");
    if (!input_file1.is_open()) {
        std::cerr << "Error opening file 'traffic_config.csv'" << std::endl;
        return 1;
    }

    std::string traf_csv((std::istreambuf_iterator<char>(input_file1)),
                            std::istreambuf_iterator<char>());
    input_file1.close();
    std::cout << "traffice_config.csv content:\n" << traf_csv << std::endl;


    grpc::ChannelArguments channel_args;
    auto channel = grpc::CreateCustomChannel("localhost:50051", grpc::InsecureChannelCredentials(), channel_args);
    configClient client(channel);

    // Send the CSV content and receive the HTML content
    std::string html_content = client.process_config(net_csv, traf_csv);

    // Print or use the HTML content as needed
    std::cout << "Received HTML content:\n" << html_content << std::endl;

  // Write HTML content to a file
    std::ofstream html_file("output.html");
    if (html_file.is_open()) {
        html_file << html_content;
        html_file.close();
        std::cout << "HTML content written to 'output.html'" << std::endl;
    } else {
        std::cerr << "Error opening 'output.html' for writing" << std::endl;
        return 1; // Return an error code
    }

    // Replace "your_browser_command" with the command to launch your preferred browser
    // For example, "firefox" or "google-chrome"

    // Construct the full command to open the HTML file in the browser
    std::string fullCommand("google-chrome output.html");
    // Open the HTML file in the browser using the system call
    std::system(fullCommand.c_str());
    return 0;
}
