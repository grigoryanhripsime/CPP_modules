#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat ob("John", 110);
	const ShrubberyCreationForm form1;
	RobotomyRequestForm form2;
	PresidentialPardonForm form3;
	ob.signForm(form1);
	ob.executeForm(form1);
}