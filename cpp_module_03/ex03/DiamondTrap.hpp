#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string name;

	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap &diamondtrap);
		DiamondTrap &operator=(const DiamondTrap &diamondtrap);
		using ScavTrap::attack;
		void whoAmI();
};
