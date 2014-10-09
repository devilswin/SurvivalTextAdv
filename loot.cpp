#include "loot.hpp"

loot::loot()
{
}
void loot::assign_values(const int &value,const int &size, const int &spawn_points, const int& inventory_size)
{
    value_of_loot = value;
    amount_can_hold = inventory_size;

    spawn_in_loot(spawn_points,size);
}
void loot::spawn_in_loot(int spawn_loot_spots, int sizer)
{
    amount_of_loot = rand() % spawn_loot_spots;
    std::cout << spawn_loot_spots << " vs " << amount_of_loot << std::endl;
    std::vector<loot> loot_stacks;
    for(int i = 0; i < amount_of_loot; i++)
    {
        size_of_loot = rand() % sizer ;
        if(size_of_loot == 0)
                size_of_loot = rand() % sizer ;

        loot temp_loot;
        for(int q = 0; q < size_of_loot; q++)
        {
            int to_insert = rand() % value_of_loot;
            temp_loot.insert_into_inventory(to_insert);
        }
        loot_stacks.push_back(temp_loot);
        std::cout<< "Value of loot test: ";
        for (int z = 0; z < loot_stacks[i].contents.size(); z++)
            std::cout  << loot_stacks[i].contents[z];

        std::cout << std::endl;
    }
}
void loot::insert_into_inventory(int test)
{
    contents.push_back(test);
}

