#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
    std::vector<int> int_vector;
    for (int i = 0; i < 10; i++)
        int_vector.push_back(i);
    try
    {
        std::cout << "Num was found:" << *easyfind(int_vector, 3)
            << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
     
    return 0;
}
