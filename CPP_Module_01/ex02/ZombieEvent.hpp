#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <iostream>
#include <ctime>
#include <string>

class ZombieEvent
{
	private:
		std::string	_type;
	public:
		ZombieEvent(/* args */);
		~ZombieEvent();
		void	setZombieType(std::string type);
		Zombie	*newZombie(std::string name);
		Zombie	*randomChump();
};


#endif
