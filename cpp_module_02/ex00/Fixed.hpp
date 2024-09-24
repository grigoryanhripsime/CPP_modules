#pragma once

#include <iostream>

class Fixed
{
	private:
		int num;
		static const int flactional_bits = 8;
	public:
		Fixed();
		Fixed(Fixed &fixed);
		Fixed &operator=(const Fixed &fixed);
		~Fixed();
		int getRawBits (void) const;
		void setRawBits(int const raw);
};