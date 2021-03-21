#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(/* args */);
		Cure(Cure const &copy);
		virtual ~Cure();

		Cure		&operator=(Cure const &cu);

		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif
