#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	std::srand(std::time(NULL));
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : Form(copy)
{
	std::srand(std::time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm		&RobotomyRequestForm::operator=(RobotomyRequestForm const &ro)
{
	std::srand(std::time(NULL));
	if (this != &ro)
		Form::operator=(ro);
	return *this;
}

void					RobotomyRequestForm::executed() const
{
	std::cout << "\e[1;33mBRRRRRRRRRRRRRRR!\e[0m" << std::endl;
	if ((std::rand() % 2))
		std::cout << "\e[1;33m<" << this->getTarget() << "> has been robotomized successfully !\e[0m" << std::endl;
	else
		std::cout << "\e[1;33m" << this->getTarget() << "’s a failure!\e[0m" << std::endl;
}

std::string	RobotomyRequestForm::getTarget() const
{
	return this->_target;
}
