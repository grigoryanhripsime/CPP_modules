#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main(void)
{
	ScavTrap scavtrap1;
	ClapTrap *scavtrap2 = new ScavTrap("anun");
	scavtrap2->attack("bbb");
	scavtrap1.attack("aaa");
	scavtrap1.takeDamage(-5);
	scavtrap1.beRepaired(10);
	scavtrap1.takeDamage(5);
	delete (scavtrap2);
}