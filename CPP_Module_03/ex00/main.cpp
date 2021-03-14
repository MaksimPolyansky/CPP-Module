#include "FragTrap.hpp"

int		main()
{
	FragTrap	first = FragTrap("Moonzy");
	FragTrap	second(first);

	first.rangedAttack(second.getName());
	second.takeDamage(first.getRangedAttack());
	second.meleeAttack(first.getName());
	first.takeDamage(second.getMeleeAttack());
	second.rangedAttack(first.getName());
	first.takeDamage(second.getRangedAttack());
	first.beRepaired(25);
	first.meleeAttack(second.getName());
	second.takeDamage(first.getMeleeAttack());
	second.meleeAttack(first.getName());
	first.takeDamage(second.getMeleeAttack());
	first.meleeAttack(second.getName());
	second.takeDamage(first.getMeleeAttack());
	first.beRepaired(25);
	second.meleeAttack(first.getName());
	first.takeDamage(second.getMeleeAttack());
	first.meleeAttack(second.getName());
	second.takeDamage(first.getMeleeAttack());
	first.vaulthunter_dot_exe(second.getName());
	second.takeDamage(first.getSuperAttack());

	return 0;
}
