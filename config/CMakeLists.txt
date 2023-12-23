# config/CMakeLists.txt

add_library(config_lib config_parser.cpp)

# Set the output directory for the static library
set_target_properties(config_lib PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}
)

target_include_directories(config_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
