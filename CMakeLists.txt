# CMakeLists.txt in the root directory

cmake_minimum_required(VERSION 3.12)
#set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(nm_tool)

# Set the paths for libraries and binaries
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

# Add subdirectories for each component of your project
add_subdirectory(config)
add_subdirectory(network)
add_subdirectory(src)
#add_subdirectory(test)