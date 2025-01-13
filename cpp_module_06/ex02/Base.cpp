#include "Base.hpp"

Base::~Base()
{
	std::cout<<"Base dtor called!\n";
}

Base *Base::generate(void)
{
	std::srand(std::time(0));
    int random_choice = (std::rand() % 3);

	switch(random_choice)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
}

void Base::identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout<<"A\n";
	else if (dynamic_cast<B*>(p))
		std::cout<<"B\n";
	else if (dynamic_cast<C*>(p))
		std::cout<<"C\n";
	else
		std::cout<<"Not defined!\n";
}

void Base::identify(Base& p)
{
	
}

