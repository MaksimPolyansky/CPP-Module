#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(/* args */);
		Ice(Ice const &copy);
		virtual ~Ice();

		Ice		&operator=(Ice const &ic);

		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif
