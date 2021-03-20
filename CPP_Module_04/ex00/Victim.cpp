#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "\e[0;96mSome random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &copy)
{
	this->_name = copy._name;
	std::cout << "\e[0;96mSome random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "\e[0;96mVictim " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim	&Victim::operator=(Victim const &vi)
{
	if (this != &vi)
		this->_name = vi._name;
	return *this;
}

std::string	Victim::getName() const
{
	return this->_name;
}

void		Victim::getPolymorphed() const
{
	std::cout << "\e[0;96m" << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream		&operator<<(std::ostream &output, Victim const &vi)
{
	output << "\e[0;96mI'm " << vi.getName() << " and I like otters!" << std::endl;
	return output;
}
