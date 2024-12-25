#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>


class MateriaSource : public IMateriaSource 
{
	private:
		AMateria *slots[4];
	public:
		//Orthodox
		MateriaSource();
		MateriaSource(const MateriaSource &other);
		MateriaSource &operator=(const MateriaSource &other);
		~MateriaSource();

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};
