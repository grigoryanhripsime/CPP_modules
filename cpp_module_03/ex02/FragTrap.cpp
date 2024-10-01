#include "FragTrap.hpp"

void FragTrap::highFivesGuys(void)
{
	std::cout<<"FragTrap named" << this->name <<" sends high fives\n";
}

FragTrap::FragTrap()
{
	std::cout<<"FragTrap default constructor called!\n";
	this->name = "Unknown";
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout<<"FragTrap default destructor called!\n";
}

FragTrap::FragTrap(std::string name)
{
	std::cout<<"FragTrap constructor with params called!\n";
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(FragTrap &fragtrap)
{
	std::cout<<"FragTrap copy constructor called!\n";
	this->name = fragtrap.name;
	this->hit_points = fragtrap.hit_points;
	this->energy_points = fragtrap.energy_points;
	this->attack_damage = fragtrap.attack_damage;
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

void FragTrap::attack(const std::string& target)
{
	if (this->hit_points <= 0 || this->energy_points <= 0)
	{
		std::cout<<"FragTrap "<< this->name <<" can't attack!\n";
		return ;
	}
	std::cout<<"FragTrap "<< this->name <<" attacks "<< target <<", causing "<< this->attack_damage <<" points of damage!\n";
	this->energy_points--;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points <= 0 || this->energy_points <= 0)
	{
		std::cout<<"FragTrap "<< this->name <<" can't take damage!\n";
		return ;
	}
	std::cout<<"FragTrap "<< this->name <<" takes damage\n";
	this->hit_points -= amount;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points <= 0 || this->energy_points <= 0)
	{
		std::cout<<"FragTrap "<< this->name <<" can't be repaired!\n";
		return ;
	}
	std::cout<<"FragTrap "<< this->name <<" repairs\n";
	this->hit_points += amount;
	this->energy_points--;
}
