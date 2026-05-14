#ifndef ADMIN_H
#define ADMIN_H

#include "Person.h"

class Admin : public Person {
public:
    Admin(string n) : Person(n, "Admin") {}

    void showAdmin() {
        cout << "Admin Name: " << name << endl;
    }
};

#endif
