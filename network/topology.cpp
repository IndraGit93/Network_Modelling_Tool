#include "topology.h"
#include "node.h"

   void Graph::addEdge(Config conf_node){	
            Node* start = NodeMap::getInstance()->getNode(conf_node.start);
            Node* end = NodeMap::getInstance()->getNode(conf_node.end);
            adjacencyList[conf_node.start].push_back({end,conf_node.weight});
			adjacencyList[conf_node.end].push_back({start, conf_node.weight});
    }

	auto Graph::shortestPath(const string& src) {
			priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> pq;
            unordered_map<string,string>parent;
			for (const auto& pair : adjacencyList) {
				short_dist_map[pair.first] = INT_MAX;
			}
			short_dist_map[src] = 0;
			pq.push({0, src});
			while (!pq.empty()) {
				string curr_node = pq.top().second;
				int dist = pq.top().first;
				pq.pop();
				for (const auto& x : adjacencyList.at(curr_node)) {

					string adj_node_name = x.first->getName();
                    int wt = x.second;
					int newDist = dist + wt;
					if (newDist < short_dist_map[adj_node_name]) {
						short_dist_map[adj_node_name] = newDist;
						pq.push({newDist, adj_node_name});
                        parent[adj_node_name] = curr_node;
					}
				}
			}
            return parent;
	}

    void Graph::learn_routes(){
        for(int i=0;i<MAX_NODES;i++){
            string _name(1, ('A'+i));
            cout<<"calling ospf on "<<_name<<endl;
            ospf(_name);

        }
    }

    void Graph::print_all_rt(){
        for(int i=0;i<MAX_NODES;i++){
            string _name(1, ('A'+i));
            cout<<"printing RT of "<<_name<<endl;
            Node* node = NodeMap::getInstance()->getNode(_name);
            node->print();
        }        
    }

    void Graph::ospf(string src){
        Node* src_node = NodeMap::getInstance()->getNode(src);
        if(src_node == NULL){
            cout<<"Node is not present in map"<<endl;
            return ;   
        }
        unordered_map<string,string> parent_map = shortestPath(src);
        for(auto x : parent_map){
            string parent = x.first;
            string child = x.second;
            string dest = parent;
            while(src != child){
                parent = child;
                child = parent_map[parent];
            }
            RoutingTableEntry rte(dest,parent,0);
            NodeMap::getInstance()->getNode(src)->getRT().at(dest) = rte; 
        }
    }

    void Graph::print() const{
        for (const auto& pair : adjacencyList) {
			cout << "Node: " << pair.first << "==>";
			for (const auto& Node : pair.second) {
					cout<<Node.first->getName()<<" ";
			}
			cout <<"\n----------------------" << endl;
		}
    }

    void Graph::load_traffic(vector<config_demand> demand_vector){
        for(auto x : demand_vector){
            Node* src   = NodeMap::getInstance()->getNode(x.src);
            Node* dest  = NodeMap::getInstance()->getNode(x.dest);
            int demand = x.demand;
            string nextHop = dest->getName();
            while(src->getName() != nextHop && src->getName() != "-"){
                 string new_src =  src->load_demand(dest->getName(),  demand);
                 src = NodeMap::getInstance()->getNode(new_src);
            }
            src->load_demand(dest->getName(),  demand);
        }
    }