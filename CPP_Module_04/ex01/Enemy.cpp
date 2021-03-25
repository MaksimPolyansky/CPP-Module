#include "Enemy.hpp"

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
	return *this;
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
{
	if (damage < 0)
		return;
	if (this->_hit_points - damage < 0)
		delete this;
	this->_hit_points -= damage;
}
