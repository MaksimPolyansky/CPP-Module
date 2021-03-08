#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon) : _name(name)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << this->_name << "\x1b[33;1m attacks with his \x1b[0m" << std::endl;
}
