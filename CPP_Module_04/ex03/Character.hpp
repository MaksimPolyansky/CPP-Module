#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string				_name;
		AMateria				*_materis[4];
	public:
		Character(/* args */);
		Character(std::string name);
		Character(Character const &copy);
		~Character();

		Character			&operator=(Character const &ch);

		std::string const	& getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif
