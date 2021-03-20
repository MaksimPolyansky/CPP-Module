#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	protected:
		std::string	_name;
		int			_damage;
		int			_ap;
	public:
		AWeapon();
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const &copy);
		virtual ~AWeapon();

		AWeapon		&operator=(AWeapon const &aw);

		std::string  getName() const;
		int getAPCost() const;
		int getDamage() const;

		virtual void attack() const = 0;
};

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _ap(apcost), _damage(damage)
{}

AWeapon::AWeapon(AWeapon const &copy)
{
	this->_name = copy._name;
	this->_damage = copy._damage;
	this->_ap = copy._ap;
}

AWeapon::~AWeapon()
{}

AWeapon		&AWeapon::operator=(AWeapon const &aw)
{
	if (this != &aw)
	{
		this->_name = aw._name;
		this->_damage = aw._damage;
		this->_ap = aw._ap;
	}
	return *this;
}

#endif
