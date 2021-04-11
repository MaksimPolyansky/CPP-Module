#include "span.hpp"
#include <ctime>

int		main()
{
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "\e[1;37m____________________________________________________________________\e[0m" << std::endl << std::endl;

	try
	{
		Span first = Span(1);
		first.addNumber(21);
		first.addNumber(42);
	}
	catch(const std::string& e)
	{
		std::cerr << e << '\n';
	}

	std::cout << std::endl;
	std::cout << "\e[1;37m|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\e[0m" << std::endl << std::endl;


	try
	{
		Span second = Span(21);
		second.addNumber(21);
		second.addNumber(42);
		second.print();
		std::cout << std::endl;
		std::vector<int> third(42, 21);
		second.addNumber(third);
		second.print();
		std::cout << std::endl;
		second.addNumber(third);
	}
	catch(const std::string& e)
	{
		std::cerr << e << '\n';
	}

	std::cout << std::endl;
	std::cout << "\e[1;37mmore\e[0m" << std::endl << std::endl;


	try
	{
		std::srand(std::time(NULL));
		Span buka = Span(420);
		std::vector<int> taka;
		for (size_t i = 0; i < 10000; i++)
		{
			taka.push_back(std::rand());
		}
		buka.addNumber(taka);
		buka.print();
		std::cout << std::endl;
		std::cout << buka.longestSpan() << std::endl;
		std::cout << std::endl;
		std::cout << buka.shortestSpan() << std::endl;
	}
	catch(const std::string& e)
	{
		std::cerr << e << '\n';
	}


	return 0;
}