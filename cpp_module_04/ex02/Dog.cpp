#include "Dog.hpp"

Dog::Dog()
{
	std::cout<<"Dog default ctor called!\n";
	type = "Dog";
	brain = new Brain();
}

Dog::~Dog()
{
	std::cout<<"Dog dtor called!\n";
	delete(brain);
}

Dog::Dog(const Dog &other) : AAnimal(other)
{
	std::cout<<"Dog copy ctor called!\n";
	this -> type = other.type;
	this -> brain = new Brain(*other.brain);
}

Dog &Dog::operator=(const Dog &other)
{
	if (this == &other)
		return *this;
	std::cout<<"Dog copy assignment operator called!\n";
	this -> type = other.type;
	*(this -> brain) = *(other.brain);
	return *this;
}

void Dog::makeSound() const
{
	std::cout<<"Bark\n";
}
