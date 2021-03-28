#ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include "Form.hpp"

class Intern
{
	private:
		/* data */
	public:
		Intern(/* args */);
		Intern(Intern const &);
		~Intern();

		Intern		&operator=(Intern const &);

		Form		*makeForm(std::string const name, std::string const target);
		Form		*getPresidential(std::string const target);
		Form		*getRobotomy(std::string const target);
		Form		*getShrubbery(std::string const target);
};

#endif
