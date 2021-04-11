#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_myVector;
	public:
		Span(/* args */);
		Span(unsigned int n);
		Span(Span const &copy);
		~Span();

		Span	&operator=(Span const &sp);

		void	addNumber(int num);
		void	addNumber(std::vector<int> copy);
		int		shortestSpan();
		int		longestSpan();
		void	print();
};

#endif