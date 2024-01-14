#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include "conf_parser.h"
#include "logger.h"
#include "node.h"
#define MAX_NODES 5
using namespace std;

class RoutingTableEntry {
   public:
    string dest;
    string nextHop;
    int capacityUsed;
    RoutingTableEntry() {}
    RoutingTableEntry(string dest, string nextHop, int capacityUsed)
        : dest(dest), nextHop(nextHop), capacityUsed(capacityUsed) {}
};

class Node {
    string name;
    int capacity;
    int curr_load;
    unordered_map<string, RoutingTableEntry> rt;

   public:
    Node(string name, int capacity) : name(name), capacity(capacity), curr_load(0) {
        for (int i = 0; i < MAX_NODES; i++) {
            string _name(1, ('A' + i));
            addRoutingTableEntry(_name);
        }
    }
    string getName();
    int getCapacity();
    int getCurrLoad();
    void addRoutingTableEntry(string _name);
    unordered_map<string, RoutingTableEntry>& getRT();
    void print();
    string load_demand(string dest, int demand);
};

class NodeMap {
    unordered_map<string, Node*> _node_map;
    static NodeMap* instance;
    NodeMap() {}
    NodeMap(const NodeMap&);
    NodeMap& operator=(const NodeMap&);

   public:
    static NodeMap* getInstance() {
        if (!instance) {
            instance = new NodeMap();
        }
        return instance;
    }

    void addToNodeMap(Config conf_node);
    Node* getNode(string name);
    void print();
    void generateThresholdVec();
    unordered_map<string, Node*> get_node_map();

    ~NodeMap() {
        for (auto& entry : _node_map) {
            delete entry.second;
            logger->info("Cleared the node: {}", entry.first);
        }
    }
};
#endif  // END OF NODE_H