#include "easyfind.hpp"

int		main()
{
	// std::cout << "\e[1;37mFIRST!\e[0m" << std::endl;
	// try
	// {
	// 	std::vector<int>			myVector(21, 42);
	// 	std::vector<int>::iterator	i;
	// 	size_t						k = -1;
	// 	for (i = myVector.begin(); i != myVector.end(); i++)
	// 	{
	// 		std::cout << *i << '\t';
	// 		if (++k % 5 == 0)
	// 			std::cout << std::endl;
	// 	}
	// 	std::cout << std::endl;
	// 	myVector.at(7) = 21;
	// 	myVector.at(13) = 21;
	// 	myVector.at(4) = 21;
	// 	k = -1;
	// 	for (i = myVector.begin(); i != myVector.end(); i++)
	// 	{
	// 		std::cout << *i << '\t';
	// 		if (++k % 5 == 0)
	// 			std::cout << std::endl;
	// 	}
	// 	std::cout << std::endl;
	// 	i = easyfind(myVector, 5);
	// 	std::cout << *i << '\t';
	// 	i = easyfind(myVector, 4);
	// 	std::cout << *i << '\t';
	// 	i = easyfind(myVector, 22);
	// 	std::cout << *i << '\t';
	// }
	// catch(const std::string& e)
	// {
	// 	std::cerr << e << '\n';
	// }

	// std::cout << "\e[1;37mSECOND!\e[0m" << std::endl;
	// try
	// {
	// 	std::list<int>				myList{ 123,321,15646,1354654,123,32146,6454121,32465,21,545,564 };
	// 	std::list<int>::iterator	it;
	// 	myList.push_back(42);
	// 	myList.push_front(21);
	// 	for (it = myList.begin(); it != myList.end(); it++)
	// 	{
	// 		std::cout << *it << std::endl;
	// 	}
	// 	it = easyfind(myList, 3);
	// 	std::cout << std::endl << *it << std::endl;
	// 	it = easyfind(myList, 42);
	// 	std::cout << std::endl << *it << std::endl;		
	// }
	// catch(const std::string& e)
	// {
	// 	std::cerr << e << '\n';
	// }

	std::cout << "\e[1;37mTHIRD!\e[0m" << std::endl;
	try
	{
		std::array<int,5>			myArray{21,42,84,168,336};
		std::array<int,5>::iterator	ia;
		for (ia = myArray.begin(); ia != myArray.end(); ia++)
		{
			std::cout << *ia << std::endl;
		}
		ia = easyfind(myArray, 2);
		std::cout << *ia << std::endl;
		ia = easyfind(myArray, 21);
		std::cout << *ia << std::endl;
	}
	catch(const std::string& e)
	{
		std::cerr << e << '\n';
	}

	return 0;
}

// clang++ -Wall -Werror -Wextra -std=c++98 *.cpp
