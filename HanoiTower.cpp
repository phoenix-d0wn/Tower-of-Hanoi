// HanoiTower.cpp

# include "HanoiTower.h"

# include <iostream>

HanoiTower::HanoiTower(const int& disks) {

    isSolved = false;

    pole.resize(NUM_OF_POLES);

    for (int i=disks; i>=1; i--) {
        pole[0].push_back(i);
        winCond.push_back(i);
    }

}

HanoiTower::~HanoiTower() {}

// ********

bool HanoiTower::moveDisk
    (const int& a, const int& b) {
    
    if (!pole[a].empty() && !pole[b].empty()) {

        if (pole[a].back() < pole[b].back()) {
            int moved = pole[a].back();
            pole[a].pop_back();
            pole[b].push_back(moved); 
        
            checkSolved();

            return true;
        }

        checkSolved();


    } else if (!pole[a].empty() && pole[b].empty()) {

        int moved = pole[a].back();
        pole[a].erase(pole[a].end());
        pole[b].push_back(moved);

        checkSolved();

        return true;

    }

    return false;
    
}

void HanoiTower::checkSolved() {
    if (pole[2] == winCond)
        isSolved = true;
}

// test methods
const void HanoiTower::printTower() {

    char label = '\0';

    std::cout << "\n";
    for (int i=0; i<NUM_OF_POLES; i++) {

        label = i + 65;
        std::cout << label << ": [";

        for (auto x : pole[i])
            std::cout << x << ", ";

        std::cout << "]; ";
    }
}