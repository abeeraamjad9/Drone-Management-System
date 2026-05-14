#ifndef NAVIGATIONSYSTEM_H
#define NAVIGATIONSYSTEM_H

#include <iostream>
using namespace std;

class NavigationSystem {
public:
    virtual ~NavigationSystem() {}
    virtual void navigate() {
        cout << "Drone Navigating...\n";
    }
};

#endif
