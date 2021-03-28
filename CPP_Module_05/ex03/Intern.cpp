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

Form			*makeForm(std::string const name, std::string const target)
{
	Form			*arr[3];
	arr[0] = new PresidentialPardonForm(target);
	arr[1] = new RobotomyRequestForm(target);
	arr[2] = new ShrubberyCreationForm(target);
	std::string		names[3] = {"PresidentialPardon", "RobotomyRequest", "ShrubberyCreation"};
	for (int i = 0; i < 3; i++)
	{
		if (names[i] != name)
		{
			delete arr[i];
			arr[i] = NULL;
		}
	}
	for (size_t i = 0; i < 3; i++)
	{
		if (names[i] == name)
		{
			std::cout << "\e[1;96mIntern creates " << name[i] << "Form\e[0m" << std::endl;
			return arr[i];
		}
	}
	throw std::string("I don't know " + name + "Form");
	return NULL;
}
