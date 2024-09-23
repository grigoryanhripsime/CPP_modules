#include "Fixed.hpp"

Fixed::Fixed()
{
	this->a = 0;
	std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(Fixed &fixed)
{
	this->a = fixed.a;
	std::cout<<"Copy constructor called"<<std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	this->a = fixed.a;
	std::cout<<"Copy assignment operator called"<<std::endl;
	return *this;
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits (void) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return this->a;
}

void Fixed::setRawBits(int const raw)
{
	std::cout<<"setRawBits member function called"<<std::endl;
	this->a = raw;
}

