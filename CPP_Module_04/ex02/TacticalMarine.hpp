#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine(/* args */);
		TacticalMarine(TacticalMarine const &);
		virtual ~TacticalMarine();

		TacticalMarine	&operator=(TacticalMarine const &);

		ISpaceMarine*		clone() const;
		void				battleCry() const;
		void				rangedAttack() const;
		void				meleeAttack() const;
};

#endif
