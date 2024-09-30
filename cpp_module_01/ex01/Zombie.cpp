#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "Unknown";
	std::cout<<"Zombie named "<<this->name<<" was destroyed"<<std::endl;
}
Zombie::~Zombie()
{
	std::cout<<"Zombie named "<<this->name<<" was destroyed"<<std::endl;
}

void Zombie::announce(void)
{
	std::cout<<this->name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}
