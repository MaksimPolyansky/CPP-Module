#include "ZombieHorde.hpp"

int		main()
{
	ZombieHorde	zombiehorde = ZombieHorde(5);


	for (size_t i = 0; i < 5; i++)
	{
		std::string	name;
		name = zombiehorde.random_name(5);
		std::cout << name << std::endl;
	}

	return 0;
}
