#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle {
public:
    string number;
    string type;
    time_t entryTime;

    Vehicle(string num, string t);
};

#endif