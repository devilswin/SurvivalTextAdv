#ifndef ITEM_HPP
#define ITEM_HPP
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
using namespace std; 
class Item
{
private:
    float currency_val, rarity;
    string name;
    int weight;
    
    int numerical_val;
    
public:
    Item();
    void set_item_attributes(int& item_value, string& item_name, string& item_type, float& item_rarity, float& item_weight, string& item_category);
    void output_price(float& val_to_out);
    void output_weight(int& to_out_lbs);
    string category, type;
};

#endif // ITEM_HPP
