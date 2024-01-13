#include "node.h"
#include "../config/logger.h"

NodeMap* NodeMap::instance = nullptr;

string Node::getName() { return name; }
int Node::getCapacity() { return capacity; }
int Node::getCurrLoad() { return curr_load; }
void Node::addRoutingTableEntry(string _name) {
    RoutingTableEntry rte(_name, "-", 0);
    rt[_name] = rte;
}
unordered_map<string, RoutingTableEntry>& Node::getRT() { return rt; }
void Node::print() {
    logger->info("Node Name: {} \nCapacity: {} \nRouting Table: \n ");
    logger->info("     Dest        NextHop     CapacityUsed\n");
    for (const auto& e : rt) {
        logger->info("       {}         {}          {}",e.first, e.second.nextHop, e.second.capacityUsed);
    }
}

string Node::load_demand(string dest, int demand) {
    rt[dest].capacityUsed += demand;

    curr_load += demand;
    logger->info("increasing curr_load name: {} : {}\n", name, curr_load);
    return rt[dest].nextHop;
}

// NodeMap Member functions

void NodeMap::addToNodeMap(Config conf_node) {
    if (_node_map.find(conf_node.start) == _node_map.end()) {
        Node* node = new Node(conf_node.start, conf_node.capacity);
        _node_map[node->getName()] = node;
    }
    if (_node_map.find(conf_node.end) == _node_map.end()) {
        Node* node = new Node(conf_node.end, conf_node.capacity);
        _node_map[node->getName()] = node;
    }
}

Node* NodeMap::getNode(string name) { return _node_map[name]; }

void NodeMap::print() {
    logger->info("Printing NodeMap: \n");
    for (const auto& x : _node_map) {
        logger->info("Name: {}, Capacity: {}\n", x.first, x.second->getCapacity());
    }
}

void NodeMap::generateThresholdVec() {
    const std::string csvFilePath = "threshold.csv";
    std::ofstream outFile(csvFilePath, std::ios::trunc);
    if (!outFile.is_open()) {
        std::cerr << "Error opening the file: " << csvFilePath << std::endl;
        logger->error("Error opening the file: ", csvFilePath);
        return;
    }
    outFile << "Node,Utilization" << std::endl;
    for (const auto& x : _node_map) {
        int capacity = x.second->getCapacity();
        int curr_load = x.second->getCurrLoad();

        logger->info("{} : {} => {} : {}\n", x.first, capacity, curr_load, ((float)curr_load / (float)capacity) * 100);     
        outFile << x.first << "," << ((float)curr_load / (float)capacity) * 100 << std::endl;
    }
    outFile.close();
    logger->info("CSV file created successfully: {}",  csvFilePath);
}