#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool is_signed;
        const int grade_to_sign;
        const int grade_to_execute;
    public:
        //Orthodox
        Form();
        Form(const std::string name, const bool is_signed, const int grade_to_sign, const int grade_to_execute);
        Form(const Form &other);
        Form &operator=(const Form &other);
        ~Form();

        //Exception classes
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

        //Getters
        const std::string getName() const;
        bool getIs_signed() const;
        int getGrade_to_sign() const;
        int getGrade_to_execute() const;

        void beSigned(const Bureaucrat &ob) const;
};

std::ostream&	operator<<(std::ostream& os, const Form& ob);
