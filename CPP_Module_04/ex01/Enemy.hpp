#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
	protected:
		int				_hit_points;
		std::string		_type;
	public:
		Enemy();
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const &en);
		virtual ~Enemy();

		Enemy			&operator=(Enemy const &en);

		std::string		getType() const;
		int				getHP() const;

		virtual void	takeDamage(int damage);
};

Enemy::Enemy(int hp, std::string const &type)
{
	this->_hit_points = hp;
	this->_type = type;
}

Enemy::Enemy(Enemy const &en)
{
	this->_hit_points = en._hit_points;
	this->_type = en._type;
}

Enemy::~Enemy()
{}

Enemy			&Enemy::operator=(Enemy const &en)
{
	if (this != &en)
	{
		this->_hit_points = en._hit_points;
		this->_type = en._type;
	}
}

std::string		Enemy::getType() const
{
	return this->_type;
}

int				Enemy::getHP() const
{
	return this->_hit_points;
}

void			Enemy::takeDamage(int damage)
{}

#endif
