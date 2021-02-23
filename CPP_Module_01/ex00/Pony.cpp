#include "Pony.hpp"


Pony::Pony(std::string name) : _name(name)
{
	std::cout << this->_name;
	std::cout << "\x1b[95;1m: I was born!\x1b[0m" << std::endl;
}

Pony::~Pony()
{
	std::cout << this->_name;
	std::cout << "\x1b[95;1m: I died!\x1b[0m" << std::endl;
}

void	Pony::pony_live()
{
	std::cout << this->_name;
	std::cout << "\x1b[95;1m: I live!\x1b[0m" << std::endl;
}

void	ponyOnTheHeap()
{
	Pony	*pony = new Pony("Heap");
	pony->pony_live();
	delete pony;
}

void	ponyOnTheStack()
{
	Pony	pony = Pony("Stack");
	pony.pony_live();
	return;
}

//"\x1b[95;1mThe Stack\x1b[0m"
