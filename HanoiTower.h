// HanoiTower.h

# ifndef HANOITOWER_H
# define HANOITOWER_H

# include <stack>
# include <vector>
# include <string>

const int NUM_OF_POLES = 3;

class HanoiTower {

private:

public:
    /* POLE FORMAT
        [ 0 : [], 1 : [], 2 : [] ] */
    std::vector<std::vector<int>> pole;

    // Win condition is pole[2] = [n, n-1, n-2, ..., 1]; 
    //  n: # of disks
    std::vector<int> winCond;

    bool isSolved;

    HanoiTower(const int&);
    ~HanoiTower();

    
    bool moveDisk(const int&, const int&);  // returns false 
                                            // if move is illegal
    void checkSolved();

    // test method(s)
    const void printTower();

};

# endif