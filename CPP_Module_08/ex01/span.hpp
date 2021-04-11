#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <climits>
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
		~Span();

		void	addNumber(int num);
		int		shortestSpan();
		int		longestSpan();
};

Span::Span(/* args */) : _N(0)
{
}

Span::Span(unsigned int n) : _N(n)
{
}

Span::~Span()
{
}

void	Span::addNumber(int num)
{
	if (this->_myVector.size() != this->_N)
		this->_myVector.push_back(num);
	else
		throw std::string("Vector is full!");
}

int		Span::shortestSpan()
{
	if (this->_myVector.size() < 2)
		throw std::string("Few arguments in Vector!");
	std::sort(this->_myVector.begin(), this->_myVector.end());
	int		shortes = INT_MAX;
	std::vector<int>::iterator i = this->_myVector.begin();
	i++;
	for (; i != this->_myVector.end(); i++)
	{
		if (*i - *(i - 1) < shortes)
			shortes = *i - *(i - 1);
	}
	return shortes;
}

int		Span::longestSpan()
{
	if (this->_myVector.size() < 2)
		throw std::string("Few arguments in Vector!");
	std::vector<int>::iterator mini = std::min_element(this->_myVector.begin(), this->_myVector.end());
	std::vector<int>::iterator maxi = std::max_element(this->_myVector.begin(), this->_myVector.end());
	return (*maxi - *mini);
}

#endif