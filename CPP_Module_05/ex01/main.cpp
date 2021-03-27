#include "Bureacrat.hpp"

int		main()
{
	std::cout << "\e[1;34mFirst test!\e[0m" << std::endl;
	try
	{
		Bureacrat firstB = Bureacrat("Bur", 18);
		Form firstF = Form("Contract", 0, 2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "\e[1;34mSecond test!\e[0m" << std::endl;
	try
	{
		Bureacrat firstB = Bureacrat("Bur", 18);
		Form firstF = Form("Contract", 2, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "\e[1;34mThird test!\e[0m" << std::endl;
	try
	{
		Bureacrat firstB = Bureacrat("Bur", 12);
		Form firstF = Form("Contract", 10, 90);
		std::cout << std::endl;
		firstB.signForm(firstF);
		firstB.gradePlus();
		firstB.signForm(firstF);
		firstB.gradePlus();
		firstB.signForm(firstF);
		firstB.gradePlus();
		firstB.signForm(firstF);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}

// clang++ -Wall -Werror -Wextra *.cpp
