#pragma once

#include <iostream>

class ClapTrap
{
	public: 
		std::string name;
		long long hit_points;
		long long energy_points;
		long long attack_damage;
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &claptrap);
		ClapTrap &operator=(const ClapTrap &claptrap);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
