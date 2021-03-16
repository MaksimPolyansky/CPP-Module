#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <ctime>

class FragTrap
{
	private:
		unsigned int	_hit_points;
		unsigned int	_max_hit_points = 100;
		unsigned int	_energy_points;
		unsigned int	_max_energy_points = 100;
		unsigned int	_level = 1;
		std::string		_name;
		unsigned int	_melee_attack_damage = 30;
		unsigned int	_ranged_attack_damage = 20;
		unsigned int	_armor_damage_reduction = 5;
		unsigned int	_super_attact_damage = 50;
	public:
		FragTrap(/* args */);
		FragTrap(std::string name);
		FragTrap(FragTrap const &copy);
		~FragTrap();

		FragTrap		&operator=(FragTrap const &fragtrap);

		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			vaulthunter_dot_exe(std::string const &target);

		int				getRangedAttack(void);
		int				getMeleeAttack(void);
		int				getSuperAttack(void);
		std::string		getName(void);
};

#endif
