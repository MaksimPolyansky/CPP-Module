#include "mutantstack.hpp"
#include <ctime>

int		main()
{
	MutantStack<int> mstack;


	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	//[...]

	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "\e[1;33m____________________________________________________________________\e[0m" << std::endl << std::endl;

	std::srand(std::time(NULL));
	MutantStack<int>	first;
	for (size_t i = 0; i < 21; i++)
	{
		first.push(std::rand());
	}
	MutantStack<int>::iterator	i = first.begin();
	MutantStack<int>::iterator	ie = first.end();

	++i;
	--i;
	while (i != ie)
	{
		std::cout << *i << std::endl;
		++i;
	}
	std::cout << std::endl;

	MutantStack<int>::reverse_iterator	ri = first.r_begin();
	MutantStack<int>::reverse_iterator	rie = first.r_end();

	++ri;
	--ri;
	while (ri != rie)
	{
		std::cout << *ri << std::endl;
		++ri;
	}


	return 0;
}
