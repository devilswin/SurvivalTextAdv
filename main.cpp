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

using namespace std;

int main()
{
    for (int i = 0; i < 50; i++)
        cout << endl;
    srand(time(NULL));
    cout << "What is your name? " << endl;
    string inputed_name;
    getline(cin,inputed_name);
    Player user_charac(inputed_name,100,10,1);

    Choice_enterBuilding test;
    std::string tez;
    test.generate_choice(tez);
    return 0;
}

