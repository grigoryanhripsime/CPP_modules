#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(std::string name);
		void setName(std::string name);
		std::string getName();
		void setWeapon(Weapon weapon);
		Weapon getWeapon();
		void attack();
};

#endif