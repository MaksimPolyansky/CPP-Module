#include "ClapTrap.hpp"

ClapTrap::ClapTrap(/* args */)
{
	this->_hit_points = 0;
	this->_max_hit_points = 0;
	this->_energy_points = 0;
	this->_max_energy_points = 0;
	this->_melee_attack_damage = 0;
	this->_ranged_attack_damage = 0;
	this->_armor_damage_reduction = 0;
	this->_name = "Clap";
	std::cout << "\e[1;35mClapTrap: Default ctor!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 50;
	this->_max_energy_points = 100;
	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 10;
	std::cout << "\e[1;35mClapTrap: Default ctor!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &claptrap)
{
	this->_hit_points = claptrap._hit_points;
	this->_max_hit_points = claptrap._max_hit_points;
	this->_energy_points = claptrap._energy_points;
	this->_max_energy_points = claptrap._max_energy_points;
	this->_melee_attack_damage = claptrap._melee_attack_damage;
	this->_ranged_attack_damage = claptrap._ranged_attack_damage;
	this->_armor_damage_reduction = claptrap._armor_damage_reduction;
	this->_name = claptrap._name + "_copy";
	std::cout << "\e[1;35mClapTrap: Copy ctor!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\e[1;35mClapTrap: dtor!" << std::endl;
}

ClapTrap		&ClapTrap::operator=(ClapTrap const &claptrap)
{
	if (this != &claptrap)
	{
		this->_hit_points = claptrap._hit_points;
		this->_max_hit_points = claptrap._max_hit_points;
		this->_energy_points = claptrap._energy_points;
		this->_max_energy_points = claptrap._max_energy_points;
		this->_melee_attack_damage = claptrap._melee_attack_damage;
		this->_ranged_attack_damage = claptrap._ranged_attack_damage;
		this->_armor_damage_reduction = claptrap._armor_damage_reduction;
		this->_name = claptrap._name;
	}
	std::cout << "\e[1;35mClapTrap: Assignation operator!" << std::endl;
	return *this;
}

int			ClapTrap::getRangedAttack(void)
{
	return this->_ranged_attack_damage;
}

int			ClapTrap::getMeleeAttack(void)
{
	return this->_melee_attack_damage;
}

std::string	ClapTrap::getName(void)
{
	return this->_name;
}
