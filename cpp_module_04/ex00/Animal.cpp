#include "Animal.hpp"

Animal::Animal()
{
	cout<<"Animal default ctor called!\n";
}

Animal::~Animal()
{
	cout<<"Animal dtor called!\n";
}

Animal::Animal(const Animal &other) : type(other.type)
{
	cout<<"Animal copy ctor called!\n";
}

Animal &Animal::operator=(const Animal &other)
{
	if (this == *other)
		return *this;
	this -> type = other.type;
	cout<<"Animal copy assignment operator called!\n";
}
