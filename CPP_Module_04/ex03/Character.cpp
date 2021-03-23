#include "Character.hpp"

Character::Character(std::string name)
{
	this->_name = name;
	this->_materis = new AMateria*[this->_size];
}

Character::Character(Character const &copy)
{
	this->_name = copy._name;
	if (copy._materis)
	{
		this->_materis = new AMateria*[this->_size];
		for (int i = 0; i < this->_size; i++)
		{
			this->_materis[i] = copy._materis[i];
		}
	}
	else
		this->_materis = NULL;
}

Character::~Character()
{
	if (this->_materis)
	{
		for (int i = 0; i < this->_size; i++)
		{
			if (this->_materis[i])
				delete this->_materis[i];
		}
		delete[] this->_materis;
	}
}

Character			&Character::operator=(Character const &ch)
{
	if (this != &ch)
	{
		this->_name = ch._name;
		if (this->_materis)
		{
			delete[] this->_materis;
		}
		if (ch._materis)
		{
			this->_materis = new AMateria*[this->_size];
			for (int i = 0; i < this->_size; i++)
			{
				this->_materis[i] = ch._materis[i];
			}
		}
	}
	return *this;
}

std::string const	&Character::getName() const
{
	return this->_name;
}

void				Character::equip(AMateria* m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_materis[i] == m)
			return;
		else if (this->_materis[i] == NULL)
		{
			this->_materis[i] = m;
			return;
		}
	}
}

void				Character::unequip(int idx)
{
	for (int i = idx; i >= 0 && i < 4; i++)
	{
		if ((i + 1) < 4 && this->_materis[i + 1] == NULL)
		{
			this->_materis[i] = NULL;
			return;
		}
		else if ((i + 1) < 4 && this->_materis[i + 1] != NULL)
			this->_materis[i] = this->_materis[i + 1];
		else
		{
			this->_materis[i] = NULL;
			return;
		}
	}
}

void				Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->_materis[idx] != NULL)
		this->_materis[idx]->use(target);
}
