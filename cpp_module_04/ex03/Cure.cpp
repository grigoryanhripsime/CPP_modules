#include "Cure.hpp"

Cure::Cure(std::string const &type) : AMateria(type)
{
	std::cout<<"Cure ctor w/params called!\n";
	this -> type = type;
}

Cure::Cure() : AMateria("cure")  
{
	std::cout<<"Cure default ctor called!\n";
}

Cure::Cure(const Cure &other) : AMateria(other)
{
	std::cout<<"Cure copy ctor called!\n";
	this -> type = other.type;
}

Cure &Cure::operator=(const Cure &other)
{
	if (this == &other)
		return *this;
	std::cout<<"Cure sopy assignment operator called!\n";
	this -> type = other.type;
	return *this;
}

Cure::~Cure()
{
	std::cout<<"Cure dtor called!\n";
}

Cure* Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout<<"* heals "<<target.getName()<<"\'s wounds *\n";
}
