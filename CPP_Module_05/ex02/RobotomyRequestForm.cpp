#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
	std::srand(std::time(NULL));
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
	if ((1 + std::rand() % 2) == 1)
		std::cout << "\e[1;33m<" << this->getName() << "> has been robotomized!\e[0m" << std::endl;
}
