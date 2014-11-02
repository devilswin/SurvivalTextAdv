#ifndef OUTPUT_FUNCS_HPP
#define OUTPUT_FUNCS_HPP
#include <iostream>
#include "location.hpp"
#include <unistd.h>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <random>
#include <QProcess>
#include <cmath>
#include <SFML/Window.hpp>
#include <chrono>
#include <thread>
#include <string>
using namespace std;

void output_list_form_variable(int& value, const string& name_of_value,const bool& new_line,const int& list_pos);
void simple_input();
void typing_animation(vector<char> zz,  bool new_line_time);


#endif // OUTPUT_FUNCS_HPP
