#include "NotPeon.hpp"
#include "Sorcerer.hpp"
#include "Peon.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);

	//Sorcerer frodo("Alex", "MegaTrip");
	//NotPeon fish("Fish");

	//std::cout << frodo << fish;
	//std::cout << frodo.getName() << ": if u want to become a frog..." << std::endl;

	//frodo.polymorph(fish);

	return 0;
}
