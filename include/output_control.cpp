#include "output_control.h"

namespace op
{
    void sol(int n)
    {
        std::cout << "sol: " << n << "\n\n";
    }

    void sol(float n)
    {
        std::cout << "sol: " << n << "\n\n";
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

}
