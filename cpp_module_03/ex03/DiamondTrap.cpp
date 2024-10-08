#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Unknown_clap_name"), ScavTrap(), FragTrap(100, 30), name("Unknown")
{
	std::cout<<"DiamondTrap "<< this->name <<" was created!\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout<<"DiamondTrap "<< this->name <<" was destructed!\n";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(100, 30)
{
	this->name = name;
	std::cout<<"DiamondTrap "<< name <<" was created!\n";
}

DiamondTrap::DiamondTrap(DiamondTrap& diamondtrap) : ClapTrap(diamondtrap), ScavTrap(diamondtrap), FragTrap(diamondtrap)
{
	this->name = diamondtrap.name;
	this->hit_points = diamondtrap.hit_points;
	this->energy_points = diamondtrap.energy_points;
	this->attack_damage = diamondtrap.attack_damage;
	std::cout<<"DiamondTrap "<< this->name <<" was created!\n";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap)
{
	if (this == &diamondtrap)
		return *this;
	std::cout<<"DiamondTrap copy assignment operator called!\n";
	this->name = diamondtrap.name;
	this->hit_points = diamondtrap.hit_points;
	this->energy_points = diamondtrap.energy_points;
	this->attack_damage = diamondtrap.attack_damage;
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout<<"DiamondTrap's name is: "<<this->name<<std::endl;
	std::cout<<"ClapTrap's name is: "<< ClapTrap::name<<std::endl;
}
