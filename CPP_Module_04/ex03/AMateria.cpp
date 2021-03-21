#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
	this->_xp = 0;
}

AMateria::AMateria(AMateria const &copy)
{
	this->_type = copy._type;
	this->_xp = copy._xp;
}

AMateria::~AMateria()
{
}

AMateria		&AMateria::operator=(AMateria const &am)
{
	if (this != &am)
	{
		this->_type = am._type;
		this->_xp = am._xp;
	}
	return *this;
}

std::string const	&AMateria::getType() const
{
	return this->_type;
}

unsigned int		AMateria::getXP() const
{
	return this->_xp;
}

void				AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}
