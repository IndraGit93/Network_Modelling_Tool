# config/CMakeLists.txt

add_library(conf_lib conf_parser.cpp)

# Set the output directory for the static library
set_target_properties(conf_lib PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}
)

target_include_directories(conf_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
