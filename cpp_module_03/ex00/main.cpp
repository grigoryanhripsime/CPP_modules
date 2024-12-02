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
	// std::cout<<claptrap.name<<" "<<claptrap.hit_points<<" "<<claptrap.energy_points<<" "<<claptrap.attack_damage<<"\n";
	n2.takeDamage(1000);
	claptrap.takeDamage(16);
	// std::cout<<n2.name<<" "<<n2.hit_points<<" "<<n2.energy_points<<" "<<n2.attack_damage<<"\n";
	// std::cout<<claptrap.name<<" "<<claptrap.hit_points<<" "<<claptrap.energy_points<<" "<<claptrap.attack_damage<<"\n";
}
