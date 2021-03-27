#include "Bureacrat.hpp"

Bureacrat::Bureacrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureacrat::GradeTooHighException();
	if (grade > 150)
		throw Bureacrat::GradeTooLowException();
	std::cout << "\e[1;36mHi, guys! I'm Bureacrat!\e[0m" << std::endl;
	this->_grade = grade;
}

Bureacrat::Bureacrat(Bureacrat const &copy) : _name(copy._name)
{
	if (copy._grade < 1)
		throw Bureacrat::GradeTooHighException();
	if (copy._grade > 150)
		throw Bureacrat::GradeTooLowException();
	this->_grade = copy._grade;
}

Bureacrat::~Bureacrat()
{
	std::cout << "\e[1;36mBye, guys! It was ur Bureacrat!\e[0m" << std::endl;
}

Bureacrat			&Bureacrat::operator=(Bureacrat const &bu)
{
	if (this != &bu)
	{
		if (bu._grade < 1)
			throw Bureacrat::GradeTooHighException();
		if (bu._grade > 150)
			throw Bureacrat::GradeTooLowException();
		this->_grade = bu._grade;
	}
	return *this;
}

const char* Bureacrat::GradeTooHighException::what() const throw()
{
	return ("Grade Too High Exception");
}

const char* Bureacrat::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low Exception");
}

std::string			Bureacrat::getName() const
{
	return this->_name;
}

int					Bureacrat::getGrade() const
{
	return this->_grade;
}

void				Bureacrat::gradeMinus()
{
	if (++this->_grade > 150)
		throw Bureacrat::GradeTooLowException();
}

void				Bureacrat::gradePlus()
{
	if (--this->_grade < 1)
		throw Bureacrat::GradeTooHighException();
}

std::ostream		&operator<<(std::ostream &output, Bureacrat const &bu)
{
	output << "\e[1;36m<" << bu.getName() << ">, bureaucrat grade <" << bu.getGrade() << ">\e[0m" << std::endl;
	return output;
}
