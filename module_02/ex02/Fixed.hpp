#ifndef MODULE_02_EX01_FIXED_HPP
#define MODULE_02_EX01_FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed& p1);
	Fixed(const int num);
	Fixed(const float f);

	~Fixed();

	Fixed& operator= (const Fixed& p1);

	int		getRawBits(void)			const;
	void	setRawBits(int const raw);
	float	toFloat(void)				const;
	int		toInt(void)					const;
private:
	int _fixed;
	static const int num_of_frctnl_bits;
};
std::ostream& operator<< (std::ostream &out, Fixed const &current);


#endif //MODULE_02_EX01_FIXED_HPP