#ifndef IO_INPUT_CONTROL
#define IO_INPUT_CONTROL

#include <string>
#include <iostream>

namespace in
{
    std::string rm_spaces(std::string expression);
    std::string rm_par(std::string expression);
    int gi();
    float gf();
    std::string gs();
}

#endif