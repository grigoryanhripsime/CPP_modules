#include "Base.hpp"

Base::Base()
{
	std::cout<<"Base default ctor called!\n";
}

Base::Base(const Base &other)
{
	std::cout<<"Base copy ctor called!\n";
	*this = other;
}

Base &Base::operator=(const Base &other)
{
	if (this == &other)
		return *this;
	std::cout<<"Base copy assignment operator called!\n";
	return *this;
}


