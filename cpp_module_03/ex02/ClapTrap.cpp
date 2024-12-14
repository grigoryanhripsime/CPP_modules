#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Unknown"), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout<<"ClapTrap "<< this->name <<" was created! (default constructor)\n";
}

ClapTrap::~ClapTrap()
{
	std::cout<<"ClapTrap "<< this->name <<" was destructed! (default destructor)\n";
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout<<"ClapTrap "<< this->name <<" was created! (constructor w/param)\n";
}

ClapTrap::ClapTrap(ClapTrap &claptrap)
{
	this->name = claptrap.name;
	this->hit_points = claptrap.hit_points;
	this->energy_points = claptrap.energy_points;
	this->attack_damage = claptrap.attack_damage;
	std::cout<<"ClapTrap "<< this->name <<" was created! (copy constructor)\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	if (this == &claptrap)
		return *this;
	std::cout<<"ClapTrap copy assignment operator called!\n";
	this->name = claptrap.name;
	this->hit_points = claptrap.hit_points;
	this->energy_points = claptrap.energy_points;
	this->attack_damage = claptrap.attack_damage;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hit_points <= 0 || this->energy_points <= 0)
	{
		std::cout<<"ClapTrap "<< this->name <<" can't attack!\n";
		return ;
	}
	std::cout<<"ClapTrap "<< this->name <<" attacks "<< target <<", causing "<< this->attack_damage <<" points of damage!\n";
	this->energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points <= 0 || this->energy_points <= 0)
	{
		std::cout<<"ClapTrap "<< this->name <<" can't take damage!\n";
		return ;
	}
	std::cout<<"ClapTrap "<< this->name <<" takes damage\n";
	this->hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points <= 0 || this->energy_points <= 0)
	{
		std::cout<<"ClapTrap "<< this->name <<" can't be repaired!\n";
		return ;
	}
	std::cout<<"ClapTrap "<< this->name <<" repairs\n";
	this->hit_points += amount;
	this->energy_points--;
}
