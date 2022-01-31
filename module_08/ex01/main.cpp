#include <iostream>
#include "Span.hpp"

int main()
{
    std::cout << "TEST1" << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << std::endl;
    std::cout << "TEST2" << std::endl;
    Span sp2 = Span(999999);
    int i = 0;
    for (; i < 100000; i++)
    {
        sp.addNumber(i);
    }
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << std::endl;
    
    return 0;
}
