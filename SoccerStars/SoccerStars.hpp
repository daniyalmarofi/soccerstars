#ifndef __FIELDRUNNERS__
#define __FIELDRUNNERS__
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "../GameManager/GameManager.hpp"

using namespace std;

class SoccerStars {
   public:
    SoccerStars();
    void run();
    void get_rounds_number();
    void get_goals_number();

   private:
    GameManager manager;
    int rounds_number;
    int goals_number;
};

#endif