#include "funcs.h"

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
    print_logo();
    while (true)
    {
        cout << "Enter first number: ";
        int x{gi_input()};
        cout << "Enter second number: ";
        int y{gi_input()};
        cout << "Enter operation or type in help: ";
        std::cin.ignore();
        string s{gs_input()};

        if (s == "help")
        {
            cout << "add\n------------------------\nexample --> add(4,6) = 4 + 6 = 10\n\nsubstitute\n------------------------\nexample --> substitute(8,4) = 8 - 4 = 4\n\nmultiply\n------------------------\nexample --> multiply(4,7) = 4 * 7 = 28\n\ndevide\n------------------------\nexample --> devide(7,4) = 7|4 = 1\n\nmod\n------------------------\nexample --> mod(7,4)= mod4(7) = 7 % 4 = 3\n\ngcd(greatest value divisor)\n------------------------\nexample --> gcd(8,12)= gcd(8,12) = 4\n\n";
        }
        else if (s == "add")
        {
            cout << "sol: " << x + y << "\n\n";
        }
        else if (s == "substitute")
        {
            cout << "sol: " << x - y << "\n\n";
        }
        else if (s == "multiply")
        {
            cout << "sol: " << x * y << "\n\n";
        }
        else if (s == "devide")
        {
            cout << "sol: " << x / y << "\n\n";
        }
        else if (s == "gcd")
        {
            cout << "sol: " << gcd(x, y) << "\n\n";
        }
        else if (s == "mod")
        {
            cout << "sol: " << x % y << "\n\n";
        }
    }
}
