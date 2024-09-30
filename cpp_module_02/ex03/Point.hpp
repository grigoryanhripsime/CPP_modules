#pragma once

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		Point(const float x, const float y);
		Point (const Point &point);
		Point &operator=(const Point &point);
		float getX() const;
		float getY() const;
		~Point();
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
