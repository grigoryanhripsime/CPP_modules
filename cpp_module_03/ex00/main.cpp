#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap claptrap;
	ClapTrap n = claptrap;
	// std::cout<<claptrap.name<<" "<<claptrap.hit_points<<" "<<claptrap.energy_points<<" "<<claptrap.attack_damage<<"\n";
	claptrap.attack("aaa");
	claptrap.takeDamage(-5);
	claptrap.beRepaired(10);
	claptrap.takeDamage(5);
}