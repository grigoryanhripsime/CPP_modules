#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap claptrap;
	ScavTrap n("anun");
	FragTrap m("anun2");
	claptrap.attack("aaa");
	n.attack("bbb");
	claptrap.takeDamage(-5);
	claptrap.beRepaired(10);
	m.highFivesGuys();
	claptrap.takeDamage(5);
}