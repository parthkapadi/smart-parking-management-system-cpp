#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"
#include <vector>
using namespace std;

class ParkingLot {
private:
    vector<Vehicle> vehicles;

public:
    void parkVehicle(string num, string type);
    void removeVehicle(string num);
    void displayVehicles();
};

#endif