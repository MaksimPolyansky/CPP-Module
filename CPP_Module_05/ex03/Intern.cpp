#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const &)
{
}

Intern::~Intern()
{
}

Intern			&Intern::operator=(Intern const &)
{
	return *this;
}

Form			*Intern::makeForm(std::string const name, std::string const target)
{
	Form			*arr[3];
	arr[0] = this->getPresidential();
	arr[1] = this->getRobotomy();
	arr[2] = this->getShrubbery();
	std::string		names[3] = {"PresidentialPardon", "RobotomyRequest", "ShrubberyCreation"};
	for (int i = 0; i < 3; i++)
	{
		if (names[i] != name)
		{
			return arr[i];
		}
	}
	throw std::string("\e[1;91mI don't know " + name + "\e[0m");
	return NULL;
}

Form		*Intern::getPresidential(std::string const target)
{
	return new PresidentialPardonForm(target);
}

Form		*Intern::getRobotomy(std::string const target)
{
	return new RobotomyRequestForm(target);
}

Form		*Intern::getShrubbery(std::string const target)
{
	return new ShrubberyCreationForm(target);
}
