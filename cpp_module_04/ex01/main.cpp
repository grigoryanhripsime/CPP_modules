#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// Cat cat1;
	// Cat cat2;
	// cat1 = cat2;
	// cat2.setIdeas(0, "hello");
	// cat1.setIdeas(0, "barev");
	// std::cout<<cat1.brain->ideas[0]<<std::endl;
	// std::cout<<cat2.brain->ideas[0]<<std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	
	//TODO: add more cases
	return 0;
}