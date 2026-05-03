// HanoiGame.h

# ifndef HANOIGAME_H
# define HANOIGAME_H

# include "HanoiTower.h"

# include <queue>

class HanoiGame {

public:
    std::queue<HanoiTower> frontier;
    std::queue<HanoiTower> closed;

    HanoiGame() {}
    ~HanoiGame() {}

    HanoiTower search(const int&);
    std::vector<int, int> solution();
};

# endif