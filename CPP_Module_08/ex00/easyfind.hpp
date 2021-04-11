#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
typename T::iterator	easyfind(T &container, int find)
{
	if (container.empty())
		throw std::string("Container is empty!");
	typename T::iterator	i;
	i = std::find(container.begin(), container.end(), find);
	if (i == container.end())
		throw std::string("Container has not element!");
	return i;
}

#endif