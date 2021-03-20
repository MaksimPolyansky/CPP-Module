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

#endif
