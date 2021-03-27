#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureacrat.hpp"
class Bureacrat;

class Form
{
	protected:
		std::string const	_name;
		bool				_boolean;
		int const			_grade_sign;
		int const			_grade_execute;
	public:
		Form(/* args */);
		Form(std::string const &name, int const grade_sign, int const grade_execute);
		Form(Form const &copy);
		virtual ~Form();

		Form				&operator=(Form const &form);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("\e[1;92mForm: Grade Too High Exception\e[0m");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("\e[1;92mForm: Grade Too Low Exception\e[0m");
				}
		};

		std::string			getName() const;
		bool				getBoolean() const;
		int					getGradeSign() const;
		int					getGradeExecute() const;

		void				beSign(Bureacrat const &bu);

		void				execute(Bureacrat const &executor) const;
};

std::ostream				&operator<<(std::ostream &output, Form const &fo);

#endif
