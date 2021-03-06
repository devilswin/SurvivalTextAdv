#include "first_launch.hpp"
using namespace std;
void first_launch(int& plstr, int& plinte, int& pllck, int& plchr, int& plspe, int& plmag, int& plawar)
{
    int point_remaining = 5;
    std::string skill_to_change;
    std::string amount_to_change;
    int change_multi = 0;
    bool is_done = false;
    while(is_done != true )
    {
        cout << "Your Base Skills: " << endl;
        cout << "1) " << "Strength: " << plstr << endl;
        cout << "2) " << "Intelligence: " << plinte << endl;
        cout << "3) " << "Luck: " << pllck << endl;
        cout << "4) " << "Charisma: " << plchr << endl;
        cout << "5) " << "Speed: " << plspe << endl;
        cout << "6) " << "Magic: " << plmag << endl;
        cout << "7) " << "Awarness: " << plawar << endl;
        cout << "\n" << "Points Left: " << point_remaining;
        cout << "\n" << "Please enter any of the Numbers you see to the left of the skill: " << endl;
        getline(cin,skill_to_change);
        cout << "Now enter the amount you want it to change by (-1 to take away 1, and 1 to add one): " << endl;
        getline(cin, amount_to_change);
        change_multi =atoi(amount_to_change.c_str());
        if(abs(change_multi) > point_remaining)
            change_multi = 0;
        if(skill_to_change == "1" || skill_to_change == "Strength" || skill_to_change == "strength")
            plstr = plstr + change_multi;
        else if(skill_to_change == "2" || skill_to_change == "Intelligence" || skill_to_change == "intelligence")
            plinte = plinte + change_multi;
        else if(skill_to_change == "3" || skill_to_change == "Luck" || skill_to_change == "Luck")
            pllck = pllck + change_multi;
        else if(skill_to_change == "4" || skill_to_change == "Charisma" || skill_to_change == "charisma")
            plchr = plchr + change_multi;
        else if(skill_to_change == "5" || skill_to_change == "Speed" || skill_to_change == "speed")
            plspe = plspe + change_multi;
        else if(skill_to_change == "6" || skill_to_change == "Magic" || skill_to_change == "magic")
            plmag = plmag + change_multi;
        else if(skill_to_change == "7" || skill_to_change == "Awarness" || skill_to_change == "awarness")
            plawar = plawar + change_multi;
        else
        {
            cout << "Invalid input please try again!!!" << endl;
            change_multi = 0;
        }
        point_remaining = point_remaining - change_multi;
        if (point_remaining == 0)
        {
            cout << "Are you done?" << endl;
            string done_ui;
            getline(cin,done_ui);
            if (done_ui == "Yes"  || done_ui == "yes" || done_ui == "y" || done_ui == "Y")
            {
                is_done = true;
            }
            else
            {
                cout << "Ill assume you said no so..." << endl;
            }
        }
    }
}
