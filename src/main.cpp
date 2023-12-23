#include "main.h"


int main()
{
 	ConfigStore conf;
	conf.print();

	vector<Config> config = conf.getConfig();
    NodeMap* nodeMap = NodeMap::getInstance();
    Graph graph;

    for(const auto& conf_node: config){
        nodeMap->addToNodeMap(conf_node);
        graph.addEdge(conf_node);
    }

    graph.learn_routes();
    graph.print_all_rt();

    traffic _load;
    _load.parse_traffic_load();

    cout<<"Printing traffice load"<<endl;
    _load.print();

    graph.load_traffic(_load.get_demand_vector());
    graph.print_all_rt();

    NodeMap::getInstance()->generateThresholdVec();
    system("python3 display_graph.py");

}