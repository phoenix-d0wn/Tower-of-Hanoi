// HanoiGame.cpp

# include "HanoiGame.h"

HanoiTower HanoiGame::search(const int& disks) {

    HanoiTower tower(disks);
    frontier.push(tower);

    while (!frontier.empty()) {

        HanoiTower expanded = frontier.front();
        frontier.pop();
        closed.push(expanded);

        for (int i=0; i<disks; i++) {
            for (int j=0; j<disks; j++) {

                if (i==j)
                    continue;

                tower = expanded;
                tower.moveDisk(i, j);

                tower.checkWin();
                if (tower.isBeaten)
                    return tower;

                closed.push(tower);
            }
        }
    }

    return tower;

}