#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap claptrap;
	ClapTrap n = claptrap;
	std::cout<<claptrap.name<<" "<<claptrap.hit_points<<" "<<claptrap.energy_points<<" "<<claptrap.attack_damage<<"\n";
	claptrap.attack("aaa");
	std::cout<<claptrap.name<<" "<<claptrap.hit_points<<" "<<claptrap.energy_points<<" "<<claptrap.attack_damage<<"\n";
	claptrap.takeDamage(-5);
	std::cout<<claptrap.name<<" "<<claptrap.hit_points<<" "<<claptrap.energy_points<<" "<<claptrap.attack_damage<<"\n";
	claptrap.beRepaired(10);
	std::cout<<claptrap.name<<" "<<claptrap.hit_points<<" "<<claptrap.energy_points<<" "<<claptrap.attack_damage<<"\n";
	claptrap.takeDamage(5);
	std::cout<<claptrap.name<<" "<<claptrap.hit_points<<" "<<claptrap.energy_points<<" "<<claptrap.attack_damage<<"\n";
}