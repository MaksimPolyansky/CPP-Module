#ifndef IMATERISSOURCE_HPP
# define IMATERISSOURCE_HPP

#include <iostream>
class AMateria;

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void		learnMateria(AMateria*) = 0;
		virtual AMateria*	createMateria(std::string const & type) = 0;
};

#endif
