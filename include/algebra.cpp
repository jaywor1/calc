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

float Expresion::validate()
{
	try
	{
		if (cmd == "add")
		{
			return x + y;
		}
		else if (cmd == "substitute")
		{
			return x - y;
		}
		else if (cmd == "multiply")
		{
			return x * y;
		}
		else if (cmd == "devide")
		{
			if (y == 0)
			{
				std::cout << "Cannot devide by zero.\n";
				return -1;
			}
			return x / y;
		}
		else if (cmd == "mod")
		{
			return int(x) % int(y);
		}
		else if (cmd == "gcd")
		{
			return gcd();
		}
		else if (cmd == "sol_lin")
		{
			return sol_lin();
		}
	}
	catch (...)
	{
		std::cout << "Error occurred\n";
		return -1;
	}
}

// 8+6*3*4+3
float basic(std::string expression)
{
	std::string operators = "+-*/";

	char op = '+';

	bool full_break{false};

	int op_index{0};

	for (int i = 0; i < expression.length(); i++)
	{
		if (int(expression[i]) < 48)
		{
			for (int y = 0; y < operators.length(); y++)
			{
				if (expression[i] == operators[y])
				{
					op = operators[y];
					op_index = i;
					full_break = true;
					break;
				}
			}
		}
		if (full_break)
			break;
	}

	float x{stof(expression.substr(0, op_index))};
	float y{stof(expression.substr(op_index + 1, expression.length() - op_index))};

	if (op == '+')
	{
		return x + y;
	}
	else if (op == '-')
	{
		return x - y;
	}
	else if (op == '*')
	{
		return x * y;
	}
	else if (op == '/')
	{
		if (y == 0)
		{
			std::cout << "ZERO DIVISION ERROR\n";
			return -1;
		}
		else
			return x / y;
	}
	else
	{
		std::cout << "Unknown error\n";
		return -1;
	}
}
float calculate(std::string expression)
{
	return 2;
}