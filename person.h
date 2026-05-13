#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    string role;

public:
    Person() {
        name = "";
        role = "";
    }

    Person(string n, string r) {
        name = n;
        role = r;
    }

    string getName() {
        return name;
    }

    string getRole() {
        return role;
    }
};

#endif
