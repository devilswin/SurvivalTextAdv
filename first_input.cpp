#include "first_input.hpp"

using namespace std;
void first_input(int &plinte, int &plstr, int &plchr, int &plmag, int &plspe, int &pllck, int &plawar)
{
    int point_remaining = 5;
    string skill_to_change;
    string amount_to_change;
    int change_multi = 0;
    bool is_done = false;
    while(is_done != true )
    {
        printf( "Your Base Skills: \n");
        output_list_form_variable(plstr,"Strength", true,1);
        output_list_form_variable(plinte,"Intelligence", true,2);
        output_list_form_variable(pllck,"Luck", true,3);
        output_list_form_variable(plchr,"Charisma", true,4);
        output_list_form_variable(plspe,"Speed", true,5);
        output_list_form_variable(plmag,"Magic", true,6);
        output_list_form_variable(plawar,"Awarness", true,7);
        printf("\nPoints Left: %i", point_remaining);
        printf( "\nPlease enter any of the Numbers you see to the left of the skill: \n");
        getline(cin,skill_to_change);
        printf( "Now enter the amount you want it to change by (-1 to take away 1, and 1 to add one): \n" );
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
            getline(cin, done_ui);
            if (done_ui == "Yes"  || done_ui == "yes" || done_ui == "y" || done_ui == "Y")
            {
                is_done = true;
            }
            else
            {
                printf("Ill assume you said no so...");
            }
        }
    }
}
