#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int num)
{
	this->_num = num;
	this->_zombie = new Zombie[this->_num];
	this->announce();
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "\x1b[31;1mZombies died!\x1b[0m" << std::endl;
	delete [] this->_zombie;
}

void		ZombieHorde::announce()
{
	for (int i = 0; i < this->_num; i++)
		this->_zombie[i].announce();
}
