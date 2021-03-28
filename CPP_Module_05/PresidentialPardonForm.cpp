#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : Form(copy)
{
	this->_target = copy._target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm		&PresidentialPardonForm::operator=(PresidentialPardonForm const &pr)
{
	if (this != &pr)
	{
		Form::operator=(pr);
		this->_target = pr._target;
	}
	return *this;
}

void		PresidentialPardonForm::executed() const
{
	std::cout << "\e[1;36m<" << this->getName() << "> has been pardoned by Zafod Beeblebrox\e[0m" << std::endl;
}

std::string	PresidentialPardonForm::getTarget() const
{
	return this->_target;
}
