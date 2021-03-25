#include "Bureacrat.hpp"
#include "Form.hpp"

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
		Bureacrat firstB = Bureacrat("Bur", 18);
		Form firstF = Form("Contract", 0, 2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
/*	std::cout << std::endl << "\e[1;34mFourth test!\e[0m" << std::endl;
	try
	{
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "\e[1;34mFifth test!\e[0m" << std::endl;
	try
	{
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}*/

	return 0;
}
