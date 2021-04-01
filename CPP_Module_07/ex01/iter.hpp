#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *array, size_t array_lenght, void (*func)(T const &))
{
	for (size_t i = 0; i < array_lenght; i++)
	{
		func(array[i]);
	}
}

// class Awesome
// {
// 	public:
// 		Awesome(void) : _n(42) { return; }
// 		int		get(void) const { return this->_n; }
// 	private:
// 		int		_n;
// };

// std::ostream	&operator<<(std::ostream &o, Awesome const &rhs) { o << rhs.get(); return o; }

// template<typename T>
// void print( T const & x ) { std::cout << x << std::endl; return; }

#endif
