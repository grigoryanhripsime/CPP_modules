#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	std::cout<<"AMateria ctor w/params called!\n";
	this -> type = type;
}

AMateria::AMateria()
{
	std::cout<<"AMateria default ctor called!\n";
}

AMateria::AMateria(const AMateria &other)
{
	std::cout<<"AMateria copy ctor called!\n";
	this -> type = other.type;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	if (this == &other)
		return *this;
	std::cout<<"AMateria sopy assignment operator called!\n";
	this -> type = other.type;
	return *this;
}

AMateria::~AMateria()
{
	std::cout<<"AMateria dtor called!\n";
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria use " << this->getType() << " on " << target.getName() << std::endl;
}

std::string const &AMateria::getType() const
{
	return this -> type;
}
