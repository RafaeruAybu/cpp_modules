#include <iostream>
#include "Fixed.hpp"

int main(int argc, char *argv[])
{
	//todo write tests
	Fixed a(6.4f);
	Fixed const b(3);
	std::cout << Fixed::max(a,b) << std::endl;
	return (0);
}
