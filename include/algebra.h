#ifndef IO_H
#define IO_H

#include <iostream>
#include <string>

class Expresion
{
public:
    std::string cmd{};
    float x{};
    float y{};

    Expresion(std::string s);
};

int gcd(int x, int y);
float sol_lin(float x, float y);

#endif
