#include "HumanA.hpp"

void HumanA::setName(std::string name)
{
	this->name = name;
}

std::string HumanA::getName()
{
	return this->name;
}

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
	// this->weapon = weapon;
}

void HumanA::attack()
{
	std::cout<<this->name<<" attacks with their "<<this->weapon.getType();
}
