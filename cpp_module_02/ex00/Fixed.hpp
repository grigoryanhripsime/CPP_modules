#pragma once

#include <iostream>

class Fixed
{
	private:
		int a;
		static const int b = 8;
	public:
		Fixed();
		Fixed(Fixed &fixed);
		Fixed &operator=(const Fixed &fixed);
		~Fixed();
		int getRawBits (void) const;
		void setRawBits(int const raw);
};