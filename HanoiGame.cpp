// HanoiGame.cpp

# include "HanoiGame.h"

# include <iostream>    // for testing

HanoiTower HanoiGame::search(const int& disks) {

    HanoiTower tower(disks);
    frontier.push_back(tower);

    while (!frontier.empty()) {

        HanoiTower expanded = frontier[0];
        frontier.erase(frontier.begin());
        closed.push_back(expanded);

        // for testing
        std::cout << "\n=======";

        std::cout << "\nFRONTIER:";
        for (auto t : frontier)
            t.printTower();

        std::cout << "\n\nCLOSED:";
        for (auto t : closed)
            t.printTower();

        char key;
        std::cout << "\nPress any key...";
        std::cin >> key;
        // ****

        for (int i=0; i<disks; i++) {
            for (int j=0; j<disks; j++) {

                if (i==j)
                    continue;

                tower = expanded;
                tower.moveDisk(i, j);

                // if (tower.isSolved)
                //     return tower;

                bool inFrontier = false;
                bool inClosed   = false;

                if (tower.pole!=expanded.pole)
                    frontier.push_back(tower);

                // std::cout << "\nAdded to frontier...";
            }
        }


    }

    return tower;

}