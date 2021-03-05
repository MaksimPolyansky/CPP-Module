#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <chrono>
#include <thread>

class Zombie
{
	private:
		std::string	_type;
		std::string	_name;
	public:
		Zombie();
		~Zombie();
		void	announce();
		std::string	random_name(int num);
};

#endif
