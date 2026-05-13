#ifndef RENTAL_H
#define RENTAL_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Rental {
public:
    void rentDrone(string customer, int droneId) {
        ofstream file("Rentals.txt", ios::app);
        file << customer << " " << droneId << endl;
        file.close();
        cout << "Drone Rented Successfully\n";
    }
};

#endif
