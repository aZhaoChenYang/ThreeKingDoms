//
// Created by zhaochenyang on 2023/3/20.
//

#ifndef THREEKINGDOMS_BASESOLDIER_H
#define THREEKINGDOMS_BASESOLDIER_H

#include <string>
#include "baseSoldier.h"

namespace threekingdoms {
    class baseSoldier {
    public:
        virtual std::string getSoldierName() = 0;

        int getCurrentCount() const;

        float getExSpeedValue() const;

        bool getIsAttack() const;

        void setIsAttack(bool attack);

    private:
        // 武将等级
        int mLevel = 1;
        // 当前可用兵力
        int mCurrentCount = 1;
        // 总兵力
        int mTotalCount = 1;
        // 速度
        float mExSpeedValue = 0;
        // 是否已经行动过
        bool isAttack = false;



    };
}

#endif //THREEKINGDOMS_BASESOLDIER_H
