#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream>

class Brain
{
	private:
		std::string	_something;
	public:
		Brain();
		~Brain();
		std::string	identify() const;
};

#endif
