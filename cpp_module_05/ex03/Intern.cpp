#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	std::cout<<"Intern default ctor called!\n";
}

Intern::Intern(const Intern &other)
{
	*this = other;
	std::cout<<"Intern copy ctor called!\n";
}

Intern &Intern::operator=(const Intern &other)
{
	if (this == &other)
		return *this;
	std::cout<<"Intern copy assignment operator called!\n";
	*this = other;
	return *this;
}

Intern::~Intern()
{
	std::cout<<"Intern default dtor called!\n";
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	std::string arr[] = {"PresidentialPardon", "RobotomyRequest", "ShrubberyCreation"};
	int i = 0;	
	while (i < 3 && name != arr[i])
		i++;
	if (i < 3)
		std::cout<<"Intern creates "<<name<<std::endl;
	else
		throw Intern::NoSuchFormException();
	switch(i)
	{
		case 0:
			return (new PresidentialPardonForm(target));
		case 1:
			return (new RobotomyRequestForm(target));
		case 2:
			return (new ShrubberyCreationForm(target));
	}
	return NULL;
}

const char* Intern::NoSuchFormException::what() const throw()
{
	return "No such form type!\n";
}