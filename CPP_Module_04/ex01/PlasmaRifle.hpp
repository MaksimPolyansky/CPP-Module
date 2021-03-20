#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle(/* args */);
		PlasmaRifle(PlasmaRifle const &copy);
		virtual ~PlasmaRifle();

		PlasmaRifle		&operator=(PlasmaRifle const &pl);

		void			attack() const;
};

#endif
