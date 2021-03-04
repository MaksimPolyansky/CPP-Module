#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	private:
		std::string	line;
	public:
		Brain(/* args */);
		~Brain();
		std::string	identify();
};

Brain::Brain(/* args */)
{
}

Brain::~Brain()
{
}

#endif
