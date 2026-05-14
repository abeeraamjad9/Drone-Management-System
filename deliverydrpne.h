#ifndef DELIVERYDRONE_H
#define DELIVERYDRONE_H

#include "Drone.h"

class DeliveryDrone : public Drone {
private:
    double weightLimit;

public:
    DeliveryDrone(int i, string n, int b, string s, double w)
        : Drone(i, n, b, s) {
        weightLimit = w;
    }

    void display() {
        Drone::display();
        cout << "Weight Limit: " << weightLimit << endl;
    }
};

#endif
