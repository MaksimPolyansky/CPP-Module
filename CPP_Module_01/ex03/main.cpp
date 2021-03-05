#include "ZombieHorde.hpp"

int		main()
{
	ZombieHorde	*zombiehorde1 = new ZombieHorde(5);
	delete zombiehorde1;

	ZombieHorde	*zombiehorde2 = new ZombieHorde(11);
	delete zombiehorde2;

	ZombieHorde	*zombiehorde3 = new ZombieHorde(1);
	delete zombiehorde3;

	ZombieHorde	*zombiehorde4 = new ZombieHorde(14);
	delete zombiehorde4;

	ZombieHorde	*zombiehorde5 = new ZombieHorde(7);
	delete zombiehorde5;

	return 0;
}
