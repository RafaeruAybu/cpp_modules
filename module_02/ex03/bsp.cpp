#include "Point.hpp"

//Barycentric method. If s and t are not opposit signs nor zero. Algo works for points on edges.
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed s = (a.get_x() - c.get_x()) * (point.get_y() - c.get_y()) - (a.get_y() - c.get_y()) * (point.get_x()
			- c.get_x());
	Fixed t = (b.get_x() - a.get_x()) * (point.get_y() - a.get_y()) - (b.get_y() - a.get_y()) * (point.get_x()
			- a.get_x());
	if ((s < 0) != (t < 0) && s != 0 && t != 0)
		return false;
	Fixed d = (c.get_x() - b.get_x()) * (point.get_y() - b.get_y()) - (c.get_y() - b.get_y()) * (point.get_x()
			- b.get_x());
	return d == 0 || (d < 0) == (s + t <= 0);
}
