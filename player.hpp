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
    int plyr_health, plyr_strength, plyr_level;
    std::vector<int> plyr_inventory;
    std::string plyr_name;
public:
    Player(std::string inp_name, const int& inp_hp,const  int& inp_st, const int& inp_lvl);
};

#endif // PLAYER_HPP
