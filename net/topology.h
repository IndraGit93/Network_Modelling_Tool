#ifndef TOPOLOGY_H
#define TOPOLOGY_H

#include <climits>
#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>
#include <vector>
#include "conf_parser.h"
#include "node.h"

class Graph {
    unordered_map<string, vector<pair<Node*, int>>> adjacencyList;
    unordered_map<string, int> short_dist_map;

   public:
    void addEdge(Config conf_node);
    unordered_map<string, string> shortestPath(const string& src);
    void learn_routes();
    void print_all_rt();
    void ospf(string src);
    void print() const;
    unordered_map<string, vector<pair<Node*, int>>> get_topology();
    void load_traffic(vector<config_demand> demand_vector);
};
#endif  // END OF TOPOLOGY_H
