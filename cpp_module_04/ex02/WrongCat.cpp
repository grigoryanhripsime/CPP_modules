#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout<<"WrongCat default ctor called!\n";
	type = "WrongAnimal";
}

WrongCat::~WrongCat()
{
	std::cout<<"WrongCat dtor called!\n";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout<<"WrongCat copy ctor called!\n";
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this == &other)
		return *this;
	this -> type = other.type;
	std::cout<<"WrongCat copy assignment operator called!\n";
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout<<"Meow\n";
}