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
	_fixed = (int)std::roundf(f * (float)(1 << num_of_frctnl_bits));
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

Fixed	Fixed::operator+ (const Fixed& p1)	const
{
	Fixed tmp;
	tmp.setRawBits(this->getRawBits() + p1.getRawBits());
	return tmp;
}

Fixed	Fixed::operator- (const Fixed& p1)	const
{
	Fixed tmp;
	tmp.setRawBits(this->getRawBits() - p1.getRawBits());
	return tmp;
}

Fixed	Fixed::operator* (const Fixed& p1)	const
{
	Fixed tmp;

	tmp.setRawBits((this->getRawBits() * p1.getRawBits()) >> this->num_of_frctnl_bits);
	return tmp;
}

Fixed	Fixed::operator/ (const Fixed& p1)	const
{
	Fixed tmp;

	tmp.setRawBits(((this->getRawBits() << this->num_of_frctnl_bits) / p1.getRawBits()));
	return tmp;
}

bool	Fixed::operator> (const Fixed& p1) const
{
	if (this->getRawBits() > p1.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator< (const Fixed& p1) const
{
	if (this->getRawBits() < p1.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>= (const Fixed& p1) const
{
	if (this->getRawBits() >= p1.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<= (const Fixed& p1) const
{
	if (this->getRawBits() <= p1.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator== (const Fixed& p1) const
{
	if (this->getRawBits() == p1.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator!= (const Fixed& p1) const
{
	if (this->getRawBits() != p1.getRawBits())
		return true;
	return false;
}

//pre
Fixed&	Fixed::operator++ ()
{
	_fixed++;
	return *this;
}

//post
Fixed	Fixed::operator++ (int)
{
	Fixed tmp(*this);
	this->_fixed++;
	return tmp;
}

//pre
Fixed&	Fixed::operator-- ()
{
	_fixed--;
	return *this;
}

//post
Fixed	Fixed::operator-- (int)
{
	Fixed tmp(*this);
	this->_fixed--;
	return *this;
}

std::ostream& operator<< (std::ostream &out, Fixed const &current)
{
	out << current.toFloat();
	return out;
}

//min
Fixed&	Fixed::min(Fixed& p1, Fixed& p2)
{
	if (p1.getRawBits() <= p2.getRawBits())
		return p1;
	return p2;
}

//const overload min
const Fixed& Fixed::min(const Fixed& p1, const Fixed& p2)
{
	if (p1.getRawBits() <= p2.getRawBits())
		return p1;
	return p2;
}

//max
Fixed&	Fixed::max(Fixed& p1, Fixed& p2)
{
	if (p1.getRawBits() >= p2.getRawBits())
		return p1;
	return p2;
}

//const overload max
const Fixed& Fixed::max(const Fixed& p1, const Fixed& p2)
{
	if (p1.getRawBits() >= p2.getRawBits())
		return p1;
	return p2;
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
