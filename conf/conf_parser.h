#ifndef CONF_PARSER_H
#define CONF_PARSER_H

#include <filesystem>
#include <iostream>
#include <string>
#include <vector>
#include "csv.hpp"

using std::string, std::vector, std::istringstream;

class Config {
   public:
    int linkId;
    std::string start;
    std::string end;
    int capacity;
    int weight;
    Config* parent;

    Config() : parent(nullptr) {}
    Config(int linkId, const string& start, const string& end, int capacity, int weight)
        : linkId(linkId),
          start(start),
          end(end),
          capacity(capacity),
          weight(weight),
          parent(nullptr) {}

    void print() const;
};

class ConfigStore {
    vector<Config> configVec;

   public:
    ConfigStore(const std::string& csvData) {
        std::istringstream csvStream(csvData);
         
        for (const auto& row : csv::CSVReader(csvStream)) {
            Config c1;
            if (row["LinkId"].is_int()) {
                c1.linkId = row["LinkId"].get<int>();
            }
            if (row["Capacity"].is_int()) {
                c1.capacity = row["Capacity"].get<int>();
            }
            if (row["Weight"].is_int()) {
                c1.weight = row["Weight"].get<int>();
            }
            if (row["Start"].is_str()) {
                c1.start = row["Start"].get<string>();
            }
            if (row["End"].is_str()) {
                c1.end = row["End"].get<string>();
            }

            configVec.push_back(c1);
        }
    }

    vector<Config> getConfig();
    void print();
};

typedef struct config_demand {
    string src;
    string dest;
    int demand;
} config_demand;

class traffic {
    vector<config_demand> demand_vector;

   public:
    traffic(string load_buff) {
        if (load_buff.empty()) {
           // cerr << "traffic is empty!" << endl;
            return;
        }
        istringstream csvStream(load_buff);

        for (const auto& row : csv::CSVReader(csvStream)) {
            config_demand cd;
            if (row["src"].is_str()) {
                cd.src = row["src"].get<string>();
            }
            if (row["dest"].is_str()) {
                cd.dest = row["dest"].get<string>();
            }
            if (row["demand"].is_int()) {
                cd.demand = row["demand"].get<int>();
            }
            demand_vector.push_back(cd);
        }
    }
    vector<config_demand> get_demand_vector();
    void print();
};
#endif  // END OF CONFIG_PARSER_H