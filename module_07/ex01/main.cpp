#include <string>
#include <iostream>
#include "iter.hpp"

int main()
{
    std::string str_arr[4] = 
        {
            "Hello",
            "World",
            "My",
            "Name"
        };
    for (int i = 0; i < 4; i++)
        std::cout << str_arr[i] << std::endl;
    iter(str_arr, (size_t)4, &swap_first_and_second_words);
    for (int i = 0; i < 4; i++)
        std::cout << str_arr[i] << std::endl;
    return 0;
}
