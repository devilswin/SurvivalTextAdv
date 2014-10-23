#ifndef Buildings_HPP
#define Buildings_HPP
#include <cstring>
#include <cmath>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "loot.hpp"
class Buildings : public loot
{
private:
    int width, length, height, volume, area, amount_of_loot_spawns, amount_of_entity_spawn, max_width,max_length, min_length,min_width;

    void spawn_entity_alg(int area_entity_spawn);
    void spawn_loot(int area_to_spawn_loot);
    void generate_dimensions();
    bool in_building;
public:
    Buildings();
    std::string name_of_type;
    std::string name;
     bool exit_building();
    bool enter_building();
    void building_type(int houseVal,int& entity_spawns, int& loot_spawns,int& dimensions_width, int& dimensions_length,int& loot_val, std::string build_name);

};

#endif // Buildings_HPP
