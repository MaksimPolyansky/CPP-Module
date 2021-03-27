#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <ctime>

class RobotomyRequestForm : public Form
{
	private:
		std::string				_target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &copy);
		~RobotomyRequestForm();

		RobotomyRequestForm		&operator=(RobotomyRequestForm const &ro);

		void		executed() const;
		std::string	getTarget() const;
};

#endif
