#include "shack.hpp"

shack::shack()
{
    loot_val = rand() % 6;
    enter_building();
    building_type(1,spawn_entity_spots,spawn_loot_spots,width,length, loot_val);

}
void shack::get_info(int& ref_width, int& ref_length, std::string& ref_name)
{
    ref_width = width;
    ref_name = name;
    ref_length= length;
}
