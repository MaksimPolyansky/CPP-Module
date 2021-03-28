#include "Intern.hpp"

int		main()
{
	std::cout << "\e[1;34mFirst!\e[0m" << std::endl;

	Bureacrat *firstA = new Bureacrat("Bob", 1);
	Bureacrat *firstB = new Bureacrat("Bill", 150);
	std::cout << std::endl;
	Intern firstC;
	std::cout << std::endl;
	Form *firstD = firstC.makeForm("ShrubberyCreation", "Bykov");
	std::cout << std::endl;
	firstB->signForm(*firstD);
	std::cout << *firstB << std::endl;
	std::cout << std::endl;
	firstA->signForm(*firstD);
	std::cout << *firstA << std::endl;
	std::cout << std::endl;
	firstA->executeForm(*firstD);
	std::cout << *firstA << std::endl;
	std::cout << std::endl;

	delete firstD;
	delete firstB;
	delete firstA;
	std::cout << std::endl;

	std::cout << std::endl << "\e[1;34mlobanov!\e[0m" << std::endl;
	try
	{
		Intern lobanov;
		lobanov.makeForm("ShrubberyCreation1", "Bykov");
	}
	catch(const std::string& s)
	{
		std::cerr << s << std::endl;
	}
	std::cout << std::endl << "\e[1;34mromanenko!\e[0m" << std::endl;
	try
	{
		Intern romanenko;
		romanenko.makeForm("RobotomyRequest1", "Bykov");
	}
	catch(const std::string& s)
	{
		std::cerr << s << std::endl;
	}
	std::cout << std::endl << "\e[1;34mlevin!\e[0m" << std::endl;
	try
	{
		Intern levin;
		levin.makeForm("PresidentialPardon1", "Bykov");
	}
	catch(const std::string& s)
	{
		std::cerr << s << std::endl;
	}

	return 0;
}
