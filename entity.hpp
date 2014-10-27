#ifndef ENTITY_HPP
#define ENTITY_HPP
#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <random>
#include <map>
class Entity
{
private:
    int level, exp_dropped,loot_dropRate,boss_multiplier, loot_drop_val;
    int  strength, intelligence, charisma, luck, awarness, magicism, speed;
    int health, damage,  inventory_sized, mana_pool;
    float reload_multiplier, attack_speed;
    std::map<std::string, int> general_skills;
    std::string ent_name;
    std::string faction;
    bool ent_boss;
public:
    void out_gen_skills(std::string name_skill, int& skill_value);
    void above_100_check();//see if any stat is above 100, if so, set to zero
    void set_int(int& inp_int);
    void set_magicism(int& inp_magicism);
    void set_awarness(int& inp_awareness);
    void set_luck(int& inp_luck);
    void set_charisma(int& inp_charisma);
    void set_droprate(int inp_drop); //Sets the drop rate
    void set_level(int& inp_lvl);//sets the level
    void set_speed(int& inp_speed);
    void set_strength(int& inp_strength);//sets the strength
    void make_boss(bool is_boss);//sets whether or not the entity is a boss
    void set_name_ent(std::string& inp_name);//sets the entities name
    void generate_stats(); //generates the stats
    void set_faction(std::string fac_name); //sets the faction
    void get_stats(int& heal, int& lvl, int& inventory, std::string& name_to_out, bool& boss_status); //allows other functions to acsess the values
    Entity();
};

#endif // ENTITY_HPP
