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

}

Point &Point::operator=(const Point &point)
{
	(void) point;
	return *this;
}

Point::~Point()
{
	std::cout<<"Default Point destructor called"<<std::endl;
}











