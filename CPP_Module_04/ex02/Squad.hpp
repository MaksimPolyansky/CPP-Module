#ifndef SQUAD_HPP
# define SQUAD_HPP

#include <iostream>
#include "ISquad.hpp"

class Squad : public ISquad
{
	private:
		int				_count;
		int				_units;
		ISpaceMarine	**_unit;
	public:
		Squad(/* args */);
		Squad(Squad const &copy);
		virtual ~Squad();

		Squad			&operator=(Squad const &sq);

		int				getCount() const;
		ISpaceMarine*	getUnit(int unit) const;
		int				push(ISpaceMarine *ism);
};

#endif
