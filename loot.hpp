#ifndef LOOT_HPP
#define LOOT_HPP
#include <cstring>
#include <cmath>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <iostream>

#include <vector>
class loot
{
private:
    std::vector<int> contents;
    int value_of_loot, size_of_loot, amount_of_loot, amount_can_hold;
    void spawn_in_loot(int spawn_loot_spots, int sizer);
    void insert_into_inventory(int test);
    bool lootable;
public:
    void assign_values(const int& value, const int& size, const int& spawn_points, const int& inventory_size);
    void set_lootable(bool building_open);
    loot();
};

#endif // LOOT_HPP
