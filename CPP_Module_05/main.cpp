#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int		main()
{
	std::cout << "\e[1;34mFirst test!\e[0m" << std::endl;
	try
	{
		Bureacrat firstB = Bureacrat("Bur", 138);
		ShrubberyCreationForm firstF = ShrubberyCreationForm("Contract");
		firstB.signForm(firstF);
		firstB.executeForm(firstF);
		std::cout << firstF << std::endl;
		std::cout << firstB << std::endl;
		firstB.gradePlus();
		firstB.executeForm(firstF);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "\e[1;34mSecond test!\e[0m" << std::endl;
	try
	{
		Bureacrat secondB = Bureacrat("Eac", 18);
		Bureacrat secondBA = Bureacrat("Vac", 44);
		RobotomyRequestForm secondF = RobotomyRequestForm("Bisness");
		secondB.signForm(secondF);
		secondBA.signForm(secondF);
		secondBA.executeForm(secondF);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "\e[1;34mThird test!\e[0m" << std::endl;
	try
	{
		Bureacrat thirdB = Bureacrat("Jora", 6);
		PresidentialPardonForm thirdF = PresidentialPardonForm("Bukaka");
		thirdB.signForm(thirdF);
		thirdB.executeForm(thirdF);
		std::cout << thirdB << std::endl;
		std::cout << thirdF << std::endl;
		thirdB.gradePlus();
		thirdB.executeForm(thirdF);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
