#include "Bureacrat.hpp"

int		main()
{
	std::cout << "\e[1;34mFirst test!\e[0m" << std::endl;
	try
	{
		Bureacrat	first = Bureacrat("First", 151);
		std::cout << first;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "\e[1;34mSecond test!\e[0m" << std::endl;
	try
	{
		Bureacrat	second = Bureacrat("Second", 0);
		std::cout << second;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "\e[1;34mThird test!\e[0m" << std::endl;
	try
	{
		Bureacrat	third = Bureacrat("third", 1);
		std::cout << third;
		third.gradePlus();
		std::cout << third;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "\e[1;34mFourth test!\e[0m" << std::endl;
	try
	{
		Bureacrat	fourth = Bureacrat("Fourth", 150);
		std::cout << fourth;
		fourth.gradeMinus();
		std::cout << fourth;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "\e[1;34mFifth test!\e[0m" << std::endl;
	try
	{
		Bureacrat	fifth = Bureacrat("Fifth", 75);
		std::cout << "\e[1;97m" << fifth.getName() << " has " << fifth.getGrade() << " grade!\e[0m" << std::endl;
		std::cout << fifth;
		fifth.gradeMinus();
		std::cout << "\e[1;97m" << fifth.getName() << " has " << fifth.getGrade() << " grade!\e[0m" << std::endl;
		std::cout << fifth;
		fifth.gradePlus();
		std::cout << "\e[1;97m" << fifth.getName() << " has " << fifth.getGrade() << " grade!\e[0m" << std::endl;
		std::cout << fifth;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
