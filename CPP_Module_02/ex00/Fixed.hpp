#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					_fixed_point;
		static const int	_fractional_bits = 8;
	public:
		Fixed(/* args */);
		Fixed(Fixed const &copy);
		~Fixed();
		Fixed	&operator=(Fixed const &fixed);
		void	setRawBits(int const raw);
		int		getRawBits(void) const;
};

#endif
