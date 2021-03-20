#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <ctime>

class ClapTrap
{
	protected:
		unsigned int	_hit_points = 100;
		unsigned int	_max_hit_points = 100;
		unsigned int	_energy_points;
		unsigned int	_max_energy_points;
		unsigned int	_level = 1;
		std::string		_name;
		unsigned int	_melee_attack_damage;
		unsigned int	_ranged_attack_damage;
		unsigned int	_armor_damage_reduction;
		/* data */
	public:
		ClapTrap(/* args */);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &claptrap);
		~ClapTrap();

		ClapTrap		&operator=(ClapTrap const &claptrap);

		virtual void	rangedAttack(std::string const &target) = 0;
		virtual void	meleeAttack(std::string const &target) = 0;
		virtual void	takeDamage(unsigned int amount) = 0;
		virtual void	beRepaired(unsigned int amount) = 0;

		int				getRangedAttack(void);
		int				getMeleeAttack(void);
		std::string		getName(void);
};

#endif
