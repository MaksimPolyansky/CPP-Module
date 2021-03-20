#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist(/* args */);
		PowerFist(PowerFist const &copy);
		virtual ~PowerFist();

		PowerFist	&operator=(PowerFist const &po);

		void		attack() const;
};

#endif
