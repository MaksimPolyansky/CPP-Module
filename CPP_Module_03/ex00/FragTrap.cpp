#include "FragTrap.hpp"

FragTrap::FragTrap(/* args */)
{
}

FragTrap::FragTrap(std::string name)
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_level = 1;
	this->_name = name;
	std::cout << "\e[1;35m" << this->_name << "\e[1;35m was created!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy)
{
	this->_hit_points = copy._hit_points;
	this->_energy_points = copy._energy_points;
	this->_level = copy._level;
	this->_name = copy._name + "_copy";
	std::cout << "\e[1;35m" << this->_name << "\e[1;35m was born!" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &fragtrap)
{
	if (this != &fragtrap)
	{
		this->_hit_points = fragtrap._hit_points;
		this->_energy_points = fragtrap._energy_points;
		this->_level = fragtrap._level;
		this->_name = fragtrap._name;
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "\e[1;35m" << this->_name << "\e[1;35m was killed!" << std::endl;
}

void		FragTrap::rangedAttack(std::string const &target)
{
	if (36 > this->_energy_points)
	{
		std::cout << "\e[1;33m" << this->_name << "\e[1;33m needs Snickers, because \e[1;33m";
		std::cout << this->_name << "\e[1;33m has no energy to ranged attack!" << std::endl;
		std::cout << "\e[1;33m" << this->_name << "\e[1;33m has \e[1;33m";
		std::cout << this->_energy_points << "\e[1;33m energy points!" << std::endl;
	}
	else
	{
		this->_energy_points -= 36;
		std::cout << "\e[1;31mFR4G-TP \e[1;31m" << this->_name << "\e[1;31m attacks \e[1;31m";
		std::cout << target << "\e[1;31m at ranged, causing \e[1;31m" << this->_ranged_attack_damage;
		std::cout << "\e[1;31m points of damage!" << std::endl;
		std::cout << "\e[1;33m" << this->_name << "\e[1;33m has \e[1;33m";
		std::cout << this->_energy_points << "\e[1;33m energy points!" << std::endl;
	}
}

void		FragTrap::meleeAttack(std::string const &target)
{
	if (24 > this->_energy_points)
	{
		std::cout << "\e[1;33m" << this->_name << "\e[1;33m needs Snickers, because \e[1;33m";
		std::cout << this->_name << "\e[1;33m has no energy to melee attack!" << std::endl;
		std::cout << "\e[1;33m" << this->_name << "\e[1;33m has \e[1;33m";
		std::cout << this->_energy_points << "\e[1;33m energy points!" << std::endl;
	}
	else
	{
		this->_energy_points -= 24;
		std::cout << "\e[1;31mFR4G-TP \e[1;31m" << this->_name << "\e[1;31m attacks \e[1;31m";
		std::cout << target << "\e[1;31m at melee, causing \e[1;31m" << this->_melee_attack_damage;
		std::cout << "\e[1;31m points of damage!" << std::endl;
		std::cout << "\e[1;33m" << this->_name << "\e[1;33m has \e[1;33m";
		std::cout << this->_energy_points << "\e[1;33m energy points!" << std::endl;
	}
}

void		FragTrap::takeDamage(unsigned int amount)
{
	if (amount - this->_armor_damage_reduction >= this->_hit_points)
		this->_hit_points = 0;
	else
		this->_hit_points -= amount - this->_armor_damage_reduction;
	std::cout << "\e[1;31m" << this->_name << "\e[1;31m took \e[1;31m";
	std::cout << amount << "\e[1;31m hit points damage!" << std::endl;
	std::cout << "\e[1;33m" << this->_name << "\e[1;33m has \e[1;33m";
	std::cout << this->_hit_points << "\e[1;33m hit points!" << std::endl;
}

void		FragTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_hit_points >= this->_max_hit_points)
		this->_hit_points = this->_max_hit_points;
	else
		this->_hit_points += amount;
	if (amount + this->_energy_points >= this->_max_energy_points)
		this->_energy_points = this->_max_energy_points;
	else
		this->_energy_points += amount;
	std::cout << "\e[1;32m" << this->_name;
	std::cout << "\e[1;32m ate Snickers and replenished his hit point to \e[1;32m";
	std::cout << this->_hit_points << "\e[1;32m and energy points to \e[1;32m";
	std::cout << this->_energy_points << "\e[1;32m!" << std::endl;
}


int			FragTrap::getRangedAttack(void)
{
	return this->_ranged_attack_damage;
}

int			FragTrap::getMeleeAttack(void)
{
	return this->_melee_attack_damage;
}

std::string	FragTrap::getName(void)
{
	return this->_name;
}
