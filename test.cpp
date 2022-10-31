#include "include/algebra.h"
#include "include/output_control.h"
#include "include/input_control.h"

#include <map>

// Slow can be improved

using std::map;
using std::string;

int main()
{
    map<string, int> test_map = {{"1+1", 2}, {"16-2*4", 8}, {"(4+8)*7", 84}, {"1 + 7 - 6 * 8 + 1 - 6", -45}, {"1-(-2)", 3}};

    for (const auto &[key, value] : test_map)
    {
        if (test_map[key] == calculate(key))
        {
            string s{key + " = " + std::to_string(test_map[key]) + " ==> SUCCESS\n"};
            std::cout << "\033[1;32m" << key << " = " << test_map[key] << " ==> SUCCESS\033[0m\n";
        }
        else
        {
            std::cout << "\033[1;31m" << key << " = " << test_map[key] << " ==> FAIL\033[0m\n";
        }
    }
}
