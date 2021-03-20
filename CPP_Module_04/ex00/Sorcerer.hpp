#ifndef SORCERER_HPP
# define SORCERER_HPP

#include "iostream"
#include "Victim.hpp"

class Sorcerer
{
	private:
		std::string	_name;
		std::string	_tytle;
	public:
		Sorcerer();
		Sorcerer(std::string _name, std::string _tytle);
		Sorcerer(Sorcerer const &copy);
		~Sorcerer();

		Sorcerer	&operator=(Sorcerer const &so);

		std::string	getName() const;
		std::string	getTytle() const;

		void		polymorph(Victim const &vi) const;
};

std::ostream		&operator<<(std::ostream &output, Sorcerer const &so);

#endif
