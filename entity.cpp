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
void Entity::set_name_ent(std::string& inp_name)
{
    ent_name = inp_name;
}
void Entity::set_level(int& inp_lvl)
{
    level = inp_lvl;
    loot_drop_val = inp_lvl;
}
void Entity::set_strength(int& inp_strength)
{
    strength = inp_strength;
    inventory_sized = strength * 6;
}
void Entity::set_charisma(int& inp_charisma)
{
    charisma = inp_charisma;
}
void Entity::set_luck(int& inp_luck)
{
    luck = inp_luck;
}
void Entity::set_awarness(int& inp_awarness)
{
    awarness = inp_awarness;
}
void Entity::set_magicism(int& inp_magicism)
{
    magicism = inp_magicism;
}
void Entity::set_int(int& inp_int)
{
    intelligence = inp_int;
}
void Entity::set_speed(int& inp_speed)
{
    speed = inp_speed;
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

}
void Entity::set_faction(std::string fac_name)
{
    faction = fac_name;
}

void Entity::generate_stats()
{

    general_skills["Defense"] = magicism * 2.5;
    general_skills["Conjuration"] = magicism * 2.5;
    general_skills["Fire"] = magicism *2.5;
    general_skills["Ice"] = magicism *2.5;
    general_skills["Unarmed"] = strength*2.5;
    general_skills["Melee"] = strength*2.5;
    general_skills["Computers"] = intelligence*2.5;
    general_skills["Robotics"]= intelligence*2.5;
    general_skills ["Speech"] = charisma*2.5;
    general_skills["Barter"] = charisma*2.5;
    general_skills["Gambling"]= luck*2.5;
    general_skills["Guns"] = speed*2.5;
   general_skills["Energy_guns"] = speed*2.5;
    general_skills["Repair"] = intelligence*2.5;
    mana_pool = magicism *3 + speed;
   general_skills["Survival"] = awarness*2.5;
    health = (strength*(general_skills["Survival"]/10))*boss_multiplier;


}

