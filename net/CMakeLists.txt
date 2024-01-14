# network/CMakeLists.txt

add_library(net_lib node.cpp topology.cpp)

# Set the output directory for the static library
set_target_properties(net_lib PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}
)

target_include_directories(net_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Set the include directories for network_lib
target_include_directories(net_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}  # Current directory
    ${CMAKE_CURRENT_SOURCE_DIR}/../conf  # Path to config directory
)