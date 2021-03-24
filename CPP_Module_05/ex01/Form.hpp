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
	this->_boolean = false;
}

Form::Form(Form const &copy)
	: _name(copy._name), _grade_sign(copy._grade_sign),
	_grade_execute(copy._grade_execute)
{
	this->_boolean = copy._boolean;
}

Form::~Form()
{
}

Form				&Form::operator=(Form const &form)
{
	if (this != &form)
		this->_boolean = copy._boolean;
	return *this;
}

std::string			Form::getName() const
{}

bool				Form::getBoolean() const
{}

int					Form::getGradeSign() const
{}

int					Form::getGradeExecute() const
{}

std::ostream				&operator<<(std::ostream &output, Form const &fo)
{
	output << "\e[1;36m<" << fo.getName() << "> has grade <" << fo.getGrade() << ">\e[0m" << std::endl;
	return output;
}

#endif
