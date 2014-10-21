#ifndef POLICESTATION_HPP
#define POLICESTATION_HPP
#include "buildings.hpp"
#include <cstring>
#include <cmath>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include "loot.hpp"
class PoliceStation: public Buildings
{
private:
    int spawn_entity_spots, spawn_loot_spots, width,length, loot_val;

public:
    void get_info(int& ref_width, int& ref_length, std::string& ref_name);
    PoliceStation();
        std::string name = "Police Statiion";
};

#endif // POLICESTATION_HPP
