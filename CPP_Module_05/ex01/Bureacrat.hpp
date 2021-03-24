#ifndef BUREACRAT_HPP
# define BUREACRAT_HPP

#include <iostream>
#include "Form.hpp"

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

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("\e[1;91mGrade Too High Exception\e[0m");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("\e[1;91mGrade Too Low Exception\e[0m");
				}
		};

		std::string			getName() const;
		int					getGrade() const;

		void				gradeMinus();
		void				gradePlus();

		void				signForm(Form const &fo);
};

std::ostream				&operator<<(std::ostream &output, Bureacrat const &bu);

#endif
