#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant(/* args */);
		SuperMutant(SuperMutant const &copy);
		virtual ~SuperMutant();

		SuperMutant		&operator=(SuperMutant const &su);

		void			takeDamage(int damage);
};

#endif
