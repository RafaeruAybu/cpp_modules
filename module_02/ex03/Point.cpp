#include "Point.hpp"

Point::Point() {}

Point::Point(float &p1, float &p2) : m_x(p1), m_y(p2) {}

Point::Point(const Point& p1) : m_x(p1.m_x), m_y(p1.m_y) {}

Fixed Point::get_x() const
{
	Fixed tmp(m_x);
	return tmp;
}

Fixed Point::get_y() const
{
	Fixed tmp(m_y);
	return tmp;
}






Point::~Point()
{

}