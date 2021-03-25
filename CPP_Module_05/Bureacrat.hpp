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

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade Too High Exception");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade Too Low Exception");
				}
		};

		std::string			getName() const;
		int					getGrade() const;

		void				gradeMinus();
		void				gradePlus();
};

std::ostream				&operator<<(std::ostream &output, Bureacrat const &bu);

#endif
