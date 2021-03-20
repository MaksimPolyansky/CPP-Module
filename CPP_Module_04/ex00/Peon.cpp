#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "\e[0;96mZog zog." << std::endl;
}

Peon::Peon(Peon const &copy) : Victim(copy)
{
	std::cout << "\e[0;96mZog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "\e[0;96mBleuark..." << std::endl;
}

Peon	&Peon::operator=(Peon const &pe)
{
	if (this != &pe)
		Victim::operator=(pe);
	return *this;
}

void	Peon::getPolymorphed() const
{
	std::cout << "\e[0;96m" << this->_name << " has been turned into a pink pony!" << std::endl;
}
