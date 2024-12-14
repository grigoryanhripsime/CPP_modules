#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout<<"FragTrap "<< this->name <<" was created!\n";
}

FragTrap::~FragTrap()
{
	std::cout<<"FragTrap "<< this->name <<" was destructed! (default ctor)\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout<<"FragTrap "<< this->name <<" was created! (ctor w/params)\n";
}

FragTrap::FragTrap(FragTrap &fragtrap) : ClapTrap(fragtrap)
{
	std::cout<<"FragTrap "<< this->name <<" was created! (copy ctor)\n";
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap)
{
	if (this == &fragtrap)
		return *this;
	std::cout<<"FragTrap copy assignment operator called!\n";
	this->name = fragtrap.name;
	this->hit_points = fragtrap.hit_points;
	this->energy_points = fragtrap.energy_points;
	this->attack_damage = fragtrap.attack_damage;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout<<"FragTrap named" << this->name <<" sends high fives\n";
}
