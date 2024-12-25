#include "Ice.hpp"

Ice::Ice(std::string const &type) : AMateria(type)
{
	std::cout<<"Ice ctor w/params called!\n";
	this -> type = type;
}

Ice::Ice() : AMateria("ice")  
{
	std::cout<<"Ice default ctor called!\n";
}

Ice::Ice(const Ice &other) : AMateria(other)
{
	std::cout<<"Ice copy ctor called!\n";
	this -> type = other.type;
}

Ice &Ice::operator=(const Ice &other)
{
	if (this == &other)
		return *this;
	std::cout<<"Ice sopy assignment operator called!\n";
	this -> type = other.type;
	return *this;
}

Ice::~Ice()
{
	std::cout<<"Ice dtor called!\n";
}

Ice* Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout<<"* shoots an ice bolt at "<<target.name<<" *\n";
}
