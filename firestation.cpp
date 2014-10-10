#include "firestation.hpp"

fireStation::fireStation()
{
    loot_val = rand() % (15 - 5) + 5;
    enter_building();
    building_type(4,spawn_entity_spots,spawn_loot_spots,width,length, loot_val);

}
void fireStation::get_info(int& ref_width, int& ref_length, std::string& ref_name)
{
    ref_width = width;
    ref_name = name;
    ref_length= length;
}
