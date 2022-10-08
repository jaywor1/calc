#include "include/algebra.h"
#include "include/output_control.h"
#include "include/input_control.h"

#include <iostream>
#include <string>
#include <list>
#include <cctype>
#include <algorithm>

using std::cin;
using std::cout;
using std::list;
using std::string;

// Slow can be improved

int main()
{
    op::print_logo();
    while (true)
    {
        std::cout << "Type in expression: ";
        string usr_input{in::gs()};

        Expresion expr(usr_input);

        if (usr_input == "help")
        {
            cout << "add\n------------------------\nexample --> add(4,6) = 4 + 6 = 10\n\nsubstitute\n------------------------\nexample --> substitute(8,4) = 8 - 4 = 4\n\nmultiply\n------------------------\nexample --> multiply(4,7) = 4 * 7 = 28\n\ndevide\n------------------------\nexample --> devide(7,4) = 7|4 = 1\n\nmod\n------------------------\nexample --> mod(7,4)= mod4(7) = 7 % 4 = 3\n\ngcd(greatest value divisor)\n------------------------\nexample --> gcd(8,12)= gcd(8,12) = 4\n\n";
        }
        else
        {
            op::sol(expr.validate());
        }
    }
}
