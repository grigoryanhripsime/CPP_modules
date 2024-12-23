#pragma once

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria(std::string const &type);
		//Orthodox
		AMateria();
		AMateria(const AMateria &other);
		AMateria &operator=(const AMateria &other);
		~AMateria();

		std::string const &getType() const; //Returns the materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};