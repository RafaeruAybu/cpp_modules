#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    //KO
    std::cout << "tets 1" << std::endl;
    {
        try
        {
            Bureaucrat b("Volvo", 4);
            Form f("rere", 3, 150);
            f.beSigend(b);
        }
        catch(const std::exception& e)
        {
            std::cerr << "Exception cought: " << e.what() << std::endl;
        }
    }
    //OK
    std::cout << "tets 2" << std::endl;
    {
        try
        {
            Bureaucrat b("Volvo", 3);
            Form f("rere", 3, 150);
            f.beSigend(b);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
    //OK
    std::cout << "tets 3" << std::endl;
    {
        try
        {
            Bureaucrat b("Volvo", 2);
            Form f("rere", 3, 150);
            f.beSigend(b);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    return 0;
}
