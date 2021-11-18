#pragma once
#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed& p1);
	~Fixed();
	Fixed& operator= (const Fixed& p1);

	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int _fixed;
	static const int num_of_frctnl_bits;

};
