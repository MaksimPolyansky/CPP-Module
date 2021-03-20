#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <ctime>

class ClapTrap
{
	protected:
		unsigned int	_hit_points;
		unsigned int	_max_hit_points;
		unsigned int	_energy_points;
		unsigned int	_max_energy_points;
		unsigned int	_level = 1;
		std::string		_name;
		unsigned int	_melee_attack_damage;
		unsigned int	_ranged_attack_damage;
		unsigned int	_armor_damage_reduction;
	public:
		ClapTrap(/* args */);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &claptrap);
		virtual~ClapTrap();

		ClapTrap		&operator=(ClapTrap const &claptrap);

		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		int				getRangedAttack(void);
		int				getMeleeAttack(void);
		std::string		getName(void);
};

#endif
