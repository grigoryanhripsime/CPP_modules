#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
	// this->weapon = weapon;
	std::cout<<"HumanA named "<<name<<" was created!"<<std::endl;
}
HumanA::~HumanA()
{
	std::cout<<"HumanA named "<<name<<" was destroyed!"<<std::endl;
}

void HumanA::attack()
{
	std::cout<<this->name<<" attacks with their "<<this->weapon.getType()<<std::endl;
}
