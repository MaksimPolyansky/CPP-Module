#ifndef MATERISSOURCE_HPP
# define MATERISSOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria		*_materia[4];
	public:
		MateriaSource(/* args */);
		MateriaSource(MateriaSource const &copy);
		virtual ~MateriaSource();

		MateriaSource	&operator=(MateriaSource const &ma);

		void			learnMateria(AMateria*am);
		AMateria*		createMateria(std::string const & type);
};

#endif
