#include "config_parser.h"
#include "logger.h"

void Config::print() const { 
    logger->info("LinkId: {}, Start: {}, End: {}, Capacity: {}, Weight: {}", linkId, start, end, capacity, weight);     
}
vector<Config> ConfigStore::getConfig() { return configVec; }

void ConfigStore::print() {
    logger->info("Printing ConfigStore");
    for (auto x : configVec) {
        x.print();
    }
}

vector<config_demand> traffic::get_demand_vector() { return demand_vector; }

// void traffic::parse_traffic_load(){
// 	ifstream file("traffic_config.csv");
// 	if (!file.is_open())
// 	{
// 		cerr << "Error opening the file input.csv, config parse failed!" << endl;
// 		assert(0);
// 	}
// 	for (const auto& row : csv::CSVReader(file))
// 	{
// 		config_demand cd;
// 		if (row["src"].is_str()) {
// 			cd.src= row["src"].get<string>();
// 		}
// 		if(row["dest"].is_str()){
// 			cd.dest= row["dest"].get<string>();
// 		}
// 		if(row["demand"].is_int()){
// 			cd.demand = row["demand"].get<int>();
// 		}
// 		demand_vector.push_back(cd);
// 	}
// }

void traffic::print() {
    if (demand_vector.empty()) {
        logger->error("demand vector is empty.");
        return;
    }
    logger->info("Loading demand vector: ");
    for (const auto& x : demand_vector) {
        logger->info("{} => {}: {}", x.src, x.dest, x.demand);
    }
}