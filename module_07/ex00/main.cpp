#include <iostream>
#include <string>
#include "whatever.hpp"

int main()
{
    {
        int a = 3;
        int b = 42;
        std::cout << "Before swap. a: " << a << ", b: " << b << std::endl;
        std::cout << "Min is: " << min(a, b) << std::endl;
        std::cout << "Max is: " << max(a, b) << std::endl;
        swap(a, b);
        std::cout << "After swap. a: " << a << ", b: " << b << std::endl;
        std::cout << "Min is: " << min(a, b) << std::endl;
        std::cout << "Max is: " << max(a, b) << std::endl;
    }
    {
        int a = 2;
        int b = 3;
        ::swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    }
    return 0;
}
