#include "Cure.hpp"

Cure::Cure(/* args */) : AMateria("cure")
{
}

Cure::Cure(Cure const &copy) : AMateria(copy)
{
}

Cure::~Cure()
{
}

Cure		&Cure::operator=(Cure const &cu)
{
	if (this != &cu)
		AMateria::operator=(cu);
	return *this;
}

AMateria*	Cure::clone() const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "\e[1;35m* heals ";
	std::cout << target.getName() << "’s wounds *" << std::endl;
}
