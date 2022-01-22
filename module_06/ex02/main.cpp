#include <iostream>
#include <string>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

//chooses and generates an obj randomly
Base * generate(void)
{
    Base *ptr;
    int num = (std::rand() % 3) + 1;
    if (num == 1)
        ptr = new A();
    else if (num == 2)
        ptr = new B();
    else if (num == 3)
        ptr = new C();
    return ptr;
}

//identify using pointer
void identify(Base* p)
{
    A *a_ptr;
    a_ptr = dynamic_cast<A *>(p);
    if (a_ptr)
        std::cout << "It's A." << std::endl;
    B *b_ptr;
    b_ptr = dynamic_cast<B *>(p);
    if (b_ptr)
        std::cout << "It's B." << std::endl;
    C *c_ptr;
    c_ptr = dynamic_cast<C *>(p);
    if (c_ptr)
        std::cout << "It's C." << std::endl;
}

//identify using reference
void identify(Base& p)
{
    try
    {
        dynamic_cast<A &>(p);
        std::cout << "It's A." << std::endl;
    }
    catch (std::bad_cast) {}
    try
    {
        dynamic_cast<B &>(p);
        std::cout << "It's B." << std::endl;
    }
    catch(std::bad_cast) {}
    try
    {
        dynamic_cast<C &>(p);
        std::cout << "It's C." << std::endl;
    }
    catch(std::bad_cast) {}
}

int main()
{
    std::cout << "Test: identify using pointer." << std::endl;
    {
        int i = 5;
        while (i > 0)
        {
            Base* base_ptr = generate();
            identify(base_ptr);
            delete base_ptr;
            i--;
        }
    }
    std::cout << "Test: identify using reference." << std::endl;
    {
        int i = 5;
        while (i > 0)
        {
            Base* base_ptr = generate();
            identify(base_ptr);
            delete base_ptr;
            i--;
        }
    }
    return 0;
}
