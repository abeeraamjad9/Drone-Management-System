#ifndef AUTHMANAGER_H
#define AUTHMANAGER_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class AuthManager {
public:
    void registerUser(string user, string pass) {
        ofstream file("Users.txt", ios::app);
        file << user << " " << pass << endl;
        file.close();
        cout << "User Registered Successfully\n";
    }

    bool login(string user, string pass) {
        ifstream file("Users.txt");
        string u, p;
        while (file >> u >> p) {
            if (u == user && p == pass) {
                file.close();
                return true;
            }
        }
        file.close();
        return false;
    }
};

#endif
