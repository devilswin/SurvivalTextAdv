#include "buildings.hpp"

Buildings::Buildings()
{
}
void Buildings::spawn_entity_alg(int area_to_spawn_in)
{
    amount_of_entity_spawn = area_to_spawn_in / 7;

}
void Buildings::spawn_loot(int area_to_spawn_loot)
{
    amount_of_loot_spawns = area_to_spawn_loot / 5;

}
void Buildings::building_type(int houseVal, int& entity_spawns, int& loot_spawns, int& dimensions_width, int& dimensions_length, int& loot_val, std::string build_name)
{
    name = build_name;
    min_length = houseVal * 3; //Sets the random Dimensions so that each building that spawns will be diffrent
    min_width = houseVal * 3;
    max_length = houseVal*6;
    max_width = houseVal*6;
    generate_dimensions();
    spawn_entity_alg(area);//Genrates how many spots an entity could spawn
    spawn_loot(area);//Same as above just for loot
    entity_spawns =amount_of_entity_spawn;
    loot_spawns = amount_of_loot_spawns;
    set_lootable(in_building); //Will check if player is in building so that they could loot stuff
    assign_values(loot_val,5,loot_spawns,10, houseVal); //generates the loot
    out_loot(building_loot_present);

    dimensions_length = length;
    dimensions_width = width;

}
void Buildings::generate_dimensions()
{
    length = rand() % (max_length-min_length)+min_length;//Sets the random Dimensions so that each building that spawns will be diffrent
    width = rand() % (max_width-min_width)+min_width;
    area = length * width;
}
bool Buildings::enter_building()
{
    std::cout << "You have entered a " << name << std::endl;

    return in_building = true;
}
bool Buildings::exit_building()
{
    std::cout << "You have left a " << name << std::endl;
    return in_building = false;
}
void Buildings::extract_loot(std::vector<int> player_inventory)
{
    for(size_t i = 0; i < building_loot_present.size(); i++)
    {
        currently_selected_contain = building_loot_present[i];
        std::cout << "The contents of the currently selected inventory are: " << currently_selected_contain.contents.size() << ": ";
        for(size_t q = 0; q < currently_selected_contain.contents.size(); q++)
            std::cout << currently_selected_contain.contents[q] << ",";
        std::cout << std::endl;
        bool is_done = false;
         std::cout << "Please Select Which Item To take:" << std::endl;

       while(is_done == false)
        {

           size_t qy = 0;
            while(qy < currently_selected_contain.contents.size())
            {
                std::cout << qy + 1 << ")" << currently_selected_contain.contents[qy] << "\n";
                qy++;
            }
            std::cout << "\n";
            std::string uinp;
            std::cin >> uinp;
            int choiced = atoi(uinp.c_str());
            std::cout << "You have taken the " << currently_selected_contain.contents[choiced-1] << std::endl;
        }
    }
}
