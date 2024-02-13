#ifndef CONSOLE
#define CONSOLE
#include <iostream>
#include "square.h"
class Console {
public:
    void Print(double x);
    void Print(std::string string);
    void Get(double &x);
};
#endif
