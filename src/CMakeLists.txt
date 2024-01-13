# src/CMakeLists.txt

# Add the executable
#add_executable(nm_tool main.cpp)

# Link the libraries
#target_link_libraries(nm_tool PUBLIC config_lib network_lib)


# Configure config files to be copied to the build directory
configure_file(input.csv ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/input.csv COPYONLY)
configure_file(threshold.csv ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/threshold.csv COPYONLY)
configure_file(traffic_load.csv ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/traffic_load.csv COPYONLY)
configure_file(display_graph.py ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/display_graph.py  COPYONLY)



include(common.cmake)
find_package(spdlog REQUIRED)
# Output directory for generated files
set(hw_proto_gen_dir "${CMAKE_BINARY_DIR}/proto")

message(${CMAKE_BINARY_DIR}/proto)

# Create the proto directory in the build
file(MAKE_DIRECTORY ${hw_proto_gen_dir})

# Proto file
get_filename_component(hw_proto "${CMAKE_SOURCE_DIR}/proto/config.proto" ABSOLUTE)
get_filename_component(hw_proto_path "${hw_proto}" PATH)

# Generated sources
set(hw_proto_srcs "${hw_proto_gen_dir}/config.pb.cc")
set(hw_proto_hdrs "${hw_proto_gen_dir}/config.pb.h")
set(hw_grpc_srcs "${hw_proto_gen_dir}/config.grpc.pb.cc")
set(hw_grpc_hdrs "${hw_proto_gen_dir}/config.grpc.pb.h")

add_custom_command(
      OUTPUT "${hw_proto_srcs}" "${hw_proto_hdrs}" "${hw_grpc_srcs}" "${hw_grpc_hdrs}"
      COMMAND ${_PROTOBUF_PROTOC}
      ARGS --grpc_out "${hw_proto_gen_dir}"
        --cpp_out "${hw_proto_gen_dir}"
        -I "${hw_proto_path}"
        --plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
        "${hw_proto}"
      DEPENDS "${hw_proto}")

# Include generated *.pb.h files
include_directories("${hw_proto_gen_dir}")
include_directories("${CMAKE_BINARY_DIR}/proto")
message(including ${hw_proto_gen_dir})

# hw_grpc_proto
add_library(hw_grpc_proto
  ${hw_grpc_srcs}
  ${hw_grpc_hdrs}
  ${hw_proto_srcs}
  ${hw_proto_hdrs})
target_link_libraries(hw_grpc_proto
  ${_REFLECTION}
  ${_GRPC_GRPCPP}
  ${_PROTOBUF_LIBPROTOBUF})

# Targets greeter_[async_](client|server)
foreach(_target
  nm_client main)
  add_executable(${_target} "${_target}.cpp")
  target_link_libraries(${_target}
    hw_grpc_proto
    absl::flags
    absl::flags_parse
    config_lib
    network_lib
    spdlog::spdlog_header_only
    ${_REFLECTION}
    ${_GRPC_GRPCPP}
    ${_PROTOBUF_LIBPROTOBUF}
    )
    # #Add the output directory to the PATH
    # set_target_properties(${_target} PROPERTIES
    #     RUNTIME_OUTPUT_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
    #     OUTPUT_NAME_DEBUG nm_tool_debug  # Optional: Rename the debug version if needed
    # )
endforeach()
