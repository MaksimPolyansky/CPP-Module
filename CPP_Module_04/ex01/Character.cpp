#include "Character.hpp"

Character::Character(std::string const &name)
{
	this->_name = name;
	this->_ap = 40;
	this->_aweapon = NULL;
}

Character::Character(Character const &copy)
{
	this->_name = copy._name;
	this->_ap = copy._ap;
	this->_aweapon = copy._aweapon;
}

Character::~Character()
{
}


Character		&Character::operator=(Character const &ch)
{
	if (this != &ch)
	{
		this->_name = ch._name;
		this->_ap = ch._ap;
		this->_aweapon = ch._aweapon;
	}
	return *this;
}

void			Character::recoverAP()
{
	this->_ap += 10;
	(this->_ap > 40) ? this->_ap = 40 : 0;
}

void			Character::equip(AWeapon *aw)
{
	this->_aweapon = aw;
}

void			Character::attack(Enemy *en)
{
	if (this->_aweapon && this->getAP() < this->_aweapon->getAPCost())
		std::cout << "\e[1;35mOoops... No AP!" << std::endl;
	else if (en)
	{
		this->_ap -= this->_aweapon->getAPCost();
		std::cout << "\e[1;35m" << this->_name << " attacks ";
		std::cout << en->getType() << " with a ";
		std::cout << this->_aweapon->getName() << std::endl;
		this->_aweapon->attack();
		en->takeDamage(this->_aweapon->getDamage());
	}
}

std::string		Character::getName() const
{
	return this->_name;
}

AWeapon			*Character::getWeapon() const
{
	return this->_aweapon;
}

int				Character::getAP() const
{
	return this->_ap;
}

std::ostream	&operator<<(std::ostream &output, Character const &ch)
{
	std::cout << "\e[1;35m" << ch.getName() << " has ";
	std::cout << ch.getAP() << " AP and ";
	if (ch.getWeapon())
	{
		std::cout << "wields a ";
		std::cout << ch.getWeapon()->getName() << std::endl;
	}
	else
		std::cout << "is unarmed" << std::endl;
	return output;
}

//NAME has AP_NUMBER AP and wields a WEAPON_NAME
//NAME has AP_NUMBER AP and is unarmed
