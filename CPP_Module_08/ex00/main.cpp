#include "easyfind.hpp"

int		main()
{
	std::cout << "\e[1;37mFIRST!\e[0m" << std::endl;
	try
	{
		std::vector<int>			myVector(21, 42);
		std::vector<int>::iterator	i;
		size_t						k = -1;
		for (i = myVector.begin(); i != myVector.end(); i++)
		{
			std::cout << *i << '\t';
			if (++k % 5 == 0)
				std::cout << std::endl;
		}
		std::cout << std::endl;
		myVector.at(7) = 21;
		myVector.at(13) = 43;
		myVector.at(4) = 18;
		k = -1;
		for (i = myVector.begin(); i != myVector.end(); i++)
		{
			std::cout << *i << '\t';
			if (++k % 5 == 0)
				std::cout << std::endl;
		}
		std::cout << std::endl;
		i = easyfind(myVector, 21);
		std::cout << *i << '\n';
		i = easyfind(myVector, 43);
		std::cout << *i << '\n';
		i = easyfind(myVector, 2);
		std::cout << *i << '\n';
	}
	catch(const std::string& e)
	{
		std::cerr << e << '\n';
	}

	return 0;
}

// clang++ -Wall -Werror -Wextra -std=c++98 *.cpp
