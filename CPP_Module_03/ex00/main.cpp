#include "FragTrap.hpp"

int		main()
{
	FragTrap	first = FragTrap("Moonzy");
	FragTrap	second(first);

	std::cout << std::endl;
	first.rangedAttack(second.getName());
	second.takeDamage(first.getRangedAttack());
	std::cout << std::endl;
	second.meleeAttack(first.getName());
	first.takeDamage(second.getMeleeAttack());
	std::cout << std::endl;
	second.rangedAttack(first.getName());
	first.takeDamage(second.getRangedAttack());
	std::cout << std::endl;
	first.beRepaired(25);
	std::cout << std::endl;
	first.meleeAttack(second.getName());
	second.takeDamage(first.getMeleeAttack());
	std::cout << std::endl;
	second.meleeAttack(first.getName());
	first.takeDamage(second.getMeleeAttack());
	std::cout << std::endl;
	first.meleeAttack(second.getName());
	second.takeDamage(first.getMeleeAttack());
	std::cout << std::endl;
	first.beRepaired(25);
	std::cout << std::endl;
	second.meleeAttack(first.getName());
	first.takeDamage(second.getMeleeAttack());
	std::cout << std::endl;
	first.meleeAttack(second.getName());
	second.takeDamage(first.getMeleeAttack());
	std::cout << std::endl;
	first.beRepaired(25);
	first.beRepaired(25);
	first.beRepaired(25);
	std::cout << std::endl;
	first.vaulthunter_dot_exe(second.getName());
	second.takeDamage(first.getSuperAttack());
	std::cout << std::endl;

	return 0;
}
