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
		*this = bu;
	return *this;
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
	{
		std::cout << "\e[1;33mYour " << fo.getName() << " has been signed!\e[0m" << std::endl;
		std::cout << "\e[1;33mStatus: \e[0m" << fo << std::endl;
	}
	else
	{
		try
		{
			std::cout << "\e[1;33mYou signed the " << fo.getName() << "!\e[0m" << std::endl;
			std::cout << "\e[1;33mStatus: \e[0m" << fo << std::endl;
			fo.beSign(*this);

		}
		catch(const std::exception& e)
		{
			std::cout << "\e[1;33mYour grade is low!\e[0m" << std::endl;
			std::cout << "\e[1;33mStatus: \e[0m" << fo << std::endl;
			std::cerr << e.what() << '\n';
		}

	}
}

std::ostream		&operator<<(std::ostream &output, Bureacrat const &bu)
{
	output << "\e[1;36m<" << bu.getName() << ">, bureaucrat grade <" << bu.getGrade() << ">\e[0m" << std::endl;
	return output;
}
