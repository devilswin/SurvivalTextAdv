#include "player.hpp"

Player::Player(std::string inp_name,int &inp_inte,int &inp_st,int &inp_charis, int &inp_magi, int &inp_speed, int &inp_lck, int& inp_awar)
{
set_awarness(inp_awar);
set_charisma(inp_charis);
set_luck(inp_lck);
set_speed(inp_speed);
set_strength(inp_st);
set_int(inp_inte);
set_magicism(inp_magi);
set_name_ent(inp_name);
generate_stats();
}
