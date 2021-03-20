#include "ScavTrap.hpp"

ScavTrap::ScavTrap(/* args */)
{
	std::srand(std::time(NULL));
}

ScavTrap::ScavTrap(std::string name)
{
	std::srand(std::time(NULL));
	this->_hit_points = 50;
	this->_max_hit_points = 50;
	this->_max_energy_points = 50;
	this->_energy_points = 50;
	this->_melee_attack_damage = 20;
	this->_ranged_attack_damage = 15;
	this->_armor_damage_reduction = 3;
	this->_name = name;
	std::cout << "\e[1;35m" << this->_name << "\e[1;35m: I'm alive!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	std::srand(std::time(NULL));
	this->_hit_points = copy._hit_points;
	this->_max_hit_points = copy._max_hit_points;
	this->_max_energy_points = copy._max_energy_points;
	this->_energy_points = copy._energy_points;
	this->_melee_attack_damage = copy._melee_attack_damage;
	this->_ranged_attack_damage = copy._ranged_attack_damage;
	this->_armor_damage_reduction = copy._armor_damage_reduction;
	this->_name = copy._name + "_copy";
	std::cout << "\e[1;35m" << this->_name << "\e[1;35m: I'm alive!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\e[1;35m" << this->_name << "\e[1;35m: I'm still alive!" << std::endl;
}

ScavTrap		&ScavTrap::operator=(ScavTrap const &Scavtrap)
{
	if (this != &Scavtrap)
	{
		this->_hit_points = Scavtrap._hit_points;
		this->_max_hit_points = Scavtrap._max_hit_points;
		this->_max_energy_points = Scavtrap._max_energy_points;
		this->_energy_points = Scavtrap._energy_points;
		this->_melee_attack_damage = Scavtrap._melee_attack_damage;
		this->_ranged_attack_damage = Scavtrap._ranged_attack_damage;
		this->_armor_damage_reduction = Scavtrap._armor_damage_reduction;
		this->_name = Scavtrap._name + "_copy";
	}
	return *this;
}

void			ScavTrap::rangedAttack(std::string const &target)
{
	if (25 > this->_energy_points)
		std::cout << "\e[1;34m" << this->_name << "\e[1;34m: I need an energy drink!" << std::endl;
	else
	{
		this->_energy_points -= 25;
		std::cout << "\e[1;31m" << this->_name << "\e[1;31m: PIU! PIU! \e[1;31m";
		std::cout << target << "\e[1;31m, I hit you!" << std::endl;
		std::cout << "\e[1;33m" << this->_name << "\e[1;33m lost 25 energy points!" << std::endl;
	}
	std::cout << "\e[1;33m" << this->_name << "\e[1;33m - \e[1;33m" << this->_energy_points << "\e[1;33m energy points!" << std::endl << std::endl;
}

void			ScavTrap::meleeAttack(std::string const &target)
{
	if (10 > this->_energy_points)
		std::cout << "\e[1;34m" << this->_name << "\e[1;34m: I need an energy drink!" << std::endl;
	else
	{
		this->_energy_points -= 10;
		std::cout << "\e[1;31m" << this->_name << "\e[1;31m: BOOM! BOOM! \e[1;31m";
		std::cout << target << "\e[1;31m, will know!" << std::endl;
		std::cout << "\e[1;33m" << this->_name << "\e[1;33m lost 10 energy points!\e[1;33m" << std::endl;
	}
	std::cout << "\e[1;33m" << this->_name << "\e[1;33m - \e[1;33m" << this->_energy_points << "\e[1;33m energy points!" << std::endl << std::endl;
}

void			ScavTrap::takeDamage(unsigned int amount)
{
	if (amount - this->_armor_damage_reduction >= this->_hit_points)
	{
		this->_hit_points = 0;
		std::cout << "\e[1;32mI need medicine!" << std::endl;
	}
	else
		this->_hit_points -= amount - this->_armor_damage_reduction;
	std::cout << "\e[1;31m" << this->_name << "\e[1;31m: OMG! Oh NO! U hurt my heart, how can I continue to live ..." << std::endl;
	std::cout << "\e[1;33m" << this->_name << "\e[1;33m lost \e[1;33m" << amount - this->_armor_damage_reduction << "\e[1;33m hit points!" << std::endl;
	std::cout << "\e[1;33m" << this->_name << "\e[1;33m - \e[1;33m" << this->_hit_points << "\e[1;33m hit points!" << std::endl << std::endl;
}

void			ScavTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_hit_points >= this->_max_hit_points)
	{
		this->_hit_points = this->_max_hit_points;
		std::cout << "\e[1;32mNo one will pass through me now!" << std::endl;
	}
	else
	{
		this->_hit_points += amount;
		std::cout << "\e[1;32mI need more medicine!" << std::endl;
	}
	if (amount + this->_energy_points >= this->_max_energy_points)
	{
		this->_energy_points = this->_max_energy_points;
		std::cout << "\e[1;32mI'm full of energy!" << std::endl;
	}
	else
	{
		this->_energy_points += amount;
		std::cout << "\e[1;32mBro, more energy, please!" << std::endl;
	}
	std::cout << "\e[1;33m" << this->_name << "\e[1;33m - \e[1;33m" << this->_hit_points << "\e[1;33m hit points and \e[1;33m" << this->_energy_points << "\e[1;33m energy points!" << std::endl << std::endl;
}

void			ScavTrap::challengeNewcomer()
{
	std::string		line[5] = {"Challenge: hold your breath.", \
					"Challenge: hit the enemy with a frying pan.", \
					"Challenge: reset the cap.", \
					"Challenge: drink vegetable oil.", \
					"Challenge: throw away the trash."};

	std::cout << "\e[1;36m" << line[std::rand() % 4] << std::endl << std::endl;
}
