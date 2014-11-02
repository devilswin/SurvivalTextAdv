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
using namespace std;
class Gun: public Item
{
private:
    int damage, magizine_size;
   string name, caliber, manufacturer;
   float feet_per_second, max_range, fire_rate; 
public:
    Gun();
};

#endif // GUN_HPP
