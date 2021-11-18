#ifndef MODULE_02_EX01_FIXED_HPP
#define MODULE_02_EX01_FIXED_HPP
#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed& p1);
	Fixed(const int num);
	~Fixed();
	Fixed& operator= (const Fixed& p1);

	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int _fixed;
	static const int num_of_frctnl_bits;
};
#endif //MODULE_02_EX01_FIXED_HPP