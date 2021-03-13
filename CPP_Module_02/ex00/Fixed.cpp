#include "Fixed.hpp"

Fixed::Fixed(/* args */)
{
	this->_fixed_point = 0;
	std::cout << "\e[1;32mDefault constructor called\e[0;37m" << std::endl;
}

Fixed::Fixed(Fixed const &fixed)
{
	std::cout << "\e[1;33mCopy constructor called\e[0;37m" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "\e[1;31mAssignation operator called\e[0;37m" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &fixed)
{
	std::cout << "\e[1;34mCopy constructor called\e[0;37m" << std::endl;
	return *this;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_point = raw;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "\e[1;36mgetRawBits member function called\e[0;37m" << std::endl;
	return this->_fixed_point;
}
