#include "algebra.h"

Expresion::Expresion(std::string s)
{
	int i{s.find('(')};
	int j{s.find(',')};
	int k{s.find(')')};

	cmd = s.substr(0, i);
	x = stof(s.substr(i + 1, j - i - 1));
	y = stof(s.substr(j + 1, k - j - 1));
}

int Expresion::gcd()
{
	while ((x != y) && (x != 0) && (y != 0))
	{
		if (x > y)
		{
			x = int(x) % int(y);
		}
		else if (x < y)
		{
			y = int(y) % int(x);
		}
		else
		{
			std::cout << "Error in gcd fucntion\n";
			return -1;
		}
	}
	return std::max(x, y);
}

float Expresion::sol_lin()
{
	return (-y) / x;
}
