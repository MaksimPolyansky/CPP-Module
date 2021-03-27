#include "Form.hpp"

Form::Form(std::string const &name, int const grade_sign, int const grade_execute)
	: _name(name), _grade_sign(grade_sign), _grade_execute(grade_execute)
{
	if (grade_sign < 1 || grade_execute < 1)
		throw Form::GradeTooHighException();
	if (grade_sign > 150 || grade_execute > 150)
		throw Form::GradeTooLowException();
	std::cout << "\e[1;36mLet's start discussing!\e[0m" << std::endl;
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
	std::cout << "\e[1;36mLet's start discussing!\e[0m" << std::endl;
	this->_boolean = copy._boolean;
}

Form::~Form()
{
	std::cout << "\e[1;36mWe will agree soon!\e[0m" << std::endl;
}

Form				&Form::operator=(Form const &form)
{
	if (this != &form)
	{
		if (form._grade_sign < 1 || form._grade_execute < 1)
			throw Form::GradeTooHighException();
		if (form._grade_sign > 150 || form._grade_execute > 150)
			throw Form::GradeTooLowException();
		this->_boolean = form._boolean;
	}
	return *this;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("\e[1;92mForm: Grade Too High Exception\e[0m");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("\e[1;92mForm: Grade Too Low Exception\e[0m");
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

void				Form::beSign(Bureacrat const &bu)
{
	if (bu.getGrade() > this->getGradeSign())
		throw Form::GradeTooLowException();
	else
		this->_boolean = true;
}

void				Form::execute(Bureacrat const &executor) const
{
	if (this->getBoolean())
	{
		if (this->getGradeExecute() >= executor.getGrade())
			this->executed();
		else
			throw Form::GradeTooLowException();
	}
	else
		throw std::string("\e[1;33mYour " + this->getName() + " was not signed!\e[0m");
}

std::ostream		&operator<<(std::ostream &output, Form const &fo)
{
	output << "\e[1;36m" << fo.getName();
	output << ": will sign only at a grade of ";
	output << fo.getGradeSign();
	output << ", and will be executed only at a grade of ";
	output << fo.getGradeExecute() << "!\e[0m" << std::endl;
	return output;
}
