#include "choice_enterbuilding.hpp"

Choice_enterBuilding::Choice_enterBuilding()
{
    
}
void Choice_enterBuilding::generate_choice(std::string &user_choice, Player &user, std::mt19937 &mt) //Will randomly generate 3 building types that will give the user the choice
{
    
   
    std::uniform_int_distribution<size_t> choices_rand(0, 5);
    std::vector<std::unique_ptr<Buildings>> items;
    int previous_x = 10;
    for(size_t n = 0; n < 3; n++) {
        std::unique_ptr<Buildings> ptr;
        int x = choices_rand(mt);
        if (x == previous_x)
            x = choices_rand(mt);
        previous_x = x;
        switch(x) {//will make a pointer to a certain building class so that it will spawn
        case 0: ptr = std::unique_ptr<Buildings>(new shack{user}); break;
        case 1: ptr = std::unique_ptr<Buildings>(new house{user}); break;
        case 2: ptr = std::unique_ptr<Buildings>(new foodStore{user}); break;
        case 3: ptr = std::unique_ptr<Buildings>(new fireStation{user}); break;
        case 4: ptr = std::unique_ptr<Buildings>(new PoliceStation{user}); break;
        case 5: ptr = std::unique_ptr<Buildings>(new Military_Base{user}); break;
        default: x =choices_rand(mt); break;
            
        }
        items.push_back(move(ptr));
    }
   bool has_chosen = false;
    while (has_chosen == false)
    {
        std::string letz[] = {"A", "B", "C", "D", "E"};
        for(size_t n = 0; n < items.size(); n++)
           std::cout << letz[n] << ") " << items[n]->name << std::endl;
        std::printf( "Pick any letter shown (MUST BE UPPERCASE) \n" );
        std::string user_input;
        std::getline(std::cin,user_choice);
        
        if(user_choice == "A")
        {
            items[0]->enter_building();
            items[0]->extract_loot(user);
            has_chosen = true;
        }
        else if(user_choice == "B")
        {
            items[1]->enter_building();
            items[1]->extract_loot(user);
            has_chosen = true;
            
        }
        else if(user_choice == "C")
        {
            items[2]->enter_building();
            items[2]->extract_loot(user);
            has_chosen = true;
        }
        else
        {
           std::printf("Please reenter your value: \n");
            
        }
    }
}
