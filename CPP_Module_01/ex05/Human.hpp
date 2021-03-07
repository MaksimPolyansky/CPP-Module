#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{
	private:
		Brain const	_brain;
	public:
		Human(/* args */);
		~Human();
		Brain const	&getBrain() const;
		std::string	identify() const;
};

#endif
