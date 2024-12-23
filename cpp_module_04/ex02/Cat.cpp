#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	std::cout<<"Cat default ctor called!\n";
}

Cat::~Cat()
{
	std::cout<<"Cat dtor called!\n";
	delete(this -> brain);
}

Cat::Cat(const Cat &other) : AAnimal(other)
{
	this -> type = other.type;
	this -> brain = new Brain(*other.brain);
	std::cout<<"Cat copy ctor called!\n";
}

Cat &Cat::operator=(const Cat &other)
{
	if (this == &other)
		return *this;
	std::cout<<"Cat copy assignment operator called!\n";
	this -> type = other.type;
	*(this -> brain) = *(other.brain);
	return *this;
}

void Cat::makeSound() const
{
	std::cout<<"Meow\n";
}
