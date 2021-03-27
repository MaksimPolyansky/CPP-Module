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
	return ("\e[1;91mBureacrat: Grade Too High Exception\e[0m");
}

const char* Bureacrat::GradeTooLowException::what() const throw()
{
	return ("\e[1;91mBureacrat: Grade Too Low Exception\e[0m");
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

void				Bureacrat::signForm(Form &fo)
{
	if (fo.getBoolean())
		std::cout << "\e[1;33m" << this->getName() << " cannot sign " << fo.getName() << " because the " << fo.getName() << " was signed!\e[0m" << std::endl;
	else
	{
		try
		{
			fo.beSign(*this);
			std::cout << "\e[1;33m" << this->getName() << " signs " << fo.getName() << "!\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[1;33m" << this->getName() << " cannot sign " << fo.getName() << " because grade is low!\e[0m" << std::endl;
			std::cout << "\e[1;33mStatus - \e[0m" << fo;
			std::cout << "\e[1;33mStatus - \e[0m" << *this << std::endl;
			std::cerr << e.what() << '\n' << std::endl;
		}

	}
}

std::ostream		&operator<<(std::ostream &output, Bureacrat const &bu)
{
	output << "\e[1;36m<" << bu.getName() << ">, bureacrat grade <" << bu.getGrade() << ">\e[0m" << std::endl;
	return output;
}
