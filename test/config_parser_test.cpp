#include "config_parser.h"

#include <iostream>

#include "gtest/gtest.h"

using namespace std;

struct ConfigTest : public testing::Test {
    ConfigStore* cs;  // Declare pointer to ConfigStore

    // Constructor
    ConfigTest() {
        cs = new ConfigStore("test_config.csv");
        // Additional setup if needed...
    }

    // Destructor
    ~ConfigTest() {
        delete cs;  // Release the dynamically allocated object
        // Perform teardown actions if needed...
    }
    void setup() {}
    void tearDown() {}
};

TEST_F(ConfigTest, test_getConfig) {
    vector<Config> conf_vec = cs->getConfig();
    ASSERT_EQ(conf_vec.size(), 12);
};

int main() {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}