#include "Dog.hpp"

Dog::Dog()
{
	std::cout<<"Dog default ctor called!\n";
	type = "Dog";
}

Dog::~Dog()
{
	std::cout<<"Dog dtor called!\n";
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout<<"Dog copy ctor called!\n";
}

Dog &Dog::operator=(const Dog &other)
{
	if (this == &other)
		return *this;
	this -> type = other.type;
	std::cout<<"Dog copy assignment operator called!\n";
	return *this;
}

void Dog::makeSound() const
{
	std::cout<<"Bark\n";
}
