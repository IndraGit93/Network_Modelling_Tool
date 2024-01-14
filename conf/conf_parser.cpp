#include "conf_parser.h"
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

vector<config_demand> traffic::get_demand_vector() { 
    return demand_vector; 
}

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