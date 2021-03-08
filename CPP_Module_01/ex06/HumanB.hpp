#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
	public:
		HumanB(std::string name);
		~HumanB();
		void	attack();
};

#endif
