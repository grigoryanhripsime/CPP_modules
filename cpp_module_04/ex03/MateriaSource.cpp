#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout<<"MateriaSource default ctor called!\n";
	for (int i = 0; i < 4; i++)
		this -> slots[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	std::cout<<"MateriaSource dtor called!\n";
	for (int i = 0; i < 4; i++)
		delete this->slots[i];
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	std::cout<<"MateriaSource copy ctor called!\n";
	for (int i = 0; i < 4; i++)
		this -> slots[i] = other.slots[i]->clone();
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this == &other)
		return *this;
	std::cout<<"MateriaSource copy assignment operator called!\n";
	for (int i = 0; i < 4; i++)
	{
		delete this->slots[i];
		this -> slots[i] = other.slots[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
		if (this -> slots[i] == NULL)
		{
			this -> slots[i] = materia;
			std::cout<<"MateriaSource learnMateria called successfully!\n";
			return ;	
		}
	std::cout<<"The slot is full!\n";
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++) {
		if (slots[i] && slots[i]->getType() == type)
		{
			std::cout<<"MateriaSource createMateria called successfully!\n";
			return (slots[i]->clone());
		}
	}
	std::cout<<"There is no such materia!\n";
	return 0;
}
