#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout<<"Cat default ctor called!\n";
}

Cat::~Cat()
{
	std::cout<<"Cat dtor called!\n";
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout<<"Cat copy ctor called!\n";
}

Cat &Cat::operator=(const Cat &other)
{
	if (this == &other)
		return *this;
	// this -> type = other.type;
	Animal::operator=(other);
	std::cout<<"Cat copy assignment operator called!\n";
	return *this;
}

void Cat::makeSound() const
{
	std::cout<<"Meow\n";
}