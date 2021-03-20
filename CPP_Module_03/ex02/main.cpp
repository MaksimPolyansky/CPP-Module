#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main()
{
	ScavTrap	houseman = ScavTrap("Houseman");
	ScavTrap	man(houseman);
	std::cout << std::endl;

	FragTrap	first = FragTrap("Moonzy");
	FragTrap	second(first);
	std::cout << std::endl;

	for (size_t i = 0; i < 4; i++)
	{
		first.rangedAttack(houseman.getName());
		std::cout << std::endl;
		houseman.takeDamage(first.getRangedAttack());

		second.meleeAttack(man.getName());
		std::cout << std::endl;
		man.takeDamage(second.getMeleeAttack());
	}

	man.beRepaired(150);

	for (size_t i = 0; i < 3; i++)
	{
		houseman.rangedAttack(first.getName());
		first.takeDamage(houseman.getRangedAttack());
		std::cout << std::endl;

		man.meleeAttack(second.getName());
		second.takeDamage(man.getMeleeAttack());
		std::cout << std::endl;
	}

	for (size_t i = 0; i < 5; i++)
	{
		houseman.challengeNewcomer();
	}

	return 0;
}
