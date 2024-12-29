#include "Form.hpp"

Form::Form() : name("Unknown"), is_signed(0), grade_to_sign(150), grade_to_execute(150)
{
    std::cout<<"Form default ctor called!\n";
}

Form::Form(const std::string name, const bool is_signed, const int grade_to_sign, const int grade_to_execute) : name(name), is_signed(is_signed), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute)
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

const char* Form::GradeTooHighException() const throw()
{
    return "Grade is too high!\n";
}

const char* Form::GradeTooLowException() const throw()
{
    return "Grade is too low!\n";
}
