#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(/* args */) : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copy) : AWeapon(copy)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle		&PlasmaRifle::operator=(PlasmaRifle const &pl)
{
	if (this != &pl)
		AWeapon::operator=(pl);
	return *this;
}

void			PlasmaRifle::attack() const
{
	std::cout << "\e[1;35m* piouuu piouuu piouuu *" << std::endl;
}
