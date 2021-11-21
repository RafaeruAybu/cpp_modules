#include "Fixed.hpp"

const int  Fixed::num_of_frctnl_bits = 8;

Fixed::Fixed() : _fixed(0)
{
	std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed(const Fixed& p1) : _fixed(p1._fixed)
{
	std::cout << "Copy constructor called." << std::endl;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	_fixed = num << num_of_frctnl_bits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	_fixed = (int)std::round(f * (float)(1 << num_of_frctnl_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

Fixed& Fixed::operator= (const Fixed &p1)
{
	//self-assign guard
	if (this == &p1)
		return *this;

	_fixed = p1._fixed;
	std::cout << "Assignation operator called." << std::endl;
	return *this;
}

std::ostream& operator<< (std::ostream &out, Fixed const &current)
{
	out << current.toFloat();
	return out;
}

int Fixed::getRawBits(void) const
{
	std::cout << "GetRawBits member function is called." << std::endl;
	return _fixed;
}

void Fixed::setRawBits(int const raw)
{
	_fixed = raw;
	std::cout << "SetRawBits member function is called." << std::endl;
}

float Fixed::toFloat(void) const
{
	return (_fixed / (float)(1 << num_of_frctnl_bits));
}

int Fixed::toInt(void) const
{
	return(_fixed >> num_of_frctnl_bits);
}
