#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <iostream>
#include <fstream>
#include <string>
#include "FleetManager.h"
using namespace std;

class DataManager {
public:
    void saveDrones(FleetManager &fleet) {
        ofstream file("Drones.txt");
        for (int i = 0; i < fleet.getSize(); i++) {
            Drone* d = fleet.getDrone(i);
            file << d->getId() << " " << d->getName() << " " << d->getStatus() << endl;
        }
        file.close();
        cout << "Drone Data Saved\n";
    }

    void loadDrones() {
        ifstream file("Drones.txt");
        int id;
        string name;
        string status;
        while (file >> id >> name >> status) {
            cout << "Drone ID: " << id << endl;
            cout << "Drone Name: " << name << endl;
            cout << "Status: " << status << endl;
            cout << "-------------------" << endl;
        }
        file.close();
    }

    void showUsers() {
        ifstream file("Users.txt");
        string user, pass;
        while (file >> user >> pass) {
            cout << "Username: " << user << endl;
        }
        file.close();
    }

    void showPayments() {
        ifstream file("Payments.txt");
        string customer;
        double amount;
        while (file >> customer >> amount) {
            cout << customer << " Paid: " << amount << endl;
        }
        file.close();
    }

    void showRentals() {
        ifstream file("Rentals.txt");
        string customer;
        int droneId;
        while (file >> customer >> droneId) {
            cout << customer << " rented Drone " << droneId << endl;
        }
        file.close();
    }
};

#endif
