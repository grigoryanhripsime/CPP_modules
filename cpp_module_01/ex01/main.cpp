#include <iostream>
#include "Zombie.hpp"

int main(void)
{
	Zombie* z = zombieHorde(3, "Anun");
	for (int i = 0; i < 3; i++)
		z[i].announce();
	delete[] z;
}