#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <iostream>
#include <ctime>
#include <string>

class ZombieHorde
{
	private:
		std::string	_type;
		int			_num;
		Zombie		*_zombie;
	public:
		ZombieHorde(int num);
		~ZombieHorde();
		std::string	random_name(int num);
		void		announce();
};


#endif
