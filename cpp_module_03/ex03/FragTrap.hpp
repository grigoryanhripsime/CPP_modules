#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap &fragtrap);
		FragTrap(int, int);
		FragTrap &operator=(const FragTrap &fragtrap);
		void highFivesGuys(void);
};