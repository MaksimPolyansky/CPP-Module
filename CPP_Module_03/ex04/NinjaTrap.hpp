#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	private:
		/* data */
	public:
		NinjaTrap(/* args */);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const &ninjatrap);
		~NinjaTrap();

		NinjaTrap		&operator=(NinjaTrap const &ninjatrap);

		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		void			ninjaShoebox(FragTrap &trap);
		void			ninjaShoebox(ScavTrap &trap);
		void			ninjaShoebox(ClapTrap &trap);
		void			ninjaShoebox(NinjaTrap &trap);
};

#endif
