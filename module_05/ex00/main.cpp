#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    //grade > 150
    std::cout << "tets 1" << std::endl;
    {
        try
        {
            Bureaucrat("VOLVO", 151);
        }
        catch(const std::exception& e)
        {
            std::cerr << "Exception cought: " << e.what() << std::endl;
        }
    }
    //normal grade, with "<<" test
    std::cout << "tets 2" << std::endl;
    {
        try
        {
            Bureaucrat a("VOLVO", 150);
            std::cout << a << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
    //Downgrade test
    std::cout << "tets 3" << std::endl;
    {
        try
        {
            Bureaucrat a("VOLVO", 1);
            a.upgrade();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    return 0;
}
