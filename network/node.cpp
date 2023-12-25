   #include "node.h"

    NodeMap* NodeMap::instance = nullptr;

    string Node::getName()
    {
        return name;
    }
    int Node::getCapacity()
    {
        return capacity;
    }
    int Node::getCurrLoad()
    {
        return curr_load;
    }
    void Node::addRoutingTableEntry(string _name)
    {
        RoutingTableEntry rte(_name,"-",0);
        rt[_name] = rte;
    }
    unordered_map<string, RoutingTableEntry>& Node::getRT()
    {
        return rt;
    }
    void Node::print()
    {
          cout<<"Node Name:"<<name<<endl;
          cout<<"Capacity:"<<capacity<<endl;
          cout<<" Routing Table :"<<endl;
        cout<<"     Dest        NextHop     CapacityUsed"<<endl;
        for(const auto& e : rt){
            cout<<"       "<<e.first<<"         "<<e.second.nextHop<<"          "<<e.second.capacityUsed<<endl;
        }
    }
    string Node::load_demand(string dest, int demand)
    {
        rt[dest].capacityUsed += demand;

        curr_load += demand;
        cout<<"increasing curr_load name:"<<name<<":"<<curr_load<<endl;
        return rt[dest].nextHop;
    }

//NodeMap Member functions

    void NodeMap::addToNodeMap(Config conf_node){
        if(_node_map.find(conf_node.start) == _node_map.end()){
            Node* node = new Node(conf_node.start, conf_node.capacity);
            _node_map[node->getName()] = node;
        }
        if(_node_map.find(conf_node.end) == _node_map.end()){
            Node* node = new Node(conf_node.end, conf_node.capacity);
            _node_map[node->getName()] = node;
        }   
    }

     Node* NodeMap::getNode(string name){
            return _node_map[name];
     }

     void NodeMap::print(){
        cout<<"Printing NodeMap"<<endl;
        for(const auto& x : _node_map){
            cout<<"Name: "<<x.first<<" capacity:"<<x.second->getCapacity()<<endl;
        }
     }

    void NodeMap::generateThresholdVec(){
        const std::string csvFilePath = "threshold.csv";
        std::ofstream outFile(csvFilePath, std::ios::trunc);
        if (!outFile.is_open()) {
            std::cerr << "Error opening the file: " << csvFilePath << std::endl;
            return; 
        }
        outFile << "Node,Utilization" << std::endl;
        for(const auto& x : _node_map){
            int capacity = x.second->getCapacity();
            int curr_load = x.second->getCurrLoad();
            cout<<x.first<<": "<<capacity<<" => "<<curr_load<<" : "<<((float)curr_load/(float)capacity)*100<<endl;
            outFile << x.first << "," << ((float)curr_load/(float)capacity)*100<< std::endl;
        }
        outFile.close();
        std::cout << "CSV file created successfully: " << csvFilePath << std::endl;
     }