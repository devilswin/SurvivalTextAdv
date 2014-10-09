#ifndef SHACK_HPP
#define SHACK_HPP
#include "structures.hpp"
#include <cstring>
#include <cmath>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include "loot.hpp"
class shack: public Structures
{
private:
    int spawn_entity_spots, spawn_loot_spots, width,length, loot_val;
    std::string name = "Shack";
public:
    void get_info(int& ref_width, int& ref_length, std::string& ref_name);
    shack();
};

#endif // SHACK_HPP