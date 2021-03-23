#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(/* args */)
{
	this->_hit_points = 0;
	this->_max_hit_points = 0;
	this->_energy_points = 0;
	this->_max_energy_points = 0;
	this->_melee_attack_damage = 0;
	this->_ranged_attack_damage = 0;
	this->_armor_damage_reduction = 0;
	this->_name = "Ninja";
	std::cout << "\e[1;35m" << this->_name << "\e[1;35m: I was!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
{
	this->_hit_points = 60;
	this->_max_hit_points = 60;
	this->_energy_points = 120;
	this->_max_energy_points = 120;
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 5;
	this->_armor_damage_reduction = 0;
	this->_name = name;
	std::cout << "\e[1;35m" << this->_name << "\e[1;35m: I was!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &ninjatrap)
{
	this->_hit_points = ninjatrap._hit_points;
	this->_max_hit_points = ninjatrap._max_hit_points;
	this->_max_energy_points = ninjatrap._max_energy_points;
	this->_energy_points = ninjatrap._energy_points;
	this->_melee_attack_damage = ninjatrap._melee_attack_damage;
	this->_ranged_attack_damage = ninjatrap._ranged_attack_damage;
	this->_armor_damage_reduction = ninjatrap._armor_damage_reduction;
	this->_name = ninjatrap._name;
	std::cout << "\e[1;35m" << this->_name << "\e[1;35m: I was created!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "\e[1;35m" << this->_name << "\e[1;35m: I was not!" << std::endl;
}

NinjaTrap		&NinjaTrap::operator=(NinjaTrap const &ninjatrap)
{
	if (this != &ninjatrap)
	{
		this->_hit_points = ninjatrap._hit_points;
		this->_max_hit_points = ninjatrap._max_hit_points;
		this->_max_energy_points = ninjatrap._max_energy_points;
		this->_energy_points = ninjatrap._energy_points;
		this->_melee_attack_damage = ninjatrap._melee_attack_damage;
		this->_ranged_attack_damage = ninjatrap._ranged_attack_damage;
		this->_armor_damage_reduction = ninjatrap._armor_damage_reduction;
		this->_name = ninjatrap._name;
	}
	return *this;
}

void			NinjaTrap::rangedAttack(std::string const &target)
{
	if (25 > this->_energy_points)
		std::cout << "\e[1;34m" << this->_name << "\e[1;34m: help!" << std::endl;
	else
	{
		this->_energy_points -= 25;
		std::cout << "\e[1;31m" << this->_name << "\e[1;31m: PIF! PAF! Minus \e[1;31m";
		std::cout << target << std::endl;
		std::cout << "\e[1;33m" << this->_name << "\e[1;33m -25 energy points!" << std::endl;
	}
	std::cout << "\e[1;33m" << this->_name << "\e[1;33m - \e[1;33m" << this->_energy_points << "\e[1;33m energy points!" << std::endl << std::endl;
}

void			NinjaTrap::meleeAttack(std::string const &target)
{
	if (10 > this->_energy_points)
		std::cout << "\e[1;34m" << this->_name << "\e[1;34m: I need an energy drink!" << std::endl;
	else
	{
		this->_energy_points -= 10;
		std::cout << "\e[1;31m" << this->_name << "\e[1;31m: BOOOOOOLTbIHHHHHHHH! Minus \e[1;31m";
		std::cout << target << std::endl;
		std::cout << "\e[1;33m" << this->_name << "\e[1;33m -10 energy points!\e[1;33m" << std::endl;
	}
	std::cout << "\e[1;33m" << this->_name << "\e[1;33m - \e[1;33m" << this->_energy_points << "\e[1;33m energy points!" << std::endl << std::endl;
}

void			NinjaTrap::takeDamage(unsigned int amount)
{
	if (amount - this->_armor_damage_reduction >= this->_hit_points)
	{
		this->_hit_points = 0;
		std::cout << "\e[1;32mI need HELP!" << std::endl;
	}
	else
		this->_hit_points -= amount - this->_armor_damage_reduction;
	std::cout << "\e[1;31m" << this->_name << "\e[1;31m: OMG! U hit me!" << std::endl;
	std::cout << "\e[1;33m" << this->_name << "\e[1;33m: -\e[1;33m" << amount - this->_armor_damage_reduction << "\e[1;33m HP!" << std::endl;
	std::cout << "\e[1;33m" << this->_name << "\e[1;33m - \e[1;33m" << this->_hit_points << "\e[1;33m HP!" << std::endl << std::endl;
}

void			NinjaTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_hit_points >= this->_max_hit_points)
	{
		this->_hit_points = this->_max_hit_points;
		std::cout << "\e[1;32mI'm well!" << std::endl;
	}
	else
	{
		this->_hit_points += amount;
		std::cout << "\e[1;32mI'm not well!" << std::endl;
	}
	if (amount + this->_energy_points >= this->_max_energy_points)
	{
		this->_energy_points = this->_max_energy_points;
		std::cout << "\e[1;32mI'm strong!" << std::endl;
	}
	else
	{
		this->_energy_points += amount;
		std::cout << "\e[1;32mI'm not strong!" << std::endl;
	}
	std::cout << "\e[1;33m" << this->_name << "\e[1;33m - \e[1;33m" << this->_hit_points << "\e[1;33m hit points and \e[1;33m" << this->_energy_points << "\e[1;33m energy points!" << std::endl << std::endl;
}

void			NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	if (30 > this->_energy_points)
		std::cout << "\e[1;32mI need energy!!" << std::endl;
	else
	{
		this->_energy_points -= 30;
		std::cout << "\e[0;102m\e[1;91m" << trap.getName() << ", Buy a million lottery tickets!\e[0m" << std::endl;
	}
}

void			NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	if (30 > this->_energy_points)
		std::cout << "\e[1;32mI need energy!!" << std::endl;
	else
	{
		this->_energy_points -= 30;
		std::cout << "\e[0;102m\e[1;91m" << trap.getName() << ", Drink some vegetable oil!\e[0m" << std::endl;
	}
}

void			NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	if (30 > this->_energy_points)
		std::cout << "\e[1;32mI need energy!!" << std::endl;
	else
	{
		this->_energy_points -= 30;
		std::cout << "\e[0;102m\e[1;91m" << trap.getName() << ", Sing a song on the subway!\e[0m" << std::endl;
	}
}

void			NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	if (30 > this->_energy_points)
		std::cout << "\e[1;32mI need energy!!" << std::endl;
	else
	{
		this->_energy_points -= 30;
		std::cout << "\e[0;102m\e[1;91m" << trap.getName() << ", Dance without music!\e[0m" << std::endl;
	}
}
