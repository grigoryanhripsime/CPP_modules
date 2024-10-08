#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout<<"FragTrap "<< this->name <<" was created!\n";
}

FragTrap::~FragTrap()
{
	std::cout<<"FragTrap "<< this->name <<" was destructed!\n";
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout<<"FragTrap "<< this->name <<" was created!\n";
}

FragTrap::FragTrap(int, int)
{

	this->hit_points = 100;
	this->attack_damage = 30;
	std::cout<<"FragTrap "<< this->name <<" was created!\n";
}

FragTrap::FragTrap(FragTrap &fragtrap)
{
	this->name = fragtrap.name;
	this->hit_points = fragtrap.hit_points;
	this->energy_points = fragtrap.energy_points;
	this->attack_damage = fragtrap.attack_damage;
	std::cout<<"FragTrap "<< this->name <<" was created!\n";
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