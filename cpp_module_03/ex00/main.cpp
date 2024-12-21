#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap claptrap("eee");
	ClapTrap n = claptrap;
	ClapTrap n2;
	claptrap.attack("aaa");
	claptrap.takeDamage(5);
	claptrap.beRepaired(2147483648);
	claptrap.beRepaired(2147483648);
	claptrap.beRepaired(2147483648);
	n2 = claptrap;
	n2.takeDamage(1000);
	claptrap.takeDamage(16);
}
