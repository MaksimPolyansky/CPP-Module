#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator(/* args */);
		AssaultTerminator(AssaultTerminator const &);
		~AssaultTerminator();

		AssaultTerminator	&operator=(AssaultTerminator const &);

		ISpaceMarine*		clone() const;
		void				battleCry() const;
		void				rangedAttack() const;
		void				meleeAttack() const;
};

#endif
