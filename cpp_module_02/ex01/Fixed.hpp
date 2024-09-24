#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int num;
		static const int flactional_bits = 8;
	public:
		Fixed();
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed &fixed);
		Fixed &operator=(const Fixed &fixed);
		~Fixed();
		int getRawBits (void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);