#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() : _type("Zombie")
{
}

ZombieEvent::~ZombieEvent()
{
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*zombie = new Zombie(name, this->_type);

	return zombie;
}

Zombie	*ZombieEvent::randomChump()
{
	char		consonants[20] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'z'};
	char		vowels[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
	std::string	name = "";
	Zombie		*zombie;
	int			random;

	std::srand(std::clock());
	int			len = 3 + std::rand() % 5;
	random = std::rand() % 19;
	name += std::toupper(consonants[random]);
	for (int i = 1; i < len; i += 2)
	{
		random = std::rand() % 5;
		name += vowels[random];
		random = std::rand() % 19;
		name += consonants[random];
	}
	zombie = newZombie(name);
	zombie->announce();
	return zombie;
}
