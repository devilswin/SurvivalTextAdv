#ifndef CHOICE_ENTERBUILDING_HPP
#define CHOICE_ENTERBUILDING_HPP

#include <iostream>
#include "location.hpp"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <fstream>
#include "buildings.hpp"
#include "shack.hpp"
#include "loot.hpp"
#include "policestation.hpp"
#include "firestation.hpp"
#include "house.hpp"
#include "foodstore.hpp"
#include <random>
#include "military_base.hpp"
#include <memory>
class Choice_enterBuilding
{
private:
    std::vector<std::string> building_spawn;
public:
    Choice_enterBuilding();
    void generate_choice(std::string& user_choice);
};

#endif // CHOICE_ENTERBUILDING_HPP
