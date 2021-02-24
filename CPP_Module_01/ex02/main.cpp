#include "ZombieEvent.hpp"

int		main()
{
	Zombie		*zombies;
	ZombieEvent	zombieevent;

	std::cout << "\x1b[95;1m@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\x1b[0m" << std::endl;
	std::cout << "\x1b[31;1mRandom name\x1b[0m" << std::endl;
	zombies = zombieevent.randomChump();
	delete zombies;

	std::cout << "\x1b[95;1m@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\x1b[0m" << std::endl;
	std::cout << "\x1b[31;1mHeap Zombie, new\x1b[0m" << std::endl;
	zombies = zombieevent.newZombie("Chukcha");
	zombies->announce();
	delete zombies;

	std::cout << "\x1b[95;1m@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\x1b[0m" << std::endl;
	std::cout << "\x1b[31;1mMy type and random name\x1b[0m" << std::endl;
	zombieevent.setZombieType("Partyman");
	zombies = zombieevent.randomChump();
	delete zombies;

	std::cout << "\x1b[95;1m@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\x1b[0m" << std::endl;
	std::cout << "\x1b[31;1mMy type, new\x1b[0m" << std::endl;
	zombieevent.setZombieType("kiwi");
	zombies = zombieevent.newZombie("fruits");
	zombies->announce();
	delete zombies;

	std::cout << "\x1b[95;1m@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\x1b[0m" << std::endl;
	std::cout << "\x1b[31;1mStack Zombie\x1b[0m" << std::endl;
	Zombie	zombie = Zombie("Alex", "Human");
	zombie.announce();

	std::cout << "\x1b[95;1m@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\x1b[0m" << std::endl;
	std::cout << "\x1b[31;1mYour name and type!\x1b[0m" << std::endl;
	std::string	name;
	std::string	type;
	std::cout << "\x1b[32;1mGive me name > \x1b[0m";
	std::getline(std::cin, name);
	std::cout << "\x1b[33;1mGive me type > \x1b[0m";
	std::getline(std::cin, type);
	zombieevent.setZombieType(type);
	zombies = zombieevent.newZombie(name);
	zombies->announce();
	delete zombies;
	return 0;
}
