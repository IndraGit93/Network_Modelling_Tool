# network/CMakeLists.txt

add_library(network_lib node.cpp topology.cpp)

# Set the output directory for the static library
set_target_properties(network_lib PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}
)

target_include_directories(network_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
