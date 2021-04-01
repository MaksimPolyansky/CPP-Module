#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}

template <typename T>
T		&min(T &a, T &b)
{
	if (a == b || a > b)
		return b;
	return a;
}

template <typename T>
T		&max(T &a, T &b)
{
	if (a == b || a < b)
		return b;
	return a;
}

// class Awesome {
// 	public:
// 		Awesome( int n ) : _n( n ) {}
// 		Awesome(Awesome const &copy) : _n(copy._n) {}
// 		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
// 		bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
// 		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
// 		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
// 		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
// 		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
// 		~Awesome() {}
// 		int getN() const {return this->_n;}
// 	private:
// 		int _n;
// };

// std::ostream		&operator<<(std::ostream &output, Awesome const &wh)
// {
// 	output << "\e[1;36m<" << wh.getN() << ">\e[0m";
// 	return output;
// }

#endif
