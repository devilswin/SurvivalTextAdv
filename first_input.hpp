#ifndef FIRST_INPUT_HPP
#define FIRST_INPUT_HPP
#include <iostream>
#include "location.hpp"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include "buildings.hpp"
#include "shack.hpp"
#include "loot.hpp"
#include "policestation.hpp"
#include "firestation.hpp"
#include "house.hpp"
#include "foodstore.hpp"
#include <random>
#include "choice_enterbuilding.hpp"
#include <QProcess>
#include "player.hpp"
#include <cmath>
#include <chrono>
#include <thread>
#include "output_funcs.hpp"
#include "item.hpp"
using namespace std;
void first_input(int& plinte,int& plstr,int& plchr, int& plmag, int& plspe,int& pllck,int& plawar);


#endif // FIRST_INPUT_HPP
