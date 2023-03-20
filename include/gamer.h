//
// Created by zhaochenyang on 2023/3/20.
//

#ifndef THREEKINGDOMS_GAMER_H
#define THREEKINGDOMS_GAMER_H


#include <vector>
#include "soldier/include/baseSoldier.h"

namespace threekingdoms {
    class gamer {
    public:
        gamer(std::vector<baseSoldier *> selfCamp, std::vector<baseSoldier *> otherCamp);

        void run();

        bool gameover();

        baseSoldier* getAttackSoldier();

        baseSoldier* getDefendSoldier(baseSoldier* attack);


    private:
        std::vector<baseSoldier *> mSelfCamp;
        std::vector<baseSoldier *> mOtherCamp;
        std::vector<baseSoldier *> mAllCamp;
    };
}

#endif //THREEKINGDOMS_GAMER_H
