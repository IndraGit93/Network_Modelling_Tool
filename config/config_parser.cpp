#include "config_parser.h"

    void Config::print() const {
        std::cout << "LinkId: " << linkId
                  << ", Start: " << start
                  << ", End: " << end
                  << ", Capacity: " << capacity
                  << ", Weight: " << weight << std::endl;
    }
	vector<Config> ConfigStore::getConfig(){
		return configVec;
	}

	void ConfigStore::print(){
		for(auto x: configVec){
			x.print();
		}
	}

    vector<config_demand> traffic::get_demand_vector(){
		return demand_vector;
	}

	void traffic::parse_traffic_load(){
		ifstream file("traffic_load.csv");
		if (!file.is_open()) 
		{
			cerr << "Error opening the file input.csv, config parse failed!" << endl;
			assert(0);
		}
		for (const auto& row : csv::CSVReader(file))
		{
			config_demand cd;    
			if (row["src"].is_str()) {
				cd.src= row["src"].get<string>();
			} 
			if(row["dest"].is_str()){
				cd.dest= row["dest"].get<string>();
			}
			if(row["demand"].is_int()){
				cd.demand = row["demand"].get<int>();
			}
			demand_vector.push_back(cd);
		}
	}
	void traffic::print(){
		if(demand_vector.empty()){
			cout<<"demand vector is empty!"<<endl;
			return;
		}
		cout<<"Loading demand_vector"<<endl;
		for(const auto& x : demand_vector){
			cout<<x.src<<" => "<<x.dest<<" : "<<x.demand<<endl;
		}
	}