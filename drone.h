#ifndef DRONE_H
#define DRONE_H

#include <iostream>
#include <string>
using namespace std;

class Drone {
protected:
    int id;
    string name;
    int battery;
    string status;

public:
    Drone() {
        id = 0;
        name = "";
        battery = 100;
        status = "Idle";
    }

    Drone(int i, string n, int b, string s) {
        id = i;
        name = n;
        battery = b;
        status = s;
    }

    virtual ~Drone() {}

    virtual void display() {
        cout << "Drone ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Battery: " << battery << endl;
        cout << "Status: " << status << endl;
    }

    int getId() {
        return id;
    }

    string getName() {
        return name;
    }

    string getStatus() {
        return status;
    }
};

#endif
