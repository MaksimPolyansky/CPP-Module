#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <deque>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(/* args */) : std::stack<T>(){};
		MutantStack(MutantStack const &copy) : std::stack<T>(copy){};
		virtual ~MutantStack() {};

		MutantStack		&operator=(MutantStack const &mu) {this->c = mu.c; return *this;};

		typedef typename std::stack<T>::container_type::iterator	iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator	reverse_iterator;

		iterator	begin() {return this->c.begin();};
		iterator	end() {return this->c.end();};
		reverse_iterator	r_begin() {return this->c.rbegin();};
		reverse_iterator	r_end() {return this->c.rend();};
};

#endif
