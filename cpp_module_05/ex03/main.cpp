#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat ob("John", 10);

	Intern intern;
	AForm *form = intern.makeForm("RobotomyRequest", "robot");
	ob.signForm(*form);
	ob.executeForm(*form);
}