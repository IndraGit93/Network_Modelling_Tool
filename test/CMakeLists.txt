# nm_tool/tests/CMakeLists.txt

# Locate GTest
find_package(GTest REQUIRED)

# Include directories
include_directories(${GTEST_INCLUDE_DIRS})

# Add test files
add_executable(config_parser_test config_parser_test.cpp)
add_executable(node_topology_test node_topology_test.cpp)

# Link with GTest and your libraries
target_link_libraries(config_parser_test PRIVATE ${GTEST_BOTH_LIBRARIES} config_lib)
target_link_libraries(node_topology_test PRIVATE ${GTEST_BOTH_LIBRARIES} config_lib network_lib)

