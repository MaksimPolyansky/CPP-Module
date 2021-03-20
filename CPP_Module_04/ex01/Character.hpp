#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		std::string		_name;
		int				_ap;
		AWeapon			*_aweapon;
	public:
		Character();
		Character(std::string const &name);
		Character(Character const &copy);
		~Character();

		Character		&operator=(Character const &ch);

		void			recoverAP();
		void			equip(AWeapon *aw);
		void			attack(Enemy *en);
		std::string		getName() const;
		AWeapon			*getWeapon() const;
		int				getAP() const;
};

std::ostream		&operator<<(std::ostream &output, Character const &ch);

#endif
