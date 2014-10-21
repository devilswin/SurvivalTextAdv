#ifndef ENTITY_HPP
#define ENTITY_HPP
#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <random>

class Entity
{
private:
    int level, health, damage, strength, intelligence, exp_dropped,loot_dropRate, inventory_sized,boss_multiplier, loot_drop_val;
    std::string ent_name;
    std::string faction;
    bool ent_boss;
public:
    void above_100_check();//see if any stat is above 100, if so, set to zero
    void set_droprate(int inp_drop); //Sets the drop rate
    void set_health(int& inp_health); //sets the healt
    void set_level(int& inp_lvl);//sets the level
    void set_strength(int& inp_strength,int& inventory_size_inp);//sets the strength
    void make_boss(bool is_boss);//sets whether or not the entity is a boss
    void set_name_ent(std::string& inp_name);//sets the entities name
    void generate_stats(); //generates the stats
    void set_faction(std::string fac_name); //sets the faction
    void get_stats(int& heal, int& lvl, int& inventory, std::string& name_to_out, bool& boss_status); //allows other functions to acsess the values
    Entity();
};

#endif // ENTITY_HPP
