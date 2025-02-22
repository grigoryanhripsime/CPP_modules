#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap()
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout<<"ScavTrap "<< this->name <<" was created!\n";
}

ScavTrap::~ScavTrap()
{
	std::cout<<"ScavTrap "<< this->name <<" was destructed! (default ctor)\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout<<"ScavTrap "<< this->name <<" was created! (ctor w/params)\n";
}

ScavTrap::ScavTrap(ScavTrap &scavtrap) : ClapTrap(scavtrap)
{
	std::cout<<"ScavTrap "<< this->name <<" was created! (copy ctor)\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
	if (this == &scavtrap)
		return *this;
	std::cout<<"ScavTrap copy assignment operator called!\n";
	this->name = scavtrap.name;
	this->hit_points = scavtrap.hit_points;
	this->energy_points = scavtrap.energy_points;
	this->attack_damage = scavtrap.attack_damage;
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->hit_points <= 0 || this->energy_points <= 0)
	{
		std::cout<<"ScavTrap "<< this->name <<" can't attack!\n";
		return ;
	}
	std::cout<<"ScavTrap "<< this->name <<" attacks "<< target <<", causing "<< this->attack_damage <<" points of damage!\n";
	this->energy_points--;
}

void ScavTrap::guardGate()
{
	std::cout<<"ScavTrap named" << this->name <<" is now in Gate keeper mode\n";
}
