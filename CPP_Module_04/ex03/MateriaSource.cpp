#include "MateriaSource.hpp"

MateriaSource::MateriaSource(/* args */)
{
	for (size_t i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	for (size_t i = 0; i < 4; i++)
		this->_materia[i] = copy._materia[i];
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_materia[i])
			this->_materia[i] = NULL;
	}
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &ma)
{
	if (this != &ma)
	{
		for (size_t i = 0; i < 4; i++)
		{
			if (ma._materia[i])
				this->_materia[i] = ma._materia[i];
			else
				this->_materia[i] = NULL;
		}
	}
	return *this;
}

void			MateriaSource::learnMateria(AMateria*am)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_materia[i] == am)
			return;
		else if (this->_materia[i] == NULL)
		{
			this->_materia[i] = am;
			return;
		}
	}
}

AMateria*		MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_materia[i]->getType() == type)
			return this->_materia[i]->clone();
	}
	return NULL;
}
