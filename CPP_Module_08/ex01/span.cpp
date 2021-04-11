#include "span.hpp"

Span::Span(/* args */) : _N(0)
{
}

Span::Span(unsigned int n) : _N(n)
{
}

Span::Span(Span const &copy)
{
	*this = copy;
}

Span::~Span()
{
}

Span	&Span::operator=(Span const &sp)
{
	if (this != &sp)
	{
		this->_myVector = sp._myVector;
		this->_N = sp._N;
	}
	return (*this);
}

void	Span::addNumber(int num)
{
	if (this->_myVector.size() != this->_N)
		this->_myVector.push_back(num);
	else
		throw std::string("Vector is full!");
}

void	Span::addNumber(std::vector<int> copy)
{
	if (this->_myVector.size() == this->_N)
		throw std::string("Vector is full!");
	std::vector<int>::iterator  it;
    it = copy.begin();
    for (size_t i = this->_myVector.size(); i < this->_N && it != copy.end(); i++)
    {
        this->_myVector.push_back(*it);
        it++;
    }
}

int		Span::shortestSpan()
{
	if (this->_myVector.size() < 2)
		throw std::string("Few arguments in Vector!");
	std::sort(this->_myVector.begin(), this->_myVector.end());
	std::vector<int>::iterator i = this->_myVector.begin();
	i++;
	int		shortes = std::abs(*i - *(i - 1));
	for (; i != this->_myVector.end(); i++)
	{
		if (std::abs(*i - *(i - 1)) < shortes)
			shortes = std::abs(*i - *(i - 1));
	}
	return shortes;
}

int		Span::longestSpan()
{
	if (this->_myVector.size() < 2)
		throw std::string("Few arguments in Vector!");
	std::vector<int>::iterator mini = std::min_element(this->_myVector.begin(), this->_myVector.end());
	std::vector<int>::iterator maxi = std::max_element(this->_myVector.begin(), this->_myVector.end());
	return (std::abs(*maxi - *mini));
}

void	Span::print()
{
	std::vector<int>::iterator	i;
	for (i = this->_myVector.begin(); i < this->_myVector.end(); i++)
	{
		std::cout << *i << std::endl;
	}
}
