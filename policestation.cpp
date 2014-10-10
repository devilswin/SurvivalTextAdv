#include "policestation.hpp"


PoliceStation::PoliceStation()
{
    loot_val = rand() % (20 - 10) + 10;
    enter_building();
    building_type(5,spawn_entity_spots,spawn_loot_spots,width,length, loot_val);

}
void PoliceStation::get_info(int& ref_width, int& ref_length, std::string& ref_name)
{
    ref_width = width;
    ref_name = name;
    ref_length= length;
}
