#pragma once

#include <iostream>
#include "AForm.hpp"
#include <fstream>
class ShrubberyCreationForm : public AForm
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
		~ShrubberyCreationForm();
		class FileOpenningException : public std::exception
		{
			public:
                const char* what() const throw();
		}
		void execute(Bureaucrat const &executor) const;
};