#include "entity.hpp"

Entity::Entity()
{

}
void Entity::set_droprate(int inp_drop)
{
    loot_dropRate = inp_drop;
}

void Entity::make_boss(bool is_boss)
{
    ent_boss = is_boss;
    if(is_boss == true)
        boss_multiplier = 4;
    else
        boss_multiplier = 1;
}
void Entity::set_health(int& inp_health)
{
    health = inp_health;
}
void Entity::set_name_ent(std::string& inp_name)
{
    ent_name = inp_name;
}
void Entity::set_level(int& inp_lvl)
{
    level = inp_lvl;
    loot_drop_val = inp_lvl;
}
void Entity::set_strength(int& inp_strength, int& inventory_size_inp)
{
    strength = inp_strength;
    inventory_sized = strength * 6;
    inventory_size_inp = inventory_sized;
}
void Entity::get_stats(int &heal, int &lvl, int &inventory, std::string &name_to_out, bool &boss_status)
{
    heal = health;
    lvl = level;
    inventory = inventory_sized;
    name_to_out = ent_name;
    boss_status = ent_boss;
}
void Entity::above_100_check()
{
    if(health > 100)
        health = 100;
    if(strength > 100)
        strength = 100;
    if(loot_dropRate > 100)
        loot_dropRate = 100;
    if(intelligence > 100)
        intelligence = 100;
}
void Entity::set_faction(std::string fac_name)
{
    faction = fac_name;
}

void Entity::generate_stats()
{

    damage = level * 3 * boss_multiplier;
    health = health*boss_multiplier;
    intelligence = level * boss_multiplier;
}
