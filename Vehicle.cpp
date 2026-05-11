#include "Vehicle.h"
#include <ctime>

Vehicle::Vehicle(string num, string t) {
    number = num;
    type = t;
    entryTime = time(0);
}