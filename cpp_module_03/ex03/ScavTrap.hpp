#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &scavtrap);
		ScavTrap &operator=(const ScavTrap &scavtrap);
		void attack(const std::string& target);
		void guardGate();
};