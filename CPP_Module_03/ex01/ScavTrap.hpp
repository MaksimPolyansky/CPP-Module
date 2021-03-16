#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <ctime>

class ScavTrap
{
	private:
		unsigned int	_hit_points;
		unsigned int	_max_hit_points = 100;
		unsigned int	_energy_points;
		unsigned int	_max_energy_points = 50;
		unsigned int	_level = 1;
		std::string		_name;
		unsigned int	_melee_attack_damage = 20;
		unsigned int	_ranged_attack_damage = 15;
		unsigned int	_armor_damage_reduction = 3;
	public:
		ScavTrap(/* args */);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &copy);
		~ScavTrap();

		ScavTrap		&operator=(ScavTrap const &Scavtrap);

		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			challengeNewcomer();

		int				getRangedAttack(void);
		int				getMeleeAttack(void);
		std::string		getName(void);
};

#endif
