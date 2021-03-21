#ifndef BUREACRAT_HPP
# define BUREACRAT_HPP

#include <iostream>

class Bureacrat
{
	private:
		std::string const	_name;
		int					_grade;
	public:
		Bureacrat(/* args */);
		Bureacrat(std::string name, int grade);
		Bureacrat(Bureacrat const &copy);
		~Bureacrat();

		Bureacrat			&operator=(Bureacrat const &bu);

		void				GradeTooHighException();
		void				GradeTooLowException();

		std::string			getName() const;
		int					getGrade() const;

		void				gradeMinus();
		void				gradePlus();
};

std::ostream				&operator<<(std::ostream &output, Bureacrat const &bu);

Bureacrat::Bureacrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		Bureacrat::GradeTooLowException();
	if (grade > 150)
		Bureacrat::GradeTooHighException();
	this->_grade = grade;
}

Bureacrat::Bureacrat(Bureacrat const &copy) : _name(copy._name)
{
	this->_grade = copy._grade;
}

Bureacrat::~Bureacrat()
{
}

Bureacrat			&Bureacrat::operator=(Bureacrat const &bu)
{
	if (this != &bu)
		this->_grade = bu._grade;
	return *this;
}

void				Bureacrat::GradeTooHighException()
{}

void				Bureacrat::GradeTooLowException()
{}

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
	this->_grade++;
	if (this->_grade > 150)
		Bureacrat::GradeTooHighException();
}

void				Bureacrat::gradePlus()
{
	this->_grade--;
	if (this->_grade < 1)
		Bureacrat::GradeTooLowException();
}

std::ostream		&operator<<(std::ostream &output, Bureacrat const &bu)
{
	output << "\e[1;36m<" << bu.getName() << ">, bureaucrat grade <" << bu.getGrade() << ">";
	return output;
}

#endif
