#include "Fixed.hpp"

Fixed::Fixed()
{
	this->num = 0;
	std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const int num)
{
	std::cout<<"Int constructor called"<<std::endl;
	this->num = num * (1 << this->flactional_bits);
}

Fixed::Fixed(const float num)
{
	std::cout<<"Float constructor called"<<std::endl;
	this->num = roundf(num * (1 << this->flactional_bits));
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout<<"Copy constructor called"<<std::endl;
	this->num = fixed.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	if (this == &fixed)
		return *this;
	std::cout<<"Copy assignment operator called"<<std::endl;
	this->num = fixed.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits (void) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return this->num;
}

void Fixed::setRawBits(int const raw)
{
	std::cout<<"setRawBits member function called"<<std::endl;
	this->num = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->num / (1 << this->flactional_bits));
}

int Fixed::toInt(void) const
{
	return this->num / (1 << this->flactional_bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}

bool Fixed::operator>(const Fixed &other) const
{
	if (this->num > other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<(const Fixed &other) const
{
	if (this->num < other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed &other) const
{
	if (this->num >= other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed &other) const
{
	if (this->num <= other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator==(const Fixed &other) const
{
	if (this->num == other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed &other) const
{
	if (this->num != other.getRawBits())
		return true;
	return false;
}

Fixed Fixed::operator+(const Fixed &other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed& Fixed::operator++()
{
	this->num++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed  	tmp;
	tmp = *this;
	this->num++;
	return tmp;
}

Fixed& Fixed::min(Fixed& first, Fixed& second)
{
	if (first < second)
		return first;
	return second;
}

Fixed& Fixed::min(const Fixed& first, const Fixed& second)
{
	if (first < second)
		return (Fixed&)first;
	return (Fixed&)second;
}

Fixed& Fixed::max(Fixed& first, Fixed& second)
{
	if (first > second)
		return first;
	return second;
}

Fixed& Fixed::max(const Fixed& first, const Fixed& second)
{
	if (first > second)
		return (Fixed&)first;
	return (Fixed&)second;
}