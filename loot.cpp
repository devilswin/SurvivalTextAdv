#include "loot.hpp"

loot::loot()
{
}
void loot::assign_values(const int &value,const int &size, const int &spawn_points, const int& inventory_size, int& buildingVal)
{
    value_of_loot = value;
    amount_can_hold = inventory_size;

    spawn_in_loot(spawn_points,size, buildingVal);
}
void loot::spawn_in_loot(int spawn_loot_spots, int sizer, int building_num)
{

    if (building_num > 4) //Just used so that buildings with higher values will spawn a higher grade of loot
        amount_of_loot = rand() % (spawn_loot_spots -  building_num * 3) +  building_num * 3;
    else
        amount_of_loot = rand() % spawn_loot_spots;
    for(int i = 0; i < amount_of_loot; i++)//this will generate the loot and put it into a vector that will represent a chest or container of sorts
    {
        size_of_loot = rand() % (sizer - 1) + 1  ;
        loot temp_loot;

        for(int q = 0; q < size_of_loot; q++)
        {
            int to_insert = rand() % value_of_loot;
            temp_loot.insert_into_inventory(to_insert);
        }

        loot_stacks.push_back(temp_loot);
    }
}
void loot::insert_into_inventory(int test)
{
    contents.push_back(test);
}
void loot::set_lootable(bool building_open)
{
    lootable = building_open;
}
void loot::out_loot(std::vector<loot> &loot_present)
{
    loot_present = loot_stacks;
}
