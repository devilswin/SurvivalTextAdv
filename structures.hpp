#ifndef STRUCTURES_HPP
#define STRUCTURES_HPP
#include <cstring>
#include <cmath>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "loot.hpp"
class Structures : public loot
{
private:
    int width, length, height, volume, area, amount_of_loot_spawns, amount_of_entity_spawn, max_width,max_length, min_length,min_width;
    void spawn_entity_alg(int area_entity_spawn);
    void spawn_loot(int area_to_spawn_loot);
    void generate_dimensions();
public:
    Structures();

    void building_type(int houseVal,int& entity_spawns, int& loot_spawns,int& dimensions_width, int& dimensions_length,int& loot_val);

};

#endif // STRUCTURES_HPP
