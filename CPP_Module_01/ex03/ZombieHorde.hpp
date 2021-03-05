#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <iostream>
#include <ctime>
#include <string>

class ZombieHorde
{
	private:
		int			_num;
		Zombie		*_zombie;
	public:
		ZombieHorde(int num);
		~ZombieHorde();
		void		announce();
};


#endif
