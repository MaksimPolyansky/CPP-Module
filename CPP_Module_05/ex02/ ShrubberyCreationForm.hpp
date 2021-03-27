#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		/* data */
	public:
		ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm		&operator=(ShrubberyCreationForm const &sh);
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form(target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : Form(copy)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm		&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &sh)
{
	if (this != &sh)
		Form::operator=(sh);
	return *this;
}

#endif
