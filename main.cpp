#include <iostream>
#include "ParkingLot.h"
using namespace std;

int main() {
    ParkingLot lot;
    int choice;
    string num, type;

    while(true) {
        cout << "\n1. Park Vehicle\n2. Remove Vehicle\n3. Display\n4. Exit\n";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter Vehicle Number: ";
                cin >> num;
                cout << "Enter Type (Bike/Car/Truck): ";
                cin >> type;
                lot.parkVehicle(num, type);
                break;

            case 2:
                cout << "Enter Vehicle Number: ";
                cin >> num;
                lot.removeVehicle(num);
                break;

            case 3:
                lot.displayVehicles();
                break;

            case 4:
                return 0;
        }
    }
}