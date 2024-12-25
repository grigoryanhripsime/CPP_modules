#pragma once

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		//Orthodox
		Cure();
		Cure(std::string const &type);
		Cure(const Cure &other);
		Cure &operator=(const Cure &other);
		~Cure();

		Cure* clone() const;
        void use(ICharacter& target);
};