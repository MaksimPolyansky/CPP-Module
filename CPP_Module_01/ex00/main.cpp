#include "Pony.hpp"

int		main()
{
	std::cout << "\x1b[31;1mIt's my Pony!\x1b[0m" << std::endl;
	std::cout << "\x1b[32;1mThe Heap\x1b[0m" << std::endl;
	ponyOnTheHeap();
	std::cout << "\x1b[33;1mThe Stack\x1b[0m" << std::endl;
	ponyOnTheStack();
	return 0;
}
