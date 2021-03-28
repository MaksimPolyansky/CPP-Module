#include "Intern.hpp"

int		main()
{
	//std::cout << "\e[1;34mFirst test!\e[0m" << std::endl;
	//try
	//{
	//	Bureacrat firstB = Bureacrat("Bob", 1);
	//	Bureacrat firstB = Bureacrat("Bill", 150);
	//	ShrubberyCreationForm firstF = ShrubberyCreationForm("Contract");
	//	firstB.signForm(firstF);
	//	firstB.executeForm(firstF);
	//	std::cout << firstF << std::endl;
	//	std::cout << firstB << std::endl;
	//	firstB.gradePlus();
	//	firstB.executeForm(firstF);
	//}
	//catch(const std::exception& e)
	//{
	//	std::cerr << e.what() << '\n';
	//}
	std::cout << std::endl << "\e[1;34mSecond test!\e[0m" << std::endl;
	try
	{
		Intern lobanov;
		lobanov.makeForm("ShrubberyCreationForm", "Vasya");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const std::string& s)
	{
		std::cerr << s << std::endl;
	}
	//std::cout << std::endl << "\e[1;34mThird test!\e[0m" << std::endl;
	//try
	//{
	//	Bureacrat thirdB = Bureacrat("Jora", 6);
	//	PresidentialPardonForm thirdF = PresidentialPardonForm("Bukaka");
	//	thirdB.signForm(thirdF);
	//	thirdB.executeForm(thirdF);
	//	std::cout << thirdB << std::endl;
	//	std::cout << thirdF << std::endl;
	//	thirdB.gradePlus();
	//	thirdB.executeForm(thirdF);
	//}
	//catch(const std::exception& e)
	//{
	//	std::cerr << e.what() << '\n';
	//}

	return 0;
}
