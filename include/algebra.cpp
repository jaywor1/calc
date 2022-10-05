#include "algebra.h"

namespace algebra
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
			return -1;
		}
	}

	float sol_lin(float a, float b)
	{
		// ax + b = 0
		return ((-b) / a);
	}

}
