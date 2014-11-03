#include "gun.hpp"
using namespace std;
Gun::Gun()
{
    
}
void Gun::set_basic_gun_stuff(const string &gun_name, const string &bullet_cal, const string &maker, const float &fps, const float &max_range, const float &rps)
{
    name = gun_name;
    caliber = bullet_cal;
    manufacturer = maker;
    feet_per_second = fps;
    range = max_range;
    fire_rate = rps;
}

void Gun::gun_fire(const int &amount, const float &distance)
{
    for(int i = 0; i < amount; i++)
    {
        if(gun_can_fire == true)
        {
            float time = distance / feet_per_second;
            printf("It took %f seconds to reach the target \n",time);
            gun_can_fire = false;
        }
        else
        {
            float can_shoot = (fire_rate/60)*1000;
            cout << can_shoot << endl;
            int bling = can_shoot;
            using blup =  chrono::duration<float ,ratio<1,1000>>;
            chrono::milliseconds dura2(bling);
            this_thread::sleep_for(chrono::duration_cast<blup>(dura2));
            i = i-1;
            gun_can_fire = true;
        }
    }
}
