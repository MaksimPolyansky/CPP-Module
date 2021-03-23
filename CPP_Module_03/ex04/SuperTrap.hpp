#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "NinjaTrap.hpp"

class SuperTrap : virtual public FragTrap, virtual public NinjaTrap
{
	public:
		SuperTrap(/* args */);
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const &copy);
		~SuperTrap();

		SuperTrap	&operator=(SuperTrap const &supertrap);

		void		rangedAttack(std::string const &target);
		void		meleeAttack(std::string const &target);
};

#endif
