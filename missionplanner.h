#ifndef MISSIONPLANNER_H
#define MISSIONPLANNER_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class MissionPlanner {
public:
    void addMission(int missionId, int droneId, string area) {
        ofstream file("Missions.txt", ios::app);
        file << missionId << " " << droneId << " " << area << endl;
        file.close();
        cout << "Mission Added\n";
    }

    void showMissions() {
        ifstream file("Missions.txt");
        int mid, did;
        string area;
        while (file >> mid >> did >> area) {
            cout << "Mission ID: " << mid << endl;
            cout << "Drone ID: " << did << endl;
            cout << "Area: " << area << endl;
            cout << "-------------------" << endl;
        }
        file.close();
    }
};

#endif
