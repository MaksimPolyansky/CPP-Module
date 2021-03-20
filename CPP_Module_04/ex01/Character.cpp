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
{}


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
	if (this->_ap <= 0)
		std::cout << "\e[1;35mOoops... No AP!" << std::endl;
	if (en)
	{
		std::cout << "\e[1;35m" << this->_name << " attacks ";
		std::cout << en->getType() << std::endl;
	}
}

std::string		Character::getName() const
{
	return this->_name;
}

std::ostream	&operator<<(std::ostream &output, Character const &ch)
{
	output << "" << "" << std::endl;
	return output;
}
