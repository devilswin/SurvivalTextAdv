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
#include "first_input.hpp"
using namespace std;

int main()
{
    for (int i = 0; i < 50; i++)
        cout << endl;
    srand(time(NULL));
    string blarg = "BLARG";
    int plstr = 5; int plinte = 5;  int pllck = 5; int plchr = 5; int plspe = 5; int plmag = 5;int plawar = 5;
    Player ad(blarg, plinte, plstr, pllck, plchr,plspe,plmag,plawar );
    Military_Base ada(ad);
    ada.enter_building();
    /*   printf( "What is your name? \n");
    string inputed_name;
    getline(cin,inputed_name);*/
    
    std::mt19937 mt { std::random_device {}() };
    /*
    first_input(plinte,plstr,plchr,plmag,plspe,pllck,plawar);
    Player User_player(inputed_name, plinte,plstr,plchr,plmag,plspe,pllck,plawar);
    Choice_enterBuilding test;
    std::string tez;
    test.generate_choice(tez, User_player, mt);*/
    return 0;
}

