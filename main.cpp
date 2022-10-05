#include "algebra.h"
#include "output_control.h"
#include "input_control.h"

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
        cout << "Enter first number: ";
        float x{in::gf()};
        cout << "Enter second number: ";
        float y{in::gf()};
        cout << "Enter operation or type in help: ";
        std::cin.ignore();
        string s{in::gs()};

        if (s == "help")
        {
            cout << "add\n------------------------\nexample --> add(4,6) = 4 + 6 = 10\n\nsubstitute\n------------------------\nexample --> substitute(8,4) = 8 - 4 = 4\n\nmultiply\n------------------------\nexample --> multiply(4,7) = 4 * 7 = 28\n\ndevide\n------------------------\nexample --> devide(7,4) = 7|4 = 1\n\nmod\n------------------------\nexample --> mod(7,4)= mod4(7) = 7 % 4 = 3\n\ngcd(greatest value divisor)\n------------------------\nexample --> gcd(8,12)= gcd(8,12) = 4\n\n";
        }
        else if (s == "add")
        {
            op::sol(x + y);
        }
        else if (s == "substitute")
        {
            op::sol(x - y);
        }
        else if (s == "multiply")
        {
            op::sol(x * y);
        }
        else if (s == "devide")
        {
            op::sol(x / y);
        }
        else if (s == "gcd")
        {
            op::sol(algebra::gcd(x, y));
        }
        else if (s == "mod")
        {
            op::sol(int(x) % int(y));
        }
        else if (s == "sol_lin")
        {
            op::sol(algebra::sol_lin(x, y));
        }
    }
}
