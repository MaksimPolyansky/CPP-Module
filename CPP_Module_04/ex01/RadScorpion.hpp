#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion(/* args */);
		RadScorpion(RadScorpion const &copy);
		virtual ~RadScorpion();

		RadScorpion		&operator=(RadScorpion const &ra);
};

#endif
