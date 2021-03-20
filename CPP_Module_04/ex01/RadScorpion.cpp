#include "RadScorpion.hpp"

RadScorpion::RadScorpion(/* args */) : Enemy(80, "RadScorpion")
{
	std::cout << "\e[1;35m* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &copy) : Enemy(copy)
{
	std::cout << "\e[1;35m* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "\e[1;35m* SPROTCH *" << std::endl;
}

RadScorpion		&RadScorpion::operator=(RadScorpion const &ra)
{
	if (this != &ra)
		Enemy::operator=(ra);
	return *this;
}
