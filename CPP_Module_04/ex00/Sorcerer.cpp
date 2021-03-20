#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string tytle) : _name(name), _tytle(tytle)
{
	std::cout << "\e[0;96m" << this->_name << ", " << this->_tytle << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &copy)
{
	this->_name = copy._name;
	this->_tytle = copy._tytle;
	std::cout << "\e[0;96m" << this->_name << ", " << this->_tytle << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << "\e[0;96m" << this->_name << "," << this->_tytle << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer	&Sorcerer::operator=(Sorcerer const &so)
{
	if (this != &so)
	{
		this->_name = so._name;
		this->_tytle = so._tytle;
	}
	return *this;
}

std::string	Sorcerer::getName() const
{
	return this->_name;
}

std::string	Sorcerer::getTytle() const
{
	return this->_tytle;
}

void		Sorcerer::polymorph(Victim const &vi) const
{
	vi.getPolymorphed();
}

std::ostream		&operator<<(std::ostream &output, Sorcerer const &so)
{
	output << "\e[0;96mI am " << so.getName() << ", " << so.getTytle() << ", and I like ponies!" << std::endl;
	return output;
}
