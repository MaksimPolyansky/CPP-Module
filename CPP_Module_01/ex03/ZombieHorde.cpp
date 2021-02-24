#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int num)
{
	this->_num = num;
	this->_type = "Zombie";
	int	len;

	std::srand(std::time(NULL));
	this->_zombie = new Zombie[this->_num];
	for (int i = 0; i < this->_num; i++)
	{
		len = 3 + std::rand() % 10;

	}

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

std::string	ZombieHorde::random_name(int num)
{
	char		consonants[20] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'z'};
	char		vowels[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
	std::string	name = "";
	int			random;
	int			count;

	std::srand(std::time(NULL));
	count = 0;
	for (int i = 0; i < 10; i++)
	{
		random = std::rand() % 2;
		if (random < 2 && count < 2)
		{
			name += consonants[rand() % 19];
			count++;
		}
		else
		{
			name += vowels[rand() % 5];
			count = 0;
		}
	}
	return name;
}
