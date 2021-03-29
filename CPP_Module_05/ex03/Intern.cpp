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

Form			*Intern::makeForm(std::string const &name, std::string const &target)
{
	Form			*(*func[3])(std::string const &) = {Intern::getPresidential, Intern::getRobotomy, Intern::getShrubbery};
	std::string		names[3] = {"PresidentialPardon", "RobotomyRequest", "ShrubberyCreation"};
	for (size_t i = 0; i < 3; i++)
	{
		if (names[i] == name)
		{
			std::cout << "\e[0;94mIntern creates " << names[i] << std::endl;
			return func[i](target);
		}
	}
	throw std::string("\e[1;91mI don't know " + name + "\e[0m");
	return NULL;
}

Form		*Intern::getPresidential(std::string const &target)
{
	return new PresidentialPardonForm(target);
}

Form		*Intern::getRobotomy(std::string const &target)
{
	return new RobotomyRequestForm(target);
}

Form		*Intern::getShrubbery(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}
