# Overview:
The Network Modelling Tool is a software application designed to load network configurations described in CSV files along with traffic data. It models the traffic flow over the network to determine the utilization of each link within the network. This information aids network designers in assessing how close their network is to capacity.

# Features:
CSV File Loading: The tool can load network configurations and traffic data from CSV files, providing flexibility in data input.

Traffic Modelling: Utilizing the loaded network configurations and traffic data, the tool models the traffic flow over the network.

Link Utilization Analysis: Based on the traffic modelling, the tool calculates and displays the utilization of each link within the network.

Visualization: The tool may provide visual representations of the network topology and link utilizations for easier interpretation by network designers.

Capacity Assessment: By analyzing link utilizations, the tool assists network designers in assessing how close the network is to its capacity limits.

# System Requirements
Ubuntu Destop OS

Chrome Browser installed.(Optional)

## Tool Used
Language: C++17

Build Tool: CMake

IPC: gRPC

Gtest: Unit testing

Pyvis library: To visualize network topology

Logging: spdlog

Formatting: clang-format

Editor: VS Code


# Usage:
## Build and Compile
Download source code and goto dir Network_Modelling_Tool/

mkdir build

cd build

cmake build ..

make

All libraries will be generated to lib/

All executables and configuration files will be generated to bin/


## Input Data Preparation and configuration:
Network_Modelling_Tool/net_conf.csv

Network_Modelling_Tool/traffic_conf.csv

Use above Two files to configure nm_tool.

## Run

nm_client is the user interface and it will initiate the traffic modelling process by sending request to  nm_tool.

The tool calculates traffic flows and link utilizations based on the input data, generates reports and sends back to nm_client.

Goto dir Network_Modelling_Tool/bin/

./nm_tool

./nm_client

## Viewing Results:
Graphical reports will be generated in file Output.html.

This file will be automatically opened in chrome-browser of linux desktop. 

if not opened, you can open it in any preffered browser.

The output will be in the form of network topology which will show details about the calculated link utilizations, highlighting links nearing capacity.

Red node means, node whose capacity is exhausted.

Yellow node means, node whose utilization is nearing capacity.

Green node means, node is doing well.

Red links means, path has been exhusted.




