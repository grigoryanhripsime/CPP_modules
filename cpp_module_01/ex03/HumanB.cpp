#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	*(this->weapon) = Weapon("");
	std::cout<<"HumanB named "<<name<<" was created!"<<std::endl;
}

HumanB::~HumanB()
{
	std::cout<<"HumanB named "<<name<<" was destroyed!"<<std::endl;
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


