// HanoiGame.h

# ifndef HANOIGAME_H
# define HANOIGAME_H

# include "HanoiTower.h"

# include <vector>

class HanoiGame {

public:
    std::vector<HanoiTower> frontier;
    std::vector<HanoiTower> closed;

    HanoiGame() {}
    ~HanoiGame() {}

    HanoiTower search(const int&);
    std::vector<int, int> solution();
};

# endif