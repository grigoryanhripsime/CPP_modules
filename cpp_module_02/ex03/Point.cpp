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
	if (this == &point)
		return *this;
	std::cout<<"Point copy assignment operator called"<<std::endl;
	(void) point;
	return *this;
}

float Point::getX() const
{
	return this->x.toFloat();
}

float Point::getY() const
{
	return this->y.toFloat();
}

Point::~Point()
{
	std::cout<<"Point destructor called"<<std::endl;
}

float sign(const Point &p1, const Point &p2, const Point &p3)
{
	return ((p1.getX() - p3.getX()) * (p2.getY() - p3.getY())
			- (p2.getX() - p3.getX()) * (p1.getY() - p3.getX()));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	if ((point.getX() - a.getX()) / (a.getX() - b.getX()) == (point.getY() - a.getY()) / (a.getY() - b.getY()))
		return false;
	if ((point.getX() - b.getX()) / (b.getX() - c.getX()) == (point.getY() - b.getY()) / (b.getY() - c.getY()))
		return false;
	if ((point.getX() - a.getX()) / (a.getX() - c.getX()) == (point.getY() - a.getY()) / (a.getY() - c.getY()))
		return false;
	float d1 = sign(point, a, b);
	float d2 = sign(point, b, c);
	float d3 = sign(point, c, a);
	if (d1 == 0 || d2 == 0 || d3 == 0)
		return false;
	return !(((d1 < 0) || (d2 < 0) || (d3 < 0)) && ((d1 > 0) || (d2 > 0) || (d3 > 0)));
}




