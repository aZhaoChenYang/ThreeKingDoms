//
// Created by zhaochenyang on 2023/3/20.
//


#include "soldier/include/baseSoldier.h"

namespace threekingdoms {

    int baseSoldier::getCurrentCount() const {
        return mCurrentCount;
    }

    float baseSoldier::getExSpeedValue() const {
        return mExSpeedValue;
    }

    bool baseSoldier::getIsAttack() const {
        return isAttack;
    }

    void baseSoldier::setIsAttack(bool attack) {
        isAttack = attack;
    }
}