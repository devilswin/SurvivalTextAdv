#include "buildings.hpp"

Buildings::Buildings()
{
}
void Buildings::spawn_entity_alg(int area_to_spawn_in)
{
    amount_of_entity_spawn = area_to_spawn_in / 7;
    
}
void Buildings::spawn_loot(int area_to_spawn_loot)
{
    amount_of_loot_spawns = area_to_spawn_loot / 5;
    
}
void Buildings::building_type(int houseVal, int& entity_spawns, int& loot_spawns, int& dimensions_width, int& dimensions_length, int& loot_val, std::string build_name)
{
    name = build_name;
    min_length = houseVal * 3; //Sets the random Dimensions so that each building that spawns will be diffrent
    min_width = houseVal * 3;
    max_length = houseVal*6;
    max_width = houseVal*6;
    generate_dimensions();
    spawn_entity_alg(area);//Genrates how many spots an entity could spawn
    spawn_loot(area);//Same as above just for loot
    entity_spawns =amount_of_entity_spawn;
    loot_spawns = amount_of_loot_spawns;
    set_lootable(in_building); //Will check if player is in building so that they could loot stuff
    assign_values(loot_val,5,loot_spawns,10, houseVal); //generates the loot
    out_loot(building_loot_present);
    
    dimensions_length = length;
    dimensions_width = width;
    
}
void Buildings::generate_dimensions()
{
    length = rand() % (max_length-min_length)+min_length;//Sets the random Dimensions so that each building that spawns will be diffrent
    width = rand() % (max_width-min_width)+min_width;
    area = length * width;
}
bool Buildings::enter_building()
{
    std::cout << "You have entered a " << name << std::endl;
    
    return in_building = true;
}
bool Buildings::exit_building()
{
    std::cout << "You have left a " << name << std::endl;
    return in_building = false;
}
void Buildings::extract_loot(Player &userplyr)
{
    for(size_t i = 0; i < building_loot_present.size(); i++)
    {
        currently_selected_contain = building_loot_present[i];
        std::printf ("The contents of the currently selected inventory are: "); 
        
        for(size_t q = 0; q < currently_selected_contain.contents.size(); q++)
            std::cout << currently_selected_contain.contents[q] << ",";
        std::printf("\n");
        bool is_done = false;
        std::printf("Please Select Which Item To take: \n");
        
        
        while(is_done == false)
        {
            int empty_checker = 0;
            /*   for(size_t i = 0; i < currently_selected_contain.contents.size(); i++)
            {
                if(currently_selected_contain.contents[i] == 0)
                    empty_checker += 1;
                    
            }
            if (empty_checker == currently_selected_contain.contents.size())
                is_done = true;*/
            size_t qy = 0;
            while(qy < currently_selected_contain.contents.size())
            {
                std::cout << qy + 1 << ")" << currently_selected_contain.contents[qy] << "\n";
                qy++;
            }
            std::printf("\nWhat Do You Want to Take?(use /n to move to next inventory and /e to exit)\n");
            std::string uinp;
            std::getline(std::cin,uinp);
            if(uinp == "NONE" || uinp == "none" || uinp == "None" || uinp == "/n")
            {
                is_done = true;
            }
            else{
                int choiced = atoi(uinp.c_str());
                if(uinp == "/e")
                    exit(EXIT_SUCCESS);
                userplyr.invslotsleft --;
                std::cout << "You have taken the " << currently_selected_contain.contents[choiced-1] << std::endl;
                std::cout << "You have " << userplyr.plyr_inventory.size() << " inventory slots in total" << std::endl;
                currently_selected_contain.contents[choiced-1] = 0;
                
                
            }
            
        }
    }
}
Military_Base::Military_Base(Player &usrplyr)
{
    loot_val = rand() % (50 - 25) + 25;
    name_of_type = name;

    building_type(10,spawn_entity_spots,spawn_loot_spots,width,length, loot_val,name);

}
void Military_Base::get_info(int& ref_width, int& ref_length, std::string& ref_name)
{
    ref_width = width;
    ref_name = name;
    ref_length= length;
}

PoliceStation::PoliceStation(Player &usrplyr)
{
    loot_val = rand() % (20 - 10) + 10;
    name_of_type = name;

    building_type(5,spawn_entity_spots,spawn_loot_spots,width,length, loot_val,name);

}
void PoliceStation::get_info(int& ref_width, int& ref_length, std::string& ref_name)
{
    ref_width = width;
    ref_name = name;
    ref_length= length;
}
foodStore::foodStore(Player &usrplyr)
{
    loot_val = rand() %  7;
    name_of_type = name;
    building_type(5,spawn_entity_spots,spawn_loot_spots,width,length, loot_val,name);

}
void foodStore::get_info(int& ref_width, int& ref_length, std::string& ref_name)
{
    ref_width = width;
    ref_name = name;
    ref_length= length;
}
fireStation::fireStation(Player &usrplyr)
{
    loot_val = rand() % (15 - 5) + 5;
    name_of_type = name;
    building_type(4,spawn_entity_spots,spawn_loot_spots,width,length, loot_val,name);

}
void fireStation::get_info(int& ref_width, int& ref_length, std::string& ref_name)
{
    ref_width = width;
    ref_name = name;
    ref_length= length;
}
shack::shack(Player &usrPlyr)
{
    loot_val = rand() % 6;
    name_of_type = name;
    building_type(1,spawn_entity_spots,spawn_loot_spots,width,length, loot_val,name);

}
void shack::get_info(int& ref_width, int& ref_length, std::string& ref_name)
{
    ref_width = width;
    ref_name = name;
    ref_length= length;
}
house::house(Player &usrplyr)
{
    loot_val = rand() %  5;
    name_of_type = name;
    building_type(2,spawn_entity_spots,spawn_loot_spots,width,length, loot_val,name);

}
void house::get_info(int& ref_width, int& ref_length, std::string& ref_name)
{
    ref_width = width;
    ref_name = name;
    ref_length= length;
}

