#include "algebra.h"

Expresion::Expresion(std::string s)
{
	int i{s.find('(')};
	int j{s.find(',')};
	int k{s.find(')')};

	cmd = s.substr(0, i + 1);
	x = stof(s.substr(i + 1, j - i - 1));
	y = stof(s.substr(j + 1, k - j - 1));
}

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
		return -1;
	}
}

float sol_lin(float a, float b)
{
	// ax + b = 0
	return ((-b) / a);
}
