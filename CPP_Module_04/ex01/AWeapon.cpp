#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->_name = name;
	this->_ap = apcost;
	this->_damage = damage;
}

AWeapon::AWeapon(AWeapon const &copy)
{
	this->_name = copy._name;
	this->_damage = copy._damage;
	this->_ap = copy._ap;
}

AWeapon::~AWeapon()
{}

AWeapon			&AWeapon::operator=(AWeapon const &aw)
{
	if (this != &aw)
	{
		this->_name = aw._name;
		this->_damage = aw._damage;
		this->_ap = aw._ap;
	}
	return *this;
}

std::string		AWeapon::getName() const
{
	return this->_name;
}

int				AWeapon::getAPCost() const
{
	return this->_ap;
}

int				AWeapon::getDamage() const
{
	return this->_damage;
}
