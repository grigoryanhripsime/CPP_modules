#include <iostream>
#include "Zombie.hpp"

int main(void)
{
	randomChump("anun2");
	Zombie* z = newZombie("anun");
	z->announce();
	delete(z);
}