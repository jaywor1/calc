#include "output_control.h"

namespace op
{
    void sol(int n)
    {
        std::cout << "sol: " << n << "\n\n";
    }
    int i_in()
    {
        int x{};
        std::cin >> x;
        return x;
    }
    std::string s_in()
    {
        std::string x{};
        std::getline(std::cin, x);
        return x;
    }

    void print_logo()
    {
        std::cout << R"(
   _____                  _           _____   
  / ____|       /\       | |         / ____|  
 | |           /  \      | |        | |       
 | |          / /\ \     | |        | |       
 | |____ _   / ____ \ _  | |____ _  | |____ _ 
  \_____(_) /_/    \_(_) |______(_)  \_____(_)
                                              
    )" << '\n';
        std::cout << "C ........ Computing\nA ........ Algebraic\nL ........ Logarithmic\nC ........ Calculator\n";
    }
    std::string remove_whitespaces(std::string expression)
    {
        // Removes whitespaces
        std::string temp{""};
        for (int i = 0; i < expression.size(); i++)
        {
            if (expression[i] != ' ')
            {
                temp += expression[i];
            }
        }
        return temp;
    }

}
