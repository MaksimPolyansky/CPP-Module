#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_fixed_point;
		static const int	_fractional_bits = 8;
	public:
		Fixed(/* args */);
		Fixed(int const num);
		Fixed(float const num);
		Fixed(Fixed const &copy);
		~Fixed();

		Fixed	&operator=(Fixed const &fixed);

		void	setRawBits(int const raw);
		int		getRawBits(void) const;
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &output, Fixed const &fixed);

#endif
