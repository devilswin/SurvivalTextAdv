#ifndef SHACK_HPP
#define SHACK_HPP
#include "buildings.hpp"
#include <cstring>
#include <cmath>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include "loot.hpp"
class shack: public Buildings
{
private:
    int spawn_entity_spots, spawn_loot_spots, width,length, loot_val;

public:
    void get_info(int& ref_width, int& ref_length, std::string& ref_name);
    shack(Player &usrPlyr);
     std::string name = "Shack";
};

#endif // SHACK_HPP
