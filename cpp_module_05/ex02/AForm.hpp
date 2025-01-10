#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool is_signed;
        const int grade_to_sign;
        const int grade_to_execute;
    public:
        //Orthodox
        AForm();
        AForm(const std::string &name, const bool is_signed, const int grade_to_sign, const int grade_to_execute);
        AForm(const AForm &other);
        AForm &operator=(const AForm &other);
        virtual ~AForm();

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
        std::string getName() const;
        bool getIs_signed() const;
        int getGrade_to_sign() const;
        int getGrade_to_execute() const;

        void beSigned(const Bureaucrat &ob) const;

		virtual void execute(Bureaucrat const &executor) const = 0;

		class IsSignedException : public std::exception 
        {
            public:
                const char* what() const throw();
        };
};

std::ostream&	operator<<(std::ostream& os, const AForm& ob);
