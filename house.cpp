#include "house.hpp"
house::house(Player &usrplyr)
{
    loot_val = rand() %  5;
    name_of_type = name;
    building_type(2,spawn_entity_spots,spawn_loot_spots,width,length, loot_val,name);

}
void house::get_info(int& ref_width, int& ref_length, std::string& ref_name)
{
    ref_width = width;
    ref_name = name;
    ref_length= length;
}
