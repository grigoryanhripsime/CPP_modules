#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap &fragtrap);
		FragTrap &operator=(const FragTrap &fragtrap);
		void highFivesGuys(void);
};