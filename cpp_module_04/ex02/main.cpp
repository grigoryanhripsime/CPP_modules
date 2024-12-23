#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// const AAnimal animal;
	Cat cat;
	cat.makeSound();

	AAnimal *panimal = &cat;

	panimal ->makeSound();
	
	//TODO: add more cases
	return 0;
}