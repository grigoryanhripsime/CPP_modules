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
		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;
		const Fixed operator+(const Fixed &other) const;
		const Fixed operator-(const Fixed &other) const;
		const Fixed operator*(const Fixed &other) const;
		const Fixed operator/(const Fixed &other) const;
		const Fixed &operator++(); //pre-increment
		const Fixed operator++(int); //post-increment
		const Fixed &operator--(); //pre-increment
		const Fixed operator--(int); //post-increment
		static Fixed& min(Fixed& first, Fixed& second);
		static Fixed& min(const Fixed& first, const Fixed& second);
		static Fixed& max(Fixed& first, Fixed& second);
		static Fixed& max(const Fixed& first, const Fixed& second);

};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);