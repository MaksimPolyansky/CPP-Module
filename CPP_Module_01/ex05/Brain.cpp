#include "Brain.hpp"

Brain::Brain()
{
	this->_something = "I'm doing something!";
}

Brain::~Brain()
{
}

std::string	Brain::identify() const
{
	std::stringstream	str;
	str << this;
	std::string			res;
	str >> res;
	return res;
}
