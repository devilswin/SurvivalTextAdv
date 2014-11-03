#ifndef Buildings_HPP
#define Buildings_HPP
#include <cstring>
#include <cmath>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <locale.h>
#include <ctype.h>
#include "player.hpp"
#include "loot.hpp"
class Buildings : public loot
{
private:
    int width, length, height, volume, area, amount_of_loot_spawns, amount_of_entity_spawn, max_width,max_length, min_length,min_width;
    std::vector<loot> building_loot_present;
    loot currently_selected_contain;
    void spawn_entity_alg(int area_entity_spawn);
    void spawn_loot(int area_to_spawn_loot);
    void generate_dimensions();
    bool in_building;
public:
    Buildings();
    std::string name_of_type;
    std::string name;
     bool exit_building();
    bool enter_building();
    void building_type(int houseVal,int& entity_spawns, int& loot_spawns,int& dimensions_width, int& dimensions_length,int& loot_val, std::string build_name);
    void extract_loot(Player& userplyr);
};
class Military_Base: public Buildings
{
private:
    int spawn_entity_spots, spawn_loot_spots, width,length, loot_val;

public:
    void get_info(int& ref_width, int& ref_length, std::string& ref_name);
    Military_Base(Player& usrplyr);
        std::string name = "Military Base";
};
class PoliceStation: public Buildings
{
private:
    int spawn_entity_spots, spawn_loot_spots, width,length, loot_val;

public:
    void get_info(int& ref_width, int& ref_length, std::string& ref_name);
    PoliceStation(Player& usrPlyr);
        std::string name = "Police Statiion";
};
class foodStore: public Buildings
{
private:
    int spawn_entity_spots, spawn_loot_spots, width,length, loot_val;
    std::string name = "Food Store";
public:
    void get_info(int& ref_width, int& ref_length, std::string& ref_name);
    foodStore(Player& usrPlyr);
};
class fireStation: public Buildings
{
private:
    int spawn_entity_spots, spawn_loot_spots, width,length, loot_val;
    std::string name = "Fire Station";
public:
    void get_info(int& ref_width, int& ref_length, std::string& ref_name);
    fireStation(Player& usrPlyr);
};
class shack: public Buildings
{
private:
    int spawn_entity_spots, spawn_loot_spots, width,length, loot_val;

public:
    void get_info(int& ref_width, int& ref_length, std::string& ref_name);
    shack(Player &usrPlyr);
     std::string name = "Shack";
};
class house: public Buildings
{
private:
    int spawn_entity_spots, spawn_loot_spots, width,length, loot_val;
    std::string name = "House";
public:
    void get_info(int& ref_width, int& ref_length, std::string& ref_name);
    house(Player& usrPlyr);
};

#endif // Buildings_HPP
