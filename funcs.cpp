#include "funcs.h"

namespace funcs
{
	int gcd(int x, int y)
	{
		if (x == y)
		{
			return x;
		}
		else if (x == 0 || y == 0)
		{
			return std::max(x, y);
		}
		else if (x > y)
		{
			x = x % y;
			gcd(x, y);
		}
		else if (x < y)
		{
			y = y % x;
			gcd(x, y);
		}
		else
		{
			std::cout << "Error in gcd function\n";
		}
	}

	int gi_input()
	{
		int x{};
		std::cin >> x;
		return x;
	}
	std::string gs_input()
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
