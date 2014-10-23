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
    if(survival > 100)
        survival = 100;
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

    defense = magicism * 2.5;
    conjuration = magicism * 2.5;
    fire = magicism *2.5;
    ice = magicism *2.5;
    unarmed = strength*2.5;
    melee = strength*2.5;
    computers = intelligence*2.5;
    robotics= intelligence*2.5;
    speech = charisma*2.5;
    barter = charisma*2.5;
    gambling = luck*2.5;
    guns = speed*2.5;
    energy_guns = speed*2.5;
    repair = intelligence*2.5;
    mana_pool = magicism *3 + speed;
    survival = awarness*2.5;
    health = (strength*(survival/10))*boss_multiplier;


}
void Entity::output_awarness_skill(int &survival_out, std::string &name_speskill_1)
{
    survival_out = survival;
    name_speskill_1 = "Survival";
}
void Entity::output_inte_skill(int &comp_out, int &robotics_out, int &repair_out, std::string &name_inteskill_1, std::string &name_inteskill_2, std::string &name_inteskill_3)
{
    comp_out = computers;
    robotics_out = robotics;
    repair_out = repair;
    name_inteskill_1 = "Computers";
    name_inteskill_2 = "Robotics";
    name_inteskill_3 = "Repair";
}
void Entity::output_mag_skill(int &fire_to_see, int &ice_to_see, int &def_to_see, int &conj_to_see, std::string &name_magskill_1, std::string &name_magskill_2, std::string &name_magskill_3, std::string &name_magskill_4)
{
    fire_to_see = fire;
    ice_to_see = ice;
    def_to_see = defense;
    conj_to_see = conjuration;
    name_magskill_1 = "Fire";
    name_magskill_2 = "Ice";
    name_magskill_3 = "Defense";
    name_magskill_4 = "Conjuration";
}
void Entity::output_speed_skill(int &guns_out, int &energy_guns_out, std::string &name_speskill_1, std::string &name_speskill_2)
{
guns_out = guns;
energy_guns_out = energy_guns;
name_speskill_1 = "Guns";
name_speskill_2 = "Energy Weapons";
}
void Entity::output_str_skill(int &unarmed_out, int &melee_out, std::string &name_strskill_1, std::string &name_strskill_2)
{
    unarmed_out = unarmed;
    melee_out = melee;
    name_strskill_1 = "Unarmed";
    name_strskill_2 = "Melee";
}
