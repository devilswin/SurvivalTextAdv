#include "military_base.hpp"



Military_Base::Military_Base()
{
    loot_val = rand() % (50 - 25) + 25;
    name_of_type = name;

    building_type(10,spawn_entity_spots,spawn_loot_spots,width,length, loot_val,name);

}
void Military_Base::get_info(int& ref_width, int& ref_length, std::string& ref_name)
{
    ref_width = width;
    ref_name = name;
    ref_length= length;
}
