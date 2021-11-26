#ifndef MODULE_02_EX02_FIXED_HPP
#define MODULE_02_EX02_FIXED_HPP
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

	Fixed&	operator= (const Fixed& p1);
	Fixed&	operator++ ();
	Fixed	operator++ (int);
	Fixed&	operator-- ();
	Fixed	operator-- (int);
	Fixed	operator+ (const Fixed& p1)	 const;
	Fixed	operator- (const Fixed& p1)	 const;
	Fixed	operator* (const Fixed& p1)	 const;
	Fixed	operator/ (const Fixed& p1)	 const;
	bool	operator> (const Fixed& p1) const;
	bool	operator< (const Fixed& p1) const;
	bool	operator>= (const Fixed& p1) const;
	bool	operator<= (const Fixed& p1) const;
	bool 	operator== (const Fixed& p1) const;
	bool 	operator!= (const Fixed& p1) const;

	int		getRawBits(void)			const;
	float	toFloat(void)				const;
	int		toInt(void)					const;
	void	setRawBits(int const raw);
	static Fixed&	min(Fixed& p1, Fixed& p2);
	static const Fixed&	min(const Fixed& p1, const Fixed& p2);
	static Fixed&	max(Fixed& p1, Fixed& p2);
	static const Fixed&	max(const Fixed& p1, const Fixed& p2);
private:
	int _fixed;
	static const int num_of_frctnl_bits;
};
std::ostream& operator<< (std::ostream &out, Fixed const &current);

#endif //MODULE_02_EX02_FIXED_HPP