#include "Array.hpp"

template <typename T>
Array<T>::Array(/* args */) : _num(0)
{
	this->_arr = NULL;
}

template <typename T>
Array<T>::Array(unsigned int &num) : _num(num)
{
	this->_arr = new T[num];
}

template <typename T>
Array<T>::Array(Array const &copy)
{
	if (this->_arr != NULL)
		delete [] this->_arr;
	this->_arr = new T[copy._num];
	for (size_t i = 0; i < copy._num; i++)
	{
		this->_arr[i] = copy._arr[i];
	}
	this->_num = copy._num;
}

template <typename T>
Array<T>::~Array()
{
	if (this->_arr != NULL)
		delete [] this->_arr;
	this->_arr = NULL;
}

template <typename T>
const char* Array<T>::BadIndex::what() const throw()
{
	return ("\e[1;92mU give me bad index!\e[0m");
}

template <typename T>
Array<T>	&Array<T>::operator=(Array const &ar)
{
	if (this != &ar)
	{
		if (this->_arr != NULL)
			delete [] this->_arr;
		this->_arr = new T[ar._num];
		for (size_t i = 0; i < ar._num; i++)
		{
			this->_arr[i] = ar._arr[i];
		}
		this->_num = ar._num;
	}
	return *this;
}

template <typename T>
int			&Array<T>::operator[](int const index)
{
	if (index >= 0 && index < this->_num)
		return this->_arr[index];
	else
		throw Array::BadIndex();
}

template <typename T>
unsigned int	Array<T>::size()
{
	return this->_num;
}

int		main(void)
{

	return 0;
}
