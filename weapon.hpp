#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include "location.hpp"
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
using namespace std;
class Weapon : public Item
{
private:
    float damage, damage_per_second, attack_speed; 
    string type;
    int skill_required, weight;
    string name_of_skill_required;
     bool can_attack = true;
public:
    Weapon();
    void weapon_attributes( float& dmg, string& weapon_type, string& name_skill_required, int& skill_lvl_required);
    void attack_speed_alg(float& attack_speed_to_return);
   
};

#endif // WEAPON_HPP
