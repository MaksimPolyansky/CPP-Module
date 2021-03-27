#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : Form(copy)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm		&PresidentialPardonForm::operator=(PresidentialPardonForm const &pr)
{
	if (this != &pr)
		Form::operator=(pr);
	return *this;
}

void		PresidentialPardonForm::executed() const
{
	std::cout << "\e[1;36m<" << this->getName() << "> has been pardoned by Zafod Beeblebrox\e[0m" << std::endl;
}
