#ifndef MEGAMUTANT_HPP
# define MEGAMUTANT_HPP

#include "Enemy.hpp"

class MegaMutant : public Enemy
{
	private:
		/* data */
	public:
		MegaMutant(/* args */);
		MegaMutant(MegaMutant const &copy);
		~MegaMutant();

		MegaMutant		&operator=(MegaMutant const &me);

		void			takeDamage(int damage);
};

#endif
