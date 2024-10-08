#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		virtual ~ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &scavtrap);
		ScavTrap &operator=(const ScavTrap &scavtrap);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void guardGate();
};