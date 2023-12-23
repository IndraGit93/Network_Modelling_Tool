# src/CMakeLists.txt

# Add the executable
add_executable(nm_tool main.cpp)

# Link the libraries
target_link_libraries(nm_tool PUBLIC config_lib network_lib)


# Configure config files to be copied to the build directory
configure_file(input.csv ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/input.csv COPYONLY)
configure_file(threshold.csv ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/threshold.csv COPYONLY)
configure_file(traffic_load.csv ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/traffic_load.csv COPYONLY)
configure_file(display_graph.py ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/display_graph.py  COPYONLY)


# Add the output directory to the PATH
set_target_properties(nm_tool PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
    OUTPUT_NAME_DEBUG nm_tool_debug  # Optional: Rename the debug version if needed
)