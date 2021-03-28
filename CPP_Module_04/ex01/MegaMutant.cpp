#include "MegaMutant.hpp"

MegaMutant::MegaMutant(/* args */) : Enemy(150, "Mega Mutant")
{
	std::cout << "\e[1;35mYEAAAAAAAAAAAH!" << std::endl;
}

MegaMutant::MegaMutant(MegaMutant const &copy) : Enemy(copy)
{
	std::cout << "\e[1;35mYEAAAAAAAAAAAH!" << std::endl;
}

MegaMutant::~MegaMutant()
{
	std::cout << "\e[1;35mbrbrbrbabr" << std::endl;
}

MegaMutant		&MegaMutant::operator=(MegaMutant const &me)
{
	if (this != &me)
		Enemy::operator=(me);
	return *this;
}

void			MegaMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}
