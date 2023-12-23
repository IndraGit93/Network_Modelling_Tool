#ifndef CONFIG_PARSER_H
#define CONFIG_PARSER_H


#include <filesystem>
#include <iostream>
#include "csv.hpp"

using namespace std;

class Config {
public:
    int linkId;
    std::string start;
    std::string end;
    int capacity;
    int weight;
	Config* parent; 


    Config(): parent(nullptr){}
    Config(int linkId, const string& start, const string& end, int capacity, int weight)
        : linkId(linkId), start(start), end(end), capacity(capacity), weight(weight), parent(nullptr) {}

    void print() const;
};

class ConfigStore{

	vector<Config> configVec;

	public: 
	ConfigStore(){
		ifstream file("input.csv");

		if (!file.is_open()) {
			cerr << "Error opening the file input.csv, config parse failed!" << endl;
			assert(0);
		}
		for (const auto& row : csv::CSVReader(file)) {
			Config c1;    
			if (row["LinkId"].is_int()) {
				c1.linkId= row["LinkId"].get<int>();
			} 
			if(row["Capacity"].is_int()){
				c1.capacity= row["Capacity"].get<int>();
			}
			if(row["Weight"].is_int()){
				c1.weight = row["Weight"].get<int>();
			}
			if(row["Start"].is_str()){
				c1.start = row["Start"].get<string>();	
			}
			if(row["End"].is_str()){
				c1.end = row["End"].get<string>();
			}
			configVec.push_back(c1);
		}

	}
	vector<Config> getConfig();
	void print();
	
};

typedef struct config_demand{
	string src;
	string dest;
	int demand;
}config_demand;


class traffic{
	vector<config_demand> demand_vector;
	public:

	vector<config_demand> get_demand_vector();
	void parse_traffic_load();
	void print();
};

#endif // END OF CONFIG_PARSER_H