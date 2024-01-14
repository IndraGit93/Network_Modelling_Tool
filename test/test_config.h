#ifndef TEST_CONFIG_H
#define TEST_CONFIG_H
#include <string>
using std::string;

string csv_net_conf =
        "LinkId,Start,End,Capacity,Weight\n"
        "1,A,B,10,3\n"
        "2,A,D,10,5\n"
        "3,A,C,10,2\n"
        "4,B,A,10,3\n"
        "5,B,E,10,12\n"
        "6,C,A,10,2\n"
        "7,C,D,10,4\n"
        "8,C,E,10,1\n"
        "9,E,B,10,12\n"
        "10,E,C,10,1\n"
        "11,D,A,10,5\n"
        "12,D,C,10,4";

string csv_traffic_conf =
        "src,dest,demand\n"
        "A,E,9\n"
        "B,A,8\n"
        "D,A,5";

#endif //END OF TEST_CONFIG_H