#ifndef METALS_HPP
#define METALS_HPP
#include <iostream>
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
#include "item.hpp"
class metals : public  Item
{
public:
    metals();
};

#endif // METALS_HPP
