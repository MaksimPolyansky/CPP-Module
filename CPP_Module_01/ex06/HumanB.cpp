#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	std::cout << this->_name << "\x1b[31;1m attacks with his \x1b[0m" << std::endl;
}
