#include "item.hpp"

Item::Item()
{
}
void Item::set_item_attributes(int &item_value, string &item_name, string &item_type, float &item_rarity, float &item_weight, string& item_category)
{
    currency_val = ((item_value * 5) / (item_weight/10))*item_rarity;  
    name = item_name;
    type = item_type;
    weight = item_weight;
    category = item_category;
}
void Item::output_price(float &val_to_out)
{
    val_to_out = currency_val;
}
void Item::output_weight(int &to_out_lbs)
{
    to_out_lbs - weight;
}
