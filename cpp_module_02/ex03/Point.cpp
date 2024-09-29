#include "Point.hpp"

Point::Point() : x(0), y(0)
{
	std::cout<<"Default Point constructor called"<<std::endl;
}

Point::Point(const float x, const float y) : x(x), y(y)
{
	std::cout<<"Point constructor with params called"<<std::endl;
}

Point::Point(const Point &point) : x(point.x), y(point.y)
{
	std::cout<<"Point copy constructor called"<<std::endl;
}

Point &Point::operator=(const Point &point)
{
	(void) point;
	return *this;
}

Fixed Point::getX() const
{
	return this->x;
}

Fixed Point::getY() const
{
	return this->y;
}

Point::~Point()
{
	std::cout<<"Point destructor called"<<std::endl;
}

float sign(const Point &p1, const Point &p2, const Point &p3)
{
	// std::cout<<"hehe"<<std::endl;
	float p1_x = p1.getX().toFloat();
	float p1_y = p1.getY().toFloat();
	float p2_x = p2.getX().toFloat();
	float p2_y = p2.getY().toFloat();
	float p3_x = p3.getX().toFloat();
	float p3_y = p3.getY().toFloat();
	// std::cout<<"hehe"<<std::endl;
	return ((p1_x - p3_x) * (p2_y - p3_y) - (p2_x - p3_x) * (p1_y - p3_y));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	// std::cout<<"hehe"<<std::endl;
	float d1 = sign(point, a, b);
	float d2 = sign(point, b, c);
	float d3 = sign(point, c, a);

	const float epsilon = 1e-6;
	if (d1 == 0 || d2 == 0 || d3 == 0 || fabs(d1) < epsilon || fabs(d2) < epsilon || fabs(d3) < epsilon)
		return false;
	return !(((d1 < -epsilon) || (d2 < -epsilon) || (d3 < -epsilon)) && ((d1 > epsilon) || (d2 > epsilon) || (d3 > epsilon)));
}




