#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Default")
{
	std::cout<<"WrongAnimal default ctor called!\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout<<"WrongAnimal dtor called!\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
	std::cout<<"WrongAnimal copy ctor called!\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this == &other)
		return *this;
	this -> type = other.type;
	std::cout<<"WrongAnimal copy assignment operator called!\n";
	return *this;
}

void WrongAnimal::setType(std::string type)
{
	this -> type = type;
}

std::string WrongAnimal::getType() const
{
	return this -> type;
}

void WrongAnimal::makeSound() const
{
	std::cout<<"Default sound!\n";
}
