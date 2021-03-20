#ifndef VICTIM_HPP
# define VICTIM_HPP

#include "iostream"

class Victim
{
	protected:
		std::string		_name;
	public:
		Victim();
		Victim(std::string name);
		Victim(Victim const &copy);
		virtual ~Victim();

		Victim			&operator=(Victim const &vi);

		std::string		getName() const;

		virtual void	getPolymorphed() const;
};

std::ostream			&operator<<(std::ostream &output, Victim const &vi);

#endif
