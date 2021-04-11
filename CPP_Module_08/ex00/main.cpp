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

	std::cout << "\e[1;37mSECOND!\e[0m" << std::endl;
	try
	{
		std::list<int>				myList{ 123,321,15646,1354654,123,32146,6454121,32465,21,545,564 };
		std::list<int>::iterator	it;
		myList.push_back(42);
		myList.push_front(21);
		for (it = myList.begin(); it != myList.end(); it++)
		{
			std::cout << *it << std::endl;
		}
		it = easyfind(myList, 21);
		std::cout << std::endl << *it << std::endl;
		it = easyfind(myList, 43);
		std::cout << std::endl << *it << std::endl;		
	}
	catch(const std::string& e)
	{
		std::cerr << e << '\n';
	}

	std::cout << "\e[1;37mTHIRD!\e[0m" << std::endl;
	try
	{
		std::array<int,5>			myArray{21,42,84,168,336};
		std::array<int,5>::iterator	ia;
		for (ia = myArray.begin(); ia != myArray.end(); ia++)
		{
			std::cout << *ia << std::endl;
		}
		ia = easyfind(myArray, 42);
		std::cout << std::endl << *ia << std::endl;
		ia = easyfind(myArray, 151);
		std::cout << std::endl << *ia << std::endl;
	}
	catch(const std::string& e)
	{
		std::cerr << e << '\n';
	}

	return 0;
}

// clang++ -Wall -Werror -Wextra -std=c++98 *.cpp
