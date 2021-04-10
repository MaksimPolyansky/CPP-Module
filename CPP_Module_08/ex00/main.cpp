#include "easyfind.hpp"

int		main()
{
	std::cout << "\e[1;37mFIRST!\e[0m" << std::endl;
	try
	{
		std::vector<int>	myVector(21, 42);
	}
	catch(const std::string& e)
	{
		std::cerr << e << '\n';
	}
	return 0;
}

// clang++ -Wall -Werror -Wextra -std=c++98 *.cpp
