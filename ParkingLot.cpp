#include "ParkingLot.h"
#include "Billing.h"
#include <iostream>
using namespace std;

void ParkingLot::parkVehicle(string num, string type) {
    vehicles.push_back(Vehicle(num, type));
    cout << "Vehicle Parked Successfully\n";
}

void ParkingLot::removeVehicle(string num) {
    for(int i = 0; i < vehicles.size(); i++) {
        if(vehicles[i].number == num) {
            int bill = Billing::calculateBill(vehicles[i].type, vehicles[i].entryTime);
            cout << "Bill: " << bill << endl;
            vehicles.erase(vehicles.begin() + i);
            return;
        }
    }
    cout << "Vehicle Not Found\n";
}

void ParkingLot::displayVehicles() {
    for(auto &v : vehicles) {
        cout << v.number << " - " << v.type << endl;
    }
}