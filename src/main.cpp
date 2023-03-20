#include <vector>
#include "soldier/include/wei/caocao.h"
#include "gamer.h"

int main() {
    threekingdoms::baseSoldier* cc = new threekingdoms::caocao;
    threekingdoms::baseSoldier* cc1 = new threekingdoms::caocao;
    std::vector<threekingdoms::baseSoldier*> selfCamp ;
    std::vector<threekingdoms::baseSoldier*> otherCamp ;
    selfCamp.push_back(cc);
    otherCamp.push_back(cc1);
    threekingdoms::gamer game(selfCamp, otherCamp);
    game.run();
    delete cc;
    delete cc1;
    return 0;
}
