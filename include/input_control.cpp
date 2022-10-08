#include "input_control.h"

namespace in
{
    int gi()
    {
        int x{};
        std::cin >> x;
        return x;
    }
    float gf()
    {
        float x{};
        std::cin >> x;
        return x;
    }
    std::string gs()
    {
        std::string x{};
        std::getline(std::cin, x);
        return x;
    }

    std::string rm_spaces(std::string expression)
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

    std::string rm_par(std::string expression)
    {
        if (expression.find('(') > expression.length())
        {
            return "ERROR";
        }
        else
        {
            int f_par{expression.find('(')};
            int depth{0};

            for (int i = f_par + 1; i < expression.length(); i++)
            {
                if (expression[i] == ')' && depth == 0)
                    return expression.substr(f_par + 1, i - f_par - 1);
                if (expression[i] == '(')
                    depth++;
                else if (expression[i] == ')')
                    depth--;
            }
        }
    }

}
