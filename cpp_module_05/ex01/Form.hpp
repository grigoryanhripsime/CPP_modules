#pragma once

#include <iostream>

class Form
{
    private:
        const std::string name;
        bool is_signed;
        const int grade_to_sign;
        const int grade_to_execute;
    public:
        Form();
        Form(const std::string name, const bool is_signed, const int grade_to_sign, const int grade_to_execute);
        Form(const Form &other);
        Form &operator=(const Form &other);
        ~Form();

        class GradeTooHighException : public exception 
        {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public exception 
        {
            public:
                const char* what() const throw();
        };
};