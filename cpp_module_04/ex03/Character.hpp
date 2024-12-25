#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::sring name;
		AMateria *slots[4];
	public:
		//Orthodox
		Character();
		Character(std::string name);
		Character(const Character &other);
		Character &operator=(const Character &other);
		~Character();
		
		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, Character& target);
}