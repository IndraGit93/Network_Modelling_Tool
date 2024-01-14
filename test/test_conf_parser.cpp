#include <iostream>
#include "conf_parser.h"
#include "gtest/gtest.h"
#include "logger.h"
#include "test_config.h"


struct ConfigTest : public testing::Test {
    ConfigStore* cs;

    ConfigTest() {
        cs = new ConfigStore(csv_net_conf);
    }

    ~ConfigTest() {
        delete cs;
    }
    void setup() {}
    void tearDown() {}
};

TEST_F(ConfigTest, test_getConfig) {
    vector<Config> conf_vec = cs->getConfig();
    ASSERT_EQ(conf_vec.size(), 12);
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