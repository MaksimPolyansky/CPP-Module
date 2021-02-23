#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

class	Pony
{
	private:
		std::string	_name;
	public:
		Pony(std::string name);
		~Pony();
		void	pony_live();
};

void	ponyOnTheHeap();
void	ponyOnTheStack();

#endif
