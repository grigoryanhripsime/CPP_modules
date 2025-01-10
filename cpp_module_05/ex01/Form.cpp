#include "Form.hpp"

Form::Form() : name("Unknown"), is_signed(0), grade_to_sign(150), grade_to_execute(150)
{
    std::cout<<"Form default ctor called!\n";
}

Form::Form(const std::string &name, const bool is_signed, const int grade_to_sign, const int grade_to_execute) : name(name), is_signed(is_signed), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute)
{
    std::cout<<"Form ctor w/params called!\n";
}

Form::Form(const Form &other) : name(other.name), is_signed(other.is_signed), grade_to_sign(other.grade_to_sign), grade_to_execute(other.grade_to_execute)
{
    std::cout<<"Form copy ctor called!\n";
}

Form &Form::operator=(const Form &other)
{
    if (this == &other)
        return *this;
    const_cast <std::string&> (this->name) = other.name;
    this->is_signed = other.is_signed;
    const_cast <int&> (this->grade_to_sign) = other.grade_to_sign;
    const_cast <int&> (this->grade_to_execute) = other.grade_to_execute;
    std::cout<<"Form copy assignment operator called!\n";
    return *this;
}

Form::~Form()
{
    std::cout<<"Form dtor called!\n";
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}

std::string Form::getName() const
{
    return this->name;
}

bool Form::getIs_signed() const
{
    return this->is_signed;
}

int Form::getGrade_to_sign() const
{
    return this->grade_to_sign;
}

int Form::getGrade_to_execute() const
{
    return this->grade_to_execute;
}

std::ostream&	operator<<(std::ostream& os, const Form& ob)
{
    std::cout<<"Name: "<<ob.getName()<<std::endl;
    std::cout<<"Is signed: "<<ob.getIs_signed()<<std::endl;
    std::cout<<"Grade to sign: "<<ob.getGrade_to_sign()<<std::endl;
    std::cout<<"Grade to execute: "<<ob.getGrade_to_execute()<<std::endl;
    return os;
}

void Form::beSigned(const Bureaucrat &ob) const
{
    if (ob.getGrade() <= this->grade_to_sign)
        const_cast <Form*> (this)->is_signed = 1;
    else
        throw GradeTooLowException();
}

