#include "HumanB.hpp"

void HumanB::setName(std::string name)
{
	this->name = name;
}

std::string HumanB::getName()
{
	return this->name;
}

void HumanB::setWeapon(Weapon weapon)
{
	this->weapon = &weapon;
}

Weapon HumanB::getWeapon()
{
	return *(this->weapon);
}

void HumanB::attack()
{
	if (!this->weapon)
		std::cout<<this->name<<" can't attack"<<std::endl;
	else
		std::cout<<this->name<<" attacks with their "<<this->weapon->getType()<<std::endl;
}


HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = nullptr;
}
