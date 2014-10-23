#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "entity.hpp"
#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <random>
#include <vector>
class Player: public Entity
{
private:
    int  plstrength, plintelligence, plcharisma, plluck, plawarness, plmagicism, plspeed;
    std::vector<int> plyr_inventory;
    std::string plyr_name;
public:
    Player(std::string inp_name,int &inp_inte,int &inp_st,int &inp_charis, int &inp_magi, int &inp_speed, int &inp_lck, int& inp_awar);
};

#endif // PLAYER_HPP
