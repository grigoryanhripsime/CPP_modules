#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap claptrap;
	ScavTrap n("anun");
	FragTrap m("anun2");
	// std::cout<<claptrap.name<<" "<<claptrap.hit_points<<" "<<claptrap.energy_points<<" "<<claptrap.attack_damage<<"\n";
	claptrap.attack("aaa");
	n.attack("bbb");
	claptrap.takeDamage(-5);
	claptrap.beRepaired(10);
	m.highFivesGuys();
	claptrap.takeDamage(5);
}