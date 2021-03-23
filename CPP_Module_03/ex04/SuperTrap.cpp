#include "SuperTrap.hpp"

SuperTrap::SuperTrap(/* args */)
{
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_max_energy_points = 120;
	this->_energy_points = 120;
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	this->_name = "SuperTrap";
	std::cout << "\e[1;35mSuperTrap: Default ctor!" << std::endl;
}

SuperTrap::SuperTrap(std::string name)
{
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_max_energy_points = 120;
	this->_energy_points = 120;
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	this->_name = name;
	std::cout << "\e[1;35mSuperTrap: Default ctor!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &copy)
{
	this->_hit_points = copy._hit_points;
	this->_max_hit_points = copy._max_hit_points;
	this->_energy_points = copy._energy_points;
	this->_max_energy_points = copy._max_energy_points;
	this->_melee_attack_damage = copy._melee_attack_damage;
	this->_ranged_attack_damage = copy._ranged_attack_damage;
	this->_armor_damage_reduction = copy._armor_damage_reduction;
	this->_name = copy._name + "_copy";
	std::cout << "\e[1;35mSuperTrap: copy ctor!" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "\e[1;35mSuperTrap: dtor!" << std::endl;
}

SuperTrap	&SuperTrap::operator=(SuperTrap const &supertrap)
{
	if (this != &supertrap)
	{
		this->_hit_points = supertrap._hit_points;
		this->_max_hit_points = supertrap._max_hit_points;
		this->_energy_points = supertrap._energy_points;
		this->_max_energy_points = supertrap._max_energy_points;
		this->_melee_attack_damage = supertrap._melee_attack_damage;
		this->_ranged_attack_damage = supertrap._ranged_attack_damage;
		this->_armor_damage_reduction = supertrap._armor_damage_reduction;
		this->_name = supertrap._name;
	}
	std::cout << "\e[1;35mSuperTrap: Assignation operator!" << std::endl;
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
