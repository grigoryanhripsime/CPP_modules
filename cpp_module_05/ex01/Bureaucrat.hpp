#pragma once

#include <iostream>

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

        const std::string getName() const;
        int getGrade() const;

        void gradeIncrement();
        void gradeDecrement();
};
std::ostream&	operator<<(std::ostream& os, const Bureaucrat& ob);
