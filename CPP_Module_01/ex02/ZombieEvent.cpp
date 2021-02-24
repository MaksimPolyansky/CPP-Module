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
	std::string	random_name[5] = {"Will", "Bill", "James", "Stweeie", "Vasya"};
	Zombie		*zombie;

	std::srand(std::time(NULL));
	zombie = newZombie(random_name[std::rand() % 4]);
	zombie->announce();
	return zombie;
}
