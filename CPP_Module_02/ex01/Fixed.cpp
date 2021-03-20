#include "Fixed.hpp"

Fixed::Fixed(/* args */)
{
	this->_fixed_point = 0;
	std::cout << "\e[1;32mDefault constructor called\e[0;37m" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "\e[1;31mAssignation operator called\e[0;37m" << std::endl;
}

Fixed::Fixed(int const num)
{
	this->_fixed_point = num * (1 << this->_fractional_bits);
	std::cout << "\e[1;33mInt constructor called\e[0;37m" << std::endl;
}

Fixed::Fixed(float const num)
{
	this->_fixed_point = roundf(num * (1 << this->_fractional_bits));
	std::cout << "\e[1;33mFloat constructor called\e[0;37m" << std::endl;
}

Fixed::Fixed(Fixed const &fixed)
{
	std::cout << "\e[1;33mCopy constructor called\e[0;37m" << std::endl;
	this->_fixed_point = fixed.getRawBits();
}

Fixed	&Fixed::operator=(Fixed const &fixed)
{
	std::cout << "\e[1;34mAssignation operator called\e[0;37m" << std::endl;
	if (this != &fixed)
		this->_fixed_point = fixed.getRawBits();
	return *this;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_point = raw;
}

int		Fixed::getRawBits(void) const
{
	return this->_fixed_point;
}

float	Fixed::toFloat(void) const
{
	float	f;

	f = (float)this->_fixed_point / (1 << this->_fractional_bits);
	return f;
}

int		Fixed::toInt(void) const
{
	int		i;

	i = (float)this->_fixed_point / (1 << this->_fractional_bits);
	return i;
}

std::ostream	&operator<<(std::ostream &output, Fixed const &fixed)
{
	output << fixed.toFloat();
	return output;
}
