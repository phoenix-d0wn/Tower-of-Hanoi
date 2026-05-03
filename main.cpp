// main.cpp

# include "HanoiTower.h"
# include "HanoiGame.h"

# include <iostream>

int main() {

    // TEST
    HanoiTower tower(3);

    tower.printTower();
    std::cout << "\n\nIs Solved?: " << tower.isSolved << "\n";

    tower.moveDisk(0, 2);
    tower.moveDisk(0, 1);
    tower.moveDisk(2, 1);
    tower.moveDisk(0, 2);
    tower.moveDisk(1, 0);
    tower.moveDisk(1, 2);
    tower.moveDisk(0, 2);


    tower.printTower();
    std::cout << "\n\nIs Solved?: " << tower.isSolved << "\n";

    return 0;
}