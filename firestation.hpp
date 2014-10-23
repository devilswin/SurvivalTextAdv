#ifndef FIRESTATION_HPP
#define FIRESTATION_HPP

#include "buildings.hpp"
#include <cstring>
#include <cmath>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include "loot.hpp"
class fireStation: public Buildings
{
private:
    int spawn_entity_spots, spawn_loot_spots, width,length, loot_val;
    std::string name = "Fire Station";
public:
    void get_info(int& ref_width, int& ref_length, std::string& ref_name);
    fireStation();
};
#endif // FIRESTATION_HPP
