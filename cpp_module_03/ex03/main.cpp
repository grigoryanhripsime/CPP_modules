#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap *ptr;
	ptr = new Scavtrap();
	
	DiamondTrap d("anun");
	d.attack("someone");
	d.whoAmI();
}