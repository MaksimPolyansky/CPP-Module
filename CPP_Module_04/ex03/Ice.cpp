#include "Ice.hpp"

Ice::Ice(/* args */) : AMateria("ice")
{
}

Ice::Ice(Ice const &copy) : AMateria(copy)
{
}

Ice::~Ice()
{
}

Ice		&Ice::operator=(Ice const &ic)
{
	if (this != &ic)
		AMateria::operator=(ic);
	return *this;
}

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "\e[1;35m* shoots an ice bolt at ";
	std::cout << target.getName() << " *" << std::endl;
}
