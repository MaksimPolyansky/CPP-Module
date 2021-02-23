#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	_type;
		std::string	_name;
	public:
		Zombie(std::string name, std::string type);
		~Zombie();
		void	announce();
};

#endif
