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
#include "loot.hpp"
#include <random>
#include <memory>
#include "player.hpp"
class Choice_enterBuilding
{
private:
    std::unique_ptr<Player> user;
public:
    Choice_enterBuilding();
    void generate_choice(std::string& user_choice, Player&user, std::mt19937& mt);
};

#endif // CHOICE_ENTERBUILDING_HPP
