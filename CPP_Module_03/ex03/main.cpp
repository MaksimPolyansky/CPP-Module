#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main()
{
	NinjaTrap	first("First");

	FragTrap	second("second");
	second.meleeAttack(first.getName());
	second.rangedAttack(first.getName());
	second.takeDamage(first.getRangedAttack());
	second.beRepaired(25);
	second.getSuperAttack();
	first.ninjaShoebox(second);
	std::cout << std::endl;

	ScavTrap	third("third");
	third.meleeAttack(first.getName());
	third.rangedAttack(first.getName());
	third.takeDamage(first.getRangedAttack());
	third.beRepaired(25);
	third.challengeNewcomer();
	first.ninjaShoebox(third);
	std::cout << std::endl;

	ClapTrap	fourth;
	first.ninjaShoebox(fourth);
	std::cout << std::endl;

	first.ninjaShoebox(first);
	std::cout << std::endl;

	return 0;
}
