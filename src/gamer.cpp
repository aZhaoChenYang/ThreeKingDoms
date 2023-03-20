//
// Created by zhaochenyang on 2023/3/20.
//

#include "gamer.h"

#include <utility>
#include <iostream>

namespace threekingdoms {

    gamer::gamer(std::vector<baseSoldier *> selfCamp, std::vector<baseSoldier *> otherCamp) :
        mSelfCamp(std::move(selfCamp)), mOtherCamp(std::move(otherCamp)) {
        for (auto i: mSelfCamp) {
            mAllCamp.push_back(i);
        }
        for (auto i: mOtherCamp){
            mAllCamp.push_back(i);
        }
    }


    void gamer::run() {
        srand(time(nullptr));
        for(int i = 1;;++i) {
            std::cout << "回合" << i << std::endl;
            if(gameover()) break;
            for(baseSoldier* attack =  getAttackSoldier(); attack != nullptr; attack = getAttackSoldier())
            {
                attack->setIsAttack(true);
                baseSoldier* defend = getDefendSoldier(attack);
            }


        }
    }

    bool gamer::gameover() {
        for(auto i: mSelfCamp)
        {
            if(i->getCurrentCount() == 0){
                std::cout << "对方阵营获胜" << std::endl;
                return true;
            }
        }
        for (auto i: mOtherCamp)
        {
            if(i->getCurrentCount() == 0) {
                std::cout << "己方阵营获胜" << std::endl;
                return true;
            }
        }
        return false;
    }

    baseSoldier *gamer::getAttackSoldier() {
        std::sort(mAllCamp.begin(), mAllCamp.end(),
                  [](baseSoldier* soldier1, baseSoldier* soldier2) -> bool
                  {return soldier1->getExSpeedValue() > soldier2->getExSpeedValue();});
        for(auto i: mAllCamp) {
            if(!i->getIsAttack()) {
                return i;
            }
        }
        return nullptr;
    }

    baseSoldier *gamer::getDefendSoldier(baseSoldier *attack) {
        for (auto i: mSelfCamp) {
            if(attack == i){
                return mOtherCamp[rand() % mOtherCamp.size()];
            }
        }
        for (auto i: mOtherCamp) {
            if(attack == i){
                return mSelfCamp[rand() % mSelfCamp.size()];
            }
        }
        return nullptr;
    }



}
