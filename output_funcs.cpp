#include "output_funcs.hpp"
using namespace std;

void output_list_form_variable(int &value, const string &name_of_value, const bool &new_line, const int &list_pos)
{
    char colon = ':';
    char parenth = ')';
    char space = ' ';

   char const* val_char = to_string(value).c_str();
  
    char const* lsit_char = to_string(list_pos).c_str(); 

    vector<char> full_sentence;
    full_sentence.push_back(*lsit_char);
    full_sentence.push_back(parenth);
    full_sentence.push_back(space);
    for(size_t da = 0; da < name_of_value.length(); da++)
        full_sentence.push_back(name_of_value[da]);
    full_sentence.push_back(colon);
    full_sentence.push_back(space);
    full_sentence.push_back(*val_char);
    typing_animation(full_sentence,new_line);
}
void typing_animation(vector<char> zz, bool new_line_time)
{
    
    
    chrono::milliseconds dura2( 100 );
    this_thread::sleep_for(dura2);
    for (size_t da = 0; da < zz.size(); da++)
    {
        cout << zz[da] << flush;
        this_thread::sleep_for(dura2);
    }
    if(new_line_time == true)
        cout << endl << flush;
}
