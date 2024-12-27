#include "Character.hpp"

Character::Character()
{
	std::cout<<"Character default ctor called!\n";
	this -> name = "Character";
	for (int i = 0; i < 4; i++)
		this -> slots[i] = NULL;
}

Character::Character(std::string name)
{
	std::cout<<"Character ctor w/params called!\n";
	this -> name = name;
	for (int i = 0; i < 4; i++)
		this -> slots[i] = NULL;
}

Character::Character(const Character &other)
{
	std::cout<<"Character copy ctor called!\n";
	this -> name = other.getName();
	for (int i = 0; i < 4; i++)
	{
		if (other.slots[i])
			this -> slots[i] = other.slots[i]->clone();
		else
			this -> slots[i] = NULL;
	}
}

Character &Character::operator=(const Character &other)
{
	if (this == &other)
		return *this;
	std::cout<<"Character copy assignment operator called!\n";
	this -> name = other.getName();
	for (int i = 0; i < 4; i++)
	{
		delete this -> slots[i];
		if (other.slots[i])
			this -> slots[i] = other.slots[i]->clone();
		else
			this -> slots[i] = NULL;
	}
	return *this;
}

Character::~Character()
{
	std::cout<<"Character dtor called!\n";
	for (int i = 0; i < 4; i++)
		delete this->slots[i];
}

std::string const &Character::getName() const
{
	return (this -> name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
		if (this -> slots[i] == NULL)
		{
			this -> slots[i] = m;
			std::cout<<"Character equip called successfully!\n";
			return ;	
		}
	std::cout<<"The inventory is full!\n";
}

void Character::unequip(int idx)
{
	if (this -> slots[idx])
	{
		std::cout<<"Character unequip called successfully!\n";
		this -> slots[idx] = NULL;
		return ;
	}
	std::cout<<"There is no materia!\n";
}

void Character::use(int idx, ICharacter& target)
{
	if (this -> slots[idx])
	{
		this->slots[idx]->use(target);
		return ;
	}
	std::cout<<"There is no materia!\n";
}
