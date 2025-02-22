#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("Unknown"), grade(150)
{
    std::cout<<"Bureaucrat default ctor called!\n";
}

Bureaucrat::Bureaucrat(const std::string name, const int grade) : name(name), grade(grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    std::cout<<"Bureaucrat ctor w/params called!\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{
    if (other.grade < 1)
        throw GradeTooHighException();
    if (other.grade > 150)
        throw GradeTooLowException();
    std::cout<<"Bureaucrat copy ctor called!\n";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this == &other)
        return *this;
    (const_cast <std::string&> (this->name)) = other.name;
    this->grade = other.grade;
    if (other.grade < 1)
        throw GradeTooHighException();
    if (other.grade > 150)
        throw GradeTooLowException();
    std::cout<<"Bureaucrat copy assignment operator called!\n";
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout<<"Bureaucrat dtor called!\n";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}

std::string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::gradeIncrement()
{
    if (this->grade - 1 < 1)
        throw GradeTooHighException();
    this->grade--;
}

void Bureaucrat::gradeDecrement()
{
    if (this->grade + 1 > 150)
        throw GradeTooLowException();
    this->grade++;
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& ob)
{
	std::cout<<ob.getName()<<", bureaucrat grade "<< ob.getGrade()<<std::endl;
	return (os);
}

void Bureaucrat::signForm(const AForm &ob) const
{
    try
    {
        if (ob.getIs_signed())
        {
            std::cout<<this->getName()<<" coudn't sign "<<ob.getName()<<" because the form is already signed!"<<std::endl;
            return ;
        }
        ob.beSigned(*this);
        std::cout<<this->getName()<<" signed "<<ob.getName()<<std::endl;
    }
    catch(std::exception& e)
    {
        std::cout<<this->getName()<<" coudn't sign "<<ob.getName()<<" because "<< e.what()<<std::endl;
    }
}

void Bureaucrat::executeForm(AForm const &form)
{
	form.execute(*this);
	std::cout<<"Bureaucrat named "<<this->name<<" executed the form named "<<form.getName()<<std::endl;
}

