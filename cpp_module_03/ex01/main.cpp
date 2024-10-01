#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap claptrap;
	ScavTrap n("anun");
	// std::cout<<claptrap.name<<" "<<claptrap.hit_points<<" "<<claptrap.energy_points<<" "<<claptrap.attack_damage<<"\n";
	claptrap.attack("aaa");
	n.attack("bbb");
	claptrap.takeDamage(-5);
	claptrap.beRepaired(10);
	claptrap.takeDamage(5);
}