#include "topology.h"
#include "node.h"
#include "logger.h"

void Graph::addEdge(Config conf_node) {
    Node* start = NodeMap::getInstance()->getNode(conf_node.start);
    Node* end = NodeMap::getInstance()->getNode(conf_node.end);
    adjacencyList[conf_node.start].push_back({end, conf_node.weight});
    adjacencyList[conf_node.end].push_back({start, conf_node.weight});
}

unordered_map<string, string> Graph::shortestPath(const string& src) {
    priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> pq;
    unordered_map<string, string> parent;
    logger->debug("Inside shortesPath: \n");
    for (const auto& pair : adjacencyList) {
        short_dist_map[pair.first] = INT_MAX;
    }
    short_dist_map[src] = 0;
    pq.push({0, src});
    while (!pq.empty()) {
        string curr_node = pq.top().second;
        int dist = pq.top().first;
        logger->debug("{} -> dist: {} adjacent Nodes: ->", curr_node, dist);
        pq.pop();
        for (const auto& x : adjacencyList.at(curr_node)) {
            string adj_node_name = x.first->getName();
            int wt = x.second;
            cout << adj_node_name << ":" << wt;
            logger->debug("{} : {}", adj_node_name,wt);
            int newDist = dist + wt;
            if (newDist < short_dist_map[adj_node_name]) {
                short_dist_map[adj_node_name] = newDist;
                pq.push({newDist, adj_node_name});
                parent[adj_node_name] = curr_node;
            }
        }
        logger->debug("\n");
    }
    logger->debug("\nPrinting parent inside shortestPath\n");
    for (auto x : parent) {
        logger->debug("{} -> {} \n", x.first, x.second);
    }
    return parent;
}

void Graph::learn_routes() {
    for (int i = 0; i < MAX_NODES; i++) {
        string _name(1, ('A' + i));
        logger->debug("Calling ospf on: {}\n", _name);
        ospf(_name);
    }
}

void Graph::print_all_rt() {
    for (int i = 0; i < MAX_NODES; i++) {
        string _name(1, ('A' + i));
        logger->info("printing RT of: {}\n", _name);
        Node* node = NodeMap::getInstance()->getNode(_name);
        node->print();
    }
}

void Graph::ospf(string src) {
    Node* src_node = NodeMap::getInstance()->getNode(src);
    if (src_node == NULL) {
        logger->error("Node: {} is not present in map",src);
        return;
    }
    logger->debug("Calling shortestPath() for src:\n", src_node->getName());
    unordered_map<string, string> parent_map = shortestPath(src);
    logger->debug("Printing parent outside shortestPath\n");
    for (auto x : parent_map) {
        logger->debug("{} -> {}\n", x.first, x.second);
    }
    for (auto x : parent_map) {
        string parent = x.first;
        string child = x.second;
        string dest = parent;
        while (src != child) {
            parent = child;
            child = parent_map[parent];
        }
        RoutingTableEntry rte(dest, parent, 0);
        NodeMap::getInstance()->getNode(src)->getRT().at(dest) = rte;
    }
}

void Graph::print() const {
    for (const auto& pair : adjacencyList) {
        logger->info("Node: {} ==>",  pair.first);
        for (const auto& Node : pair.second) {
            logger->info("{} ", Node.first->getName() );
        }
        logger->info("\n----------------------\n");
    }
}

unordered_map<string, vector<pair<Node*, int>>> Graph::get_topology(){
        return adjacencyList;
}

void Graph::load_traffic(vector<config_demand> demand_vector) {
    for (auto x : demand_vector) {
        Node* src = NodeMap::getInstance()->getNode(x.src);
        Node* dest = NodeMap::getInstance()->getNode(x.dest);
        int demand = x.demand;
        string nextHop = dest->getName();
        while (src->getName() != nextHop && src->getName() != "-") {
            string new_src = src->load_demand(dest->getName(), demand);
            src = NodeMap::getInstance()->getNode(new_src);
        }
        src->load_demand(dest->getName(), demand);
    }
}