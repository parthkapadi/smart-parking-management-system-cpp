#ifndef BILLING_H
#define BILLING_H

#include <string>
using namespace std;

class Billing {
public:
    static int calculateBill(string type, time_t entryTime);
};

#endif