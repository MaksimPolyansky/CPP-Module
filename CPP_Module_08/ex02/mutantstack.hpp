#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <stack>

template <typename T>
class Mutantstack : public std::stack<T>
{
	public:
		Mutantstack(/* args */) : std::stack<int>(){};
		Mutantstack(Mutantstack const &copy) : std::stack<int>(copy){};
		virtual ~Mutantstack() {};

		Mutantstack		&operator=(Mutantstack const &mu) {this->c = mu.c; return *this;};
};

#endif