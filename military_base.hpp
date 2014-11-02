#ifndef MILITARY_BASE_HPP
#define MILITARY_BASE_HPP

#include "buildings.hpp"
#include <cstring>
#include <cmath>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include "loot.hpp"
#include "player.hpp"
class Military_Base: public Buildings
{
private:
    int spawn_entity_spots, spawn_loot_spots, width,length, loot_val;

public:
    void get_info(int& ref_width, int& ref_length, std::string& ref_name);
    Military_Base(Player& usrplyr);
        std::string name = "Military Base";
};
#endif // MILITARY_BASE_HPP
