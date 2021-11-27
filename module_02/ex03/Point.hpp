#ifndef MODULE_02_EX03_POINT_HPP
#define MODULE_02_EX03_POINT_HPP
#include <iostream>	//for io
#include <cmath>	//for roundf
#include "Fixed.hpp"

class Point
{
public:
	Point();
	Point(float& p1, float& p2);
	Point(const Point& p1);

	~Point();

	Fixed get_x() const;
	Fixed get_y() const;
private:
	const Fixed m_x;
	const Fixed m_y;
};

#endif //MODULE_02_EX03_POINT_HPP