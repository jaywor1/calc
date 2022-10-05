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

}
