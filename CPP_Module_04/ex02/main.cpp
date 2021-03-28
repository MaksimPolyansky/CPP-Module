#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	//Squad *ninja = new Squad();
	//ninja->push(jim);
	//std::cout << ninja->getCount() << std::endl;
	//ninja->getUnit(0);
	//Squad *li = new Squad(*ninja);
	//std::cout << li->getCount() << std::endl;
	//li->getUnit(0);

	//ISpaceMarine *first = new TacticalMarine;
	//first->battleCry();
	//std::cout << first << std::endl;

	//ISquad *second = new Squad;
	//second->push(first);
	//second->push(first);
	//std::cout << second->getCount() << " = count" << std::endl;

	return 0;
}
