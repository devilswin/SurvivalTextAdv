#ifndef GUN_HPP
#define GUN_HPP
#include <iostream>
#include <unistd.h>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <random>
#include <QProcess>
#include <cmath>
#include <SFML/Window.hpp>
#include <chrono>
#include <thread>
#include <string>
#include "item.hpp"
#include "metals.hpp"
using namespace std;
class Gun: public Item
{
private:
    int damage, magizine_size, skll_req, current_lvl;
   string name, caliber, manufacturer;
   float feet_per_second, range, fire_rate; 
public:
    Gun();
    void set_basic_gun_stuff(const string& gun_name,const string& bullet_cal, const string& maker, const float& fps, const float& max_range, const float& rps);
    void gun_fire(const int& amount, const float& distance);
    bool gun_can_fire = true;
    void set_gun_requirements(const int& skill_needed,const  int& current_skill);
    void build_gun(metals& material);
};

#endif // GUN_HPP
