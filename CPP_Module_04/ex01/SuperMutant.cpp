#include "SuperMutant.hpp"

SuperMutant::SuperMutant(/* args */) : Enemy(170, "Super Mutant")
{
	std::cout << "\e[1;35mGaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &copy) : Enemy(copy)
{
	std::cout << "\e[1;35mGaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "\e[1;35mAaargh..." << std::endl;
}

SuperMutant		&SuperMutant::operator=(SuperMutant const &su)
{
	if (this != &su)
		Enemy::operator=(su);
	return *this;
}

void			SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}
