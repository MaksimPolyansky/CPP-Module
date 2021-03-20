#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(/* args */)
{
	std::cout << "\e[1;35m* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &)
{
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "\e[1;35mI’ll be back..." << std::endl;
}

AssaultTerminator	&AssaultTerminator::operator=(AssaultTerminator const &)
{
	return *this;
}

ISpaceMarine*	AssaultTerminator::clone() const
{
	return new AssaultTerminator(*this);
}

void			AssaultTerminator::battleCry() const
{
	std::cout << "\e[1;35mThis code is unclean. PURIFY IT!" << std::endl;
}

void			AssaultTerminator::rangedAttack() const
{
	std::cout << "\e[1;35m* does nothing *" << std::endl;
}

void			AssaultTerminator::meleeAttack() const
{
	std::cout << "\e[1;35m* attacks with chainfists *" << std::endl;
}
