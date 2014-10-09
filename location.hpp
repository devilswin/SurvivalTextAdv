#ifndef LOCATION_HPP
#define LOCATION_HPP
#include <cstring>
#include <iostream>
class Location
{
private:
    std::string Weather_Types[5] = {"Very Hot", "Hot", "Mild", "Cold", "Freezing"};
    std::string Inhabitants_Amount[5] = {"A Lot", "A good amount", "Some", "Very Few", "None"};
    std::string Food_Amount[5] = {"A Lot", "A good amount", "Some", "Very Few", "None"};
    std::string Water_Amount[5] = {"A Lot", "A good amount", "Some", "Very Few", "None"};
    std::string Hostile_Creatures_Amount[5] = {"A Lot", "A good amount", "Some", "Very Few", "None"};
    void assign_Values(int atrribute_slot);
public:
    std::string loc_weather, loc_food, loc_water, loc_inhabitants, loc_hostile_creatures;
    Location(std::string name_of_location);
};

#endif // LOCATION_HPP
