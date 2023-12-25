# nm_tool/tests/CMakeLists.txt

add_subdirectory(lib/googletest/)

# Include directories
include_directories(${GTEST_INCLUDE_DIRS})

configure_file(test_config.csv ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/test_config.csv COPYONLY)
# Add test files
add_executable(config_parser_test config_parser_test.cpp)
#add_executable(node_topology_test node_topology_test.cpp)

# Link with GTest and your libraries
target_include_directories(config_parser_test PRIVATE ../config/)
target_include_directories(config_parser_test PRIVATE ../lib/)
target_link_libraries(config_parser_test PRIVATE config_lib)
target_link_libraries(config_parser_test PRIVATE gtest gtest_main)

#target_link_libraries(node_topology_test PRIVATE ${GTEST_BOTH_LIBRARIES} config_lib network_lib)

