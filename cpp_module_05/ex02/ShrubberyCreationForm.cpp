#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 0, 145, 137), target("Default")
{
	std::cout<<"ShrubberyCreationForm default ctor called!\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), target(other.target)
{
	if (other.grade_to_sign > 145)
		throw GradeTooLowException();
	if (other.grade_to_execute > 145)
		throw GradeTooLowException();
	std::cout<<"ShrubberyCreationForm copy ctor called!\n";
}

ShrubberyCreationForm::ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other)
{
	if (this == &other)
		return *this;
	if (other.grade_to_sign > 145)
		throw GradeTooLowException();
	if (other.grade_to_execute > 145)
		throw GradeTooLowException();
	AForm::operator=(other);
	std::cout<<"ShrubberyCreationForm copy assignment operator called!\n";
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout<<"ShrubberyCreationForm dtor called!\n";
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::ofstream out_file(target + (std::string)">_shrubbery");
	if (!out_file)
		throw Exception("File coudn't be opened!\n");
	out_file<<"ASCII tree\n";
	out_file.close();
}