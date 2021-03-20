#include "SuperTrap.hpp"

int		main()
{
	NinjaTrap	first("First");
	FragTrap	second("second");
	SuperTrap	third("third");
	std::cout << std::endl;

	third.rangedAttack(second.getName());
	third.meleeAttack(first.getName());

	third.vaulthunter_dot_exe(second.getName());
	third.ninjaShoebox(first);
	std::cout << std::endl;

	return 0;
}
