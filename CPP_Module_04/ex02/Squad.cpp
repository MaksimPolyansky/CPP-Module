#include "Squad.hpp"

Squad::Squad(/* args */)
{
	this->_count = 0;
	this->_units = 0;
	this->_unit = NULL;
}

Squad::Squad(Squad const &copy)
{
	this->_count = copy._count;
	this->_units = copy._units;
	if (copy._unit)
	{
		this->_unit = new ISpaceMarine*[this->_count];
		for (int i = 0; i < this->_count; i++)
		{
			this->_unit[i] = copy._unit[i];
		}
	}
	else
		this->_unit = NULL;
}

Squad::~Squad()
{
	if (this->_unit)
	{
		for (int i = 0; i < this->_count; i++)
		{
			delete this->_unit[i];
		}
		delete[] this->_unit;
	}
}

Squad			&Squad::operator=(Squad const &sq)
{
	if (this != &sq)
	{
		this->_count = sq._count;
		this->_units = sq._units;
		if (this->_count != 0)
		{
			if (this->_unit)
			{
				for (int i = 0; i < this->_count; i++)
				{
					delete this->_unit[i];
				}
				delete[] this->_unit;
			}
			if (sq._unit)
			{
				this->_unit = new ISpaceMarine*[this->_count];
				for (int i = 0; i < this->_count; i++)
				{
					this->_unit[i] = sq._unit[i];
				}
			}
		}
		else
			this->_unit = NULL;
	}
	return *this;
}

int				Squad::getCount() const
{
	return this->_count;
}

ISpaceMarine*	Squad::getUnit(int unit) const
{
	if (unit >= 0 && this->_count != 0 && unit < this->getCount())
		return this->_unit[unit];
	return NULL;
}

int				Squad::push(ISpaceMarine *ism)
{
	if (!ism)
		return this->_count;
	ISpaceMarine	**cash;
	cash = new ISpaceMarine*[++this->_count];
	int	i = 0;
	while (i < this->_count - 1)
	{
		cash[i] = this->_unit[i];
		i++;
	}
	cash[i] = ism;
	delete[] this->_unit;
	this->_unit = cash;
	return this->_count;
}
