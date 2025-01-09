#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequest", 0, 72, 45), target("Default")
{
	std::cout<<"RobotomyRequestForm default ctor called!\n";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequest", 0, 72, 45), target(target)
{
	std::cout<<"RobotomyRequestForm ctor w/params called!\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), target(other.target)
{
	if (other.getGrade_to_sign() > 72)
		throw GradeTooLowException();
	if (other.getGrade_to_execute() > 45)
		throw GradeTooLowException();
	std::cout<<"RobotomyRequestForm copy ctor called!\n";
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this == &other)
		return *this;
	if (other.getGrade_to_sign() > 72)
		throw GradeTooLowException();
	if (other.getGrade_to_execute() > 45)
		throw GradeTooLowException();
	AForm::operator=(other);
	std::cout<<"RobotomyRequestForm copy assignment operator called!\n";
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout<<"RobotomyRequestForm dtor called!\n";
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);

	std::cout<<"Some drilling noices\n";
	srand(static_cast<unsigned int>(time(0)));
	if (rand() % 2 == 1)
		std::cout<<this->target<<" has been robotomized successfully!\n";
	else
		std::cout<<this->target<<" robotomy failed.\n";
}