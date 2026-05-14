#ifndef AINAVIGATION_H
#define AINAVIGATION_H

#include "NavigationSystem.h"

class AINavigation : public NavigationSystem {
public:
    void navigate() {
        cout << "AI Navigation Active\n";
    }
};

#endif
