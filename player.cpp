#include "player.hpp"

Player::Player(std::string inp_name,const int &inp_hp, const int &inp_st, const int &inp_lvl)
{
    plyr_health = inp_hp;
    plyr_strength = inp_st;
    plyr_level = inp_lvl;
    plyr_name =inp_name;
    set_health(plyr_health);
    set_level(plyr_level);
    set_name_ent(plyr_name);
    int x;
    set_strength(plyr_strength,x);
    plyr_inventory.resize(x);
    generate_stats();
    std::cout << plyr_name << std::endl;
    std::cout << plyr_level << std::endl;
    std::cout << plyr_strength << std::endl;
    std::cout << plyr_health << std::endl;
    std::cout << x << std::endl;
}
