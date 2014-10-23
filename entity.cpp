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
    if(speech > 100)
        speech = 100;
    if(loot_dropRate > 100)
        loot_dropRate = 100;
    if(guns > 100)
        guns = 100;
    if(barter > 100)
        barter = 100;
    if(energy_guns > 100)
        energy_guns = 100;
    if(gambling > 100)
        gambling = 100;
    if(fire > 100)
        fire = 100;
    if(ice > 100)
        ice= 100;
    if(conjuration > 100)
        conjuration = 100;
    if(defense > 100)
        defense = 100;
    if(computers > 100)
        computers = 100;
    if(robotics > 100)
        robotics = 100;
    if(melee > 100)
        melee = 100;
    if(unarmed > 100)
        unarmed = 100;
    if(repair > 100)
        repair = 100;
}
void Entity::set_faction(std::string fac_name)
{
    faction = fac_name;
}

void Entity::generate_stats()
{
    health = (strength*(survival/10))*boss_multiplier;
    defense = magicism * 2.5;
    conjuration = magicism * 2.5;
    fire = magicism *2.5;
    ice = magicism *2.5;
    unarmed = strength*2.5;
    melee = strength*2.5;
    guns = strength*2.5;
    computers = intelligence*2.5;
    robotics= intelligence*2.5;
    speech = charisma*2.5;
    barter = charisma*2.5;
    gambling = luck*2.5;
    guns = speed*2.5;
    mana_pool = magicism *3 + speed;


}
