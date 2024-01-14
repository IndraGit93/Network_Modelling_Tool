# nm_tool/tests/CMakeLists.txt
add_subdirectory(lib/googletest/)

# Include directories
include_directories(${GTEST_INCLUDE_DIRS})
include_directories("${CMAKE_PROJECT_DIR}/conf")
include_directories("${CMAKE_PROJECT_DIR}/lib")
include_directories("${CMAKE_PROJECT_DIR}/src")
include_directories("${CMAKE_PROJECT_DIR}/net")

configure_file(test_config.csv ${CMAKE_TEST_OUTPUT_DIRECTORY}/test_config.csv COPYONLY)
# Add test files
add_executable(all_test test_nm_tool.cpp)

# Link with GTest and your libraries
target_link_libraries(all_test PRIVATE gtest gtest_main conf_lib net_lib)

add_test(NAME all_test COMMAND all_test)
