#pragma once 

#include <iostream>

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(const AAnimal &other);
		AAnimal &operator=(const AAnimal &other);
		virtual ~AAnimal();
		void setType(std::string type);
		std::string getType() const;
		virtual void makeSound() const = 0;
};
