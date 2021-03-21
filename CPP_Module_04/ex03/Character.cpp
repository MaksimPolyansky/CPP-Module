#include "Character.hpp"

Character::Character(std::string name)
{
	this->_name = name;
	for (size_t i = 0; i < 4; i++)
		this->_materis[i] = NULL;
}

Character::Character(Character const &copy)
{
	this->_name = copy._name;
	for (size_t i = 0; i < 4; i++)
		this->_materis[i] = copy._materis[i];
}

Character::~Character()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_materis[i])
			delete this->_materis[i];
	}
}

Character			&Character::operator=(Character const &ch)
{
	if (this != &ch)
	{
		this->_name = ch._name;
		for (size_t i = 0; i < 4; i++)
		{
			if (ch._materis[i])
				this->_materis[i] = ch._materis[i];
			else
				this->_materis[i] = NULL;
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
