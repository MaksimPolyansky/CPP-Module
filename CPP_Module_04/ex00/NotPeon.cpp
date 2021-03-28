#include "NotPeon.hpp"

NotPeon::NotPeon(std::string name) : Victim(name)
{
	std::cout << "\e[0;96mBrya Krya" << std::endl;
}

NotPeon::NotPeon(NotPeon const &copy) : Victim(copy)
{
	std::cout << "\e[0;96mBrya Krya" << std::endl;
}

NotPeon::~NotPeon()
{
	std::cout << "\e[0;96m........" << std::endl;
}

NotPeon		&NotPeon::operator=(NotPeon const &no)
{
	if (this != &no)
		Victim::operator=(no);
	return *this;
}

void		NotPeon::getPolymorphed() const
{
	std::cout << "\e[0;96m" << this->_name << " has been turned into a Crazy Frog!" << std::endl;
}

std::ostream		&operator<<(std::ostream &output, NotPeon const &no)
{
	output << "\e[0;96mI'm " << no.getName() << " and I like Crazy Frog!" << std::endl;
	return output;
}
