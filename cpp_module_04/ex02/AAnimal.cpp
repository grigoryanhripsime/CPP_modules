#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Default")
{
	std::cout<<"AAnimal default ctor called!\n";
}

AAnimal::~AAnimal()
{
	std::cout<<"AAnimal dtor called!\n";
}

AAnimal::AAnimal(const AAnimal &other) : type(other.type)
{
	std::cout<<"AAnimal copy ctor called!\n";
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	if (this == &other)
		return *this;
	this -> type = other.type;
	std::cout<<"AAnimal copy assignment operator called!\n";
	return *this;
}

void AAnimal::setType(std::string type)
{
	this -> type = type;
}

std::string AAnimal::getType() const
{
	return this -> type;
}
