#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureacrat.hpp"

class Form
{
	private:
		std::string const	_name;
		bool				_boolean;
		int const			_grade_sign;
		int const			_grade_execute;
	public:
		Form(std::string const &name, int const grade_sign, int const grade_execute);
		Form(/* args */);
		Form(Form const &copy);
		~Form();

		Form				&operator=(Form const &form);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("\e[1;92mGrade Too High Exception\e[0m");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("\e[1;92mGrade Too Low Exception\e[0m");
				}
		};

		std::string			getName() const;
		bool				getBoolean() const;
		int					getGradeSign() const;
		int					getGradeExecute() const;

		void				beSign(Bureacrat const &bu);
};

std::ostream				&operator<<(std::ostream &output, Form const &fo);

Form::Form(std::string const &name, int const grade_sign, int const grade_execute)
	: _name(name), _grade_sign(grade_sign), _grade_execute(grade_execute)
{
	if (grade_sign < 1 || grade_execute < 1)
		throw Form::GradeTooHighException();
	if (grade_sign > 150 || grade_execute > 150)
		throw Form::GradeTooLowException();
	this->_boolean = false;
}

Form::Form(Form const &copy)
	: _name(copy._name), _grade_sign(copy._grade_sign),
	_grade_execute(copy._grade_execute)
{
	if (copy._grade_sign < 1 || copy._grade_execute < 1)
		throw Form::GradeTooHighException();
	if (copy._grade_sign > 150 || copy._grade_execute > 150)
		throw Form::GradeTooLowException();
	this->_boolean = copy._boolean;
}

Form::~Form()
{
}

Form				&Form::operator=(Form const &form)
{
	if (this != &form)
		*this = form;
	return *this;
}

std::string			Form::getName() const
{
	return this->_name;
}

bool				Form::getBoolean() const
{
	return this->_boolean;
}

int					Form::getGradeSign() const
{
	return this->_grade_sign;
}

int					Form::getGradeExecute() const
{
	return this->_grade_execute;
}
/*
void				Form::beSign(Bureacrat const &bu)
{

}
*/
std::ostream				&operator<<(std::ostream &output, Form const &fo)
{
	output << "\e[1;36m" << fo.getName();
	output << ": will sign only at a grade of ";
	output << fo.getGradeSign();
	output << ", and will be executed only at a grade of ";
	output << fo.getGradeSign() << "!>\e[0m" << std::endl;
	return output;
}

#endif
