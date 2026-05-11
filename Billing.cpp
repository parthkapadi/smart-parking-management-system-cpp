#include "Billing.h"
#include <ctime>

int Billing::calculateBill(string type, time_t entryTime) {
    time_t exitTime = time(0);
    int hours = difftime(exitTime, entryTime) / 3600 + 1;

    if(type == "Bike") return hours * 10;
    if(type == "Car") return hours * 20;
    if(type == "Truck") return hours * 30;

    return 0;
}