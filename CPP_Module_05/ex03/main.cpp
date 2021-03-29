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
	// std::cout << *firstB << std::endl;
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



	std::cout << "\e[1;34mSecond!\e[0m" << std::endl;

	Bureacrat *secondA = new Bureacrat("Bob", 1);
	std::cout << std::endl;
	Intern secondC;
	std::cout << std::endl;
	Form *secondD = secondC.makeForm("PresidentialPardon", "Bykov");
	std::cout << std::endl;
	// std::cout << *firstB << std::endl;
	std::cout << std::endl;
	secondA->signForm(*secondD);
	std::cout << *secondA << std::endl;
	std::cout << std::endl;
	secondA->executeForm(*firstD);
	std::cout << *secondA << std::endl;
	std::cout << std::endl;

	delete secondD;
	delete secondA;
	std::cout << std::endl;


	std::cout << "\e[1;34mThird!\e[0m" << std::endl;

	Bureacrat *thirdA = new Bureacrat("Bob", 1);
	std::cout << std::endl;
	Intern thirdC;
	std::cout << std::endl;
	Form *thirdD = thirdC.makeForm("RobotomyRequest", "Bykov");
	std::cout << std::endl;
	// std::cout << *firstB << std::endl;
	std::cout << std::endl;
	thirdA->signForm(*thirdD);
	std::cout << *secondA << std::endl;
	std::cout << std::endl;
	thirdA->executeForm(*firstD);
	std::cout << *thirdA << std::endl;
	std::cout << std::endl;

	delete thirdD;
	delete thirdA;
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
