#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(int argc, char *argv[])
{
	float p1 = 0.0f;
	float p2 = 6.0f;
	Point a(p1, p1);
	Point b(p1, p2);
	Point c(p2, p2);
//	float px = 0.4;
//	float py = 4.1;
	float px = 5.4;
	float py = 4.1;
	Point p(px, py);
	std::cout << "BSP IS: " << bsp(a, b, c, p) << std::endl;
	//also for test purpose
	//triangle (1,1;1,2;2,2) point (1,1.5) on the edge
	return (0);
}
