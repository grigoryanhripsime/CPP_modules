#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
	std::cout<<"Weapon with type of "<<this->type<<" was created!"<<std::endl;
}

Weapon::~Weapon()
{
	std::cout<<"Weapon with type of "<<this->type<<" was destroyed!"<<std::endl;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}

std::string Weapon::getType()
{
	return this->type;
}

