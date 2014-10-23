#include "location.hpp"

Location::Location(std::string name_of_location)
{
    int value_of_loc;
    if( name_of_location =="Australia")
        value_of_loc = 1;
    else if(name_of_location == "Russia")
        value_of_loc = 2;
    else if (name_of_location == "Antartica")
        value_of_loc = 3;
    else if (name_of_location == "Africa")
        value_of_loc = 4;
    else
        value_of_loc = 0;


    assign_Values(value_of_loc);
}
void Location::assign_Values(int atrribute_slot)
{
    switch(atrribute_slot)//Assigns values to each of the diffrent geographical locations, this will have a bigger affect once tribes are implemented, and will effect value of loot
    {
    case 1:
        loc_food = Food_Amount[2];
        loc_hostile_creatures = Hostile_Creatures_Amount[0];
        loc_water = Water_Amount[3];
        loc_weather = Weather_Types[1];
        loc_inhabitants = Inhabitants_Amount[3];
        break;
    case 2:
        loc_food = Food_Amount[2];
        loc_hostile_creatures = Hostile_Creatures_Amount[1];
        loc_water = Water_Amount[3];
        loc_weather = Weather_Types[3];
        loc_inhabitants = Inhabitants_Amount[3];
        break;
    case 3:
        loc_food = Food_Amount[3];
        loc_hostile_creatures = Hostile_Creatures_Amount[1];
        loc_water = Water_Amount[3];
        loc_weather = Weather_Types[4];
        loc_inhabitants = Inhabitants_Amount[2];
        break;
    case 4:
        loc_food = Food_Amount[0];
        loc_hostile_creatures = Hostile_Creatures_Amount[1];
        loc_water = Water_Amount[2];
        loc_weather = Weather_Types[0];
        loc_inhabitants = Inhabitants_Amount[0];
        break;
    default:
        std::cout << "ERRRORR" << std::endl;
        break;
    }
}
