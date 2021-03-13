#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	this->_name = name;
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << this->_name << "\x1b[33;1m attacks with his \x1b[0m" << this->_weapon.getType() << std::endl;
}
