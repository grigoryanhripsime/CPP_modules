#pragma once

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string name, const int grade);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat &operator=(const Bureaucrat &other);
        ~Bureaucrat();

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };

        std::string getName() const;
        int getGrade() const;

        void gradeIncrement();
        void gradeDecrement();

        void signForm(const Form &ob) const;
};
std::ostream&	operator<<(std::ostream& os, const Bureaucrat& ob);
