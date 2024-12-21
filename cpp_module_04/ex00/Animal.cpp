#include "Animal.hpp"

Animal::Animal() : type("Default")
{
	std::cout<<"Animal default ctor called!\n";
}

Animal::~Animal()
{
	std::cout<<"Animal dtor called!\n";
}

Animal::Animal(const Animal &other) : type(other.type)
{
	std::cout<<"Animal copy ctor called!\n";
}

Animal &Animal::operator=(const Animal &other)
{
	if (this == &other)
		return *this;
	this -> type = other.type;
	std::cout<<"Animal copy assignment operator called!\n";
	return *this;
}

void Animal::setType(std::string type)
{
	this -> type = type;
}

std::string Animal::getType() const
{
	return this -> type;
}

void Animal::makeSound() const
{
	std::cout<<"Default sound!\n";
}
