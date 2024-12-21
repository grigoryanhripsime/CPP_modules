#pragma once 

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		virtual ~Animal();
		void setType(std::string type);
		std::string getType() const;
		virtual void makeSound() const;
};
