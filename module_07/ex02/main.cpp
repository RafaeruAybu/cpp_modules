#include <iostream>
#include <string>
#include "Array.hpp"

int main()
{
    {
        Array<int> int_array;

        for (int i = 0; i < int_array.size(); i++)
            std::cout << "int_array[" << i << "]:" << int_array[i];
    }
	{
        Array<int> int_array(21);

        for (int i = 0; i < int_array.size(); i++)
            int_array[i] = i;
        for (int i = 0; i < int_array.size(); i++)
            std::cout << "int_array[" << i << "]:" << int_array[i]
                << std::endl;
        Array<int> int_array2(int_array);
        for (int i = 0; i < int_array2.size(); i++)
            std::cout << "int_array2[" << i << "]:" << int_array2[i]
                << std::endl;
        Array<int> int_array3 = int_array2;
        for (int i = 0; i < int_array3.size(); i++)
            std::cout << "int_array3[" << i << "]:" << int_array3[i]
                << std::endl;
    }
    {
        try
        {
            Array<std::string> str_array(-1);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            Array<std::string> str_array(2);
            str_array[3] = "AD";
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    return 0;
}
