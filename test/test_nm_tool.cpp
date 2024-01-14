// nm_tool/tests/node_topology_test.cpp

#include <gtest/gtest.h>
#include "test_config.h"
#include "conf_parser.h"
#include "node.h"
#include "topology.h"


struct NMToolTest : public testing::Test {
    ConfigStore* cs;
    NodeMap* nodeMap;
    Graph* graph;
    traffic* load;

    NMToolTest() {
      cs = new ConfigStore(csv_net_conf);
      nodeMap = NodeMap::getInstance();
      graph = new Graph();
      load = new traffic(csv_traffic_conf);
      for (const auto& conf_node : cs->getConfig()) {
            nodeMap->addToNodeMap(conf_node);
            graph->addEdge(conf_node);
      }
    }

    ~NMToolTest() {
        delete cs;

    }
    void setup() {}
    void tearDown() {}
};


TEST_F(NMToolTest, test_getConfig) {
    vector<Config> conf_vec = cs->getConfig();
    ASSERT_EQ(conf_vec.size(), 12);
};

TEST_F(NMToolTest, test_node_map) {
    ASSERT_EQ(nodeMap->get_node_map().size(), 5);
};

TEST_F(NMToolTest, test_topology) {
    auto adj_list = graph->get_topology(); 
    ASSERT_EQ(adj_list["A"].size(), 6);
};

TEST_F(NMToolTest, test_shortest_path) {
    auto map = graph->shortestPath("A");
    ASSERT_EQ(map.size(), 4);
}

TEST_F(NMToolTest, test_ospf) {
    graph->ospf("A");
    auto rt = nodeMap->getNode("A")->getRT();
    ASSERT_EQ(rt["E"].nextHop, "C");
};

TEST_F(NMToolTest, test_demand_traffic) {
    auto load_vec = load->get_demand_vector();
    ASSERT_EQ(load_vec.size(), 3);
};

TEST_F(NMToolTest, test_load_traffic) {
     Node* node = nodeMap->getNode("A");
     node->load_demand("B", 13);
     auto rt = node->getRT();
    ASSERT_EQ(rt["B"].capacityUsed, 13);
    ASSERT_EQ(node->getCurrLoad(), 13);
};

void initializeLogger() {
    logger = spdlog::stdout_color_mt("console");
    spdlog::set_default_logger(logger);
    spdlog::set_level(spdlog::level::info);
}

shared_ptr<spdlog::logger> logger;

int main() {
    initializeLogger();
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
