#include "PowerFist.hpp"

PowerFist::PowerFist(/* args */) : AWeapon("Power Fist", 50, 8)
{
}

PowerFist::PowerFist(PowerFist const &copy) : AWeapon(copy)
{
}

PowerFist::~PowerFist()
{
}

PowerFist	&PowerFist::operator=(PowerFist const &po)
{
	if (this != &po)
		AWeapon::operator=(po);
	return *this;
}

void		PowerFist::attack() const
{
	std::cout << "\e[1;35m* pschhh... SBAM! *" << std::endl;
}
