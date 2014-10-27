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

    std::vector<loot> loot_stacks;
    int value_of_loot, size_of_loot, amount_of_loot, amount_can_hold;
    void spawn_in_loot(int spawn_loot_spots, int sizer, int building_num);
    void insert_into_inventory(int test);
    bool lootable;
public:
    void assign_values(const int& value, const int& size, const int& spawn_points, const int& inventory_size, int &buildingVal);
    void set_lootable(bool building_open);
    std::vector<int> contents;
    void out_loot(std::vector<loot>& loot_present);
    loot();
};

#endif // LOOT_HPP
