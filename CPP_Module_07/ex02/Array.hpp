#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		unsigned int	_num;
		T				*_arr;
	public:
		Array(/* args */);
		Array(unsigned int num);
		Array(Array const &copy);
		~Array();

		class BadIndex : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		Array		&operator=(Array const &copy);
		T			&operator[](unsigned int const index);

		unsigned int	size();
};

#endif
