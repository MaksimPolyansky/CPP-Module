#include "SuperTrap.hpp"

SuperTrap::SuperTrap(/* args */)
{
}

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name)
{
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_max_energy_points = 120;
	this->_energy_points = 120;
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	this->_name = name;
	std::cout << "\e[1;35m" << this->_name << "\e[1;35m: Hello!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &copy) : ClapTrap(copy)
{
	std::cout << "\e[1;35m" << this->_name << "\e[1;35m: I'm alive!" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "\e[1;35m" << this->_name << "\e[1;35m: Bye!" << std::endl;
}

SuperTrap	&SuperTrap::operator=(SuperTrap const &supertrap)
{
	if (this != &supertrap)
		ClapTrap::operator=(supertrap);
	return *this;
}

void		SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void		SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}
