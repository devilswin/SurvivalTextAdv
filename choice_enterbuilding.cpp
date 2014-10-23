#include "choice_enterbuilding.hpp"

Choice_enterBuilding::Choice_enterBuilding()
{
}
void Choice_enterBuilding::generate_choice(std::string &user_choice) //Will randomly generate 3 building types that will give the user the choice
{

    std::mt19937 mt { std::random_device {}() };
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
        case 0: ptr = std::unique_ptr<Buildings>(new shack{}); break;
        case 1: ptr = std::unique_ptr<Buildings>(new house{}); break;
        case 2: ptr = std::unique_ptr<Buildings>(new foodStore{}); break;
        case 3: ptr = std::unique_ptr<Buildings>(new fireStation{}); break;
        case 4: ptr = std::unique_ptr<Buildings>(new PoliceStation{}); break;
        case 5: ptr = std::unique_ptr<Buildings>(new Military_Base{}); break;
        default: x =choices_rand(mt); break;

        }
        items.push_back(move(ptr));
    }
    std::string letz[] = {"A", "B", "C", "D", "E"};
    for(size_t n = 0; n < items.size(); n++)
        std::cout << letz[n] << ") " << items[n]->name << std::endl;
    std::cout << "Pick any letter shown (MUST BE UPPERCASE)" <<std::endl;
    std::cin >> user_choice;
    bool has_chosen = false;
    while (has_chosen == false)
    {
        if(user_choice == "A")
        {
            items[0]->enter_building(); has_chosen = true;
        }
        else if(user_choice == "B")
        {
            items[1]->enter_building(); has_chosen = true;
        }
        else if(user_choice == "C")
        {
            items[2]->enter_building();
            has_chosen = true;
        }
        else
        {
            std::cout << "Please reenter your value: " << std::endl;
            std::cin >>user_choice;
        }
    }
}
