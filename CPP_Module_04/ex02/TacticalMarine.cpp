#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(/* args */)
{
	std::cout << "\e[1;35mTactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &)
{
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "\e[1;35mAaargh..." << std::endl;
}

TacticalMarine	&TacticalMarine::operator=(TacticalMarine const &)
{
	return *this;
}

ISpaceMarine*	TacticalMarine::clone() const
{
	return new TacticalMarine(*this);
}

void			TacticalMarine::battleCry() const
{
	std::cout << "\e[1;35mFor the holy PLOT!" << std::endl;
}

void			TacticalMarine::rangedAttack() const
{
	std::cout << "\e[1;35m* attacks with a bolter *" << std::endl;
}

void			TacticalMarine::meleeAttack() const
{
	std::cout << "\e[1;35m* attacks with a chainsword *" << std::endl;
}
