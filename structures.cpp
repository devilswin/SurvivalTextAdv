#include "structures.hpp"

Structures::Structures()
{
}
void Structures::spawn_entity_alg(int area_to_spawn_in)
{
    amount_of_entity_spawn = area_to_spawn_in / 7;
    std::cout << "Entities: " << amount_of_entity_spawn << std::endl;
}
void Structures::spawn_loot(int area_to_spawn_loot)
{
    amount_of_loot_spawns = area_to_spawn_loot / 5;
    std::cout << "Loot: " << amount_of_loot_spawns << std::endl;
}
void Structures::building_type(int houseVal, int& entity_spawns, int& loot_spawns, int& dimensions_width, int& dimensions_length, int& loot_val)
{
    min_length = houseVal * 3;
    min_width = houseVal * 3;
    max_length = houseVal*6;
    max_width = houseVal*6;
    generate_dimensions();
    spawn_entity_alg(area);
    spawn_loot(area);
    entity_spawns =amount_of_entity_spawn;
    loot_spawns = amount_of_loot_spawns;
set_lootable(in_building);
    assign_values(loot_val,5,loot_spawns,10);

    dimensions_length = length;
    dimensions_width = width;

}
void Structures::generate_dimensions()
{
    length = rand() % (max_length-min_length)+min_length;
    width = rand() % (max_width-min_width)+min_width;
    area = length * width;
}
bool Structures::enter_building()
{
    return in_building = true;
}
bool Structures::exit_building()
{
    return in_building = false;
}
