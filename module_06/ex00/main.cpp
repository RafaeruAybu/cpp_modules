#include <iostream>
#include <string>
#include "Convertor.hpp"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cerr << "Arguments number error!" << std::endl;
        return 1;
    }
    std::string str = (std::string)argv[1];
    try
    {
        Convertor convertor(str);
    }
    catch (std::exception& e)
    {
        std::cerr << "ERROR: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}
