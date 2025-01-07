#include "AForm.hpp"

AForm::AForm() : name("Unknown"), is_signed(0), grade_to_sign(150), grade_to_execute(150)
{
    std::cout<<"AForm default ctor called!\n";
}

AForm::AForm(const std::string name, const bool is_signed, const int grade_to_sign, const int grade_to_execute) : name(name), is_signed(is_signed), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute)
{
	if (grade_to_sign > 150)
		throw GradeTooLowException();
	if (grade_to_execute > 150)
		throw GradeTooLowException();
	if (grade_to_sign < 1)
		throw GradeTooHighException();
	if (grade_to_execute < 1)
		throw GradeTooHighException();
    std::cout<<"AForm ctor w/params called!\n";
}

AForm::AForm(const AForm &other) : name(other.name), is_signed(other.is_signed), grade_to_sign(other.grade_to_sign), grade_to_execute(other.grade_to_execute)
{
    std::cout<<"AForm copy ctor called!\n";
}

AForm &AForm::operator=(const AForm &other)
{
    if (this == &other)
        return *this;
    const_cast <std::string&> (this->name) = other.name;
    this->is_signed = other.is_signed;
    const_cast <int&> (this->grade_to_sign) = other.grade_to_sign;
    const_cast <int&> (this->grade_to_execute) = other.grade_to_execute;
    std::cout<<"AForm copy assignment operator called!\n";
    return *this;
}

AForm::~AForm()
{
    std::cout<<"AForm dtor called!\n";
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}

const std::string AForm::getName() const
{
    return this->name;
}

bool AForm::getIs_signed() const
{
    return this->is_signed;
}

int AForm::getGrade_to_sign() const
{
    return this->grade_to_sign;
}

int AForm::getGrade_to_execute() const
{
    return this->grade_to_execute;
}

std::ostream&	operator<<(std::ostream& os, const AForm& ob)
{
    std::cout<<"Name: "<<ob.getName()<<std::endl;
    std::cout<<"Is signed: "<<ob.getIs_signed()<<std::endl;
    std::cout<<"Grade to sign: "<<ob.getGrade_to_sign()<<std::endl;
    std::cout<<"Grade to execute: "<<ob.getGrade_to_execute()<<std::endl;
    return os;
}

void AForm::beSigned(const Bureaucrat &ob) const
{
    if (ob.getGrade() <= this->grade_to_sign)
        const_cast <AForm*> (this)->is_signed = 1;
    else
        throw GradeTooLowException();
}

