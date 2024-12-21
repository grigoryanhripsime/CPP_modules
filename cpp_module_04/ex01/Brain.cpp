#include "Brain.hpp"

Brain::Brain()
{
	std::cout<<"Brain default ctor called!\n";
}

Brain::Brain(const Brain &other)
{
	std::cout<<"Brain copy ctor called!\n";
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

Brain &Brain::operator=(const Brain &other)
{
	if (this == &other)
		return *this;
	std::cout<<"Brain copy assignment operator called!\n";
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout<<"Brain dtor called!\n";
}
