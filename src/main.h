#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "../config/config_parser.h"
#include "../network/node.h"
#include "../network/topology.h"

class nm_tool{
    ConfigStore conf;
    Graph graph;
    traffic _load;

    public:
   // nm_tool(){}
    nm_tool(string net_buff, string load_buff):conf(net_buff),_load(load_buff){
    
    }
    ConfigStore& get_config_store(){
        return conf;
    }
    vector<Config> load_config(string csv_buff){
        return conf.getConfig();
    }

    void store_and_create_topology(){
        NodeMap* nodeMap = NodeMap::getInstance();
        for(const auto& conf_node: conf.getConfig()){
            nodeMap->addToNodeMap(conf_node);
            graph.addEdge(conf_node);
        }
    }

    void print_NodeMap(){
        NodeMap* nodeMap = NodeMap::getInstance();

        nodeMap->print();
    }

    void learn_routes(){
        graph.learn_routes();
    }
    void print_routing_tables(){
         graph.print_all_rt();
    }
    void load_demand_traffic(){
         _load.print();
         graph.load_traffic(_load.get_demand_vector());
    }
    void generate_node_utilization_report(std::string& htmlContent) {
        // Assuming display_graph.py generates graph.html
        NodeMap::getInstance()->generateThresholdVec();

        // Use popen to capture the output of the Python script
        system("python3 display_graph.py");
        // Read the content of graph.html into a string
        ifstream htmlFile("graph.html");
        if (!htmlFile.is_open()) {
            std::cerr << "Error opening graph.html file." << std::endl;
            return;
        }

        stringstream buffer;
        buffer << htmlFile.rdbuf();

        // Store the content in the provided htmlContent string
        htmlContent = buffer.str();
    }

    void flush_all(){
        cout<<"flushing_all"<<endl;
    }
};