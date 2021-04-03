#include "Array.hpp"

template <typename T>
Array<T>::Array(/* args */) : _num(0)
{
	this->_arr = NULL;
}

template <typename T>
Array<T>::Array(unsigned int num) : _num(num)
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
T			&Array<T>::operator[](unsigned int const index)
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
	std::srand(std::time(NULL));
	Array<int>			arrI(21);
	Array<std::string>	arrS(42);
	Array<double>		arrD(7);
	std::cout << "\e[1;37mFIRST!\e[0m" << std::endl;
	try
	{
		for (size_t i = 0; i < 8; i++)
		{
			arrD[i] = std::rand() % 7 + 0.1;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	for (size_t i = 0; i < 7; i++)
	{
		std::cout << arrD[i] << std::endl;
	}
	std::cout << "\e[1;37mSECOND!\e[0m" << std::endl;
	for (size_t i = 0; i < 21; i++)
	{
		arrI[i] = std::rand() % 21;
	}
	for (size_t i = 0; i < 21; i++)
	{
		std::cout << arrI[i] << std::endl;
	}
	std::cout << "\e[1;37mTHIRD!\e[0m" << std::endl;
	for (size_t i = 0; i < 42; i++)
	{
		arrS[i] = "LINE";
		arrS[i] += (32 + std::rand() % 21);
	}
	for (size_t i = 0; i < 42; i++)
	{
		std::cout << arrS[i] << '\t';
		if (i != 0 && i % 5 == 0)
			std::cout << std::endl;
	}
	std::cout << std::endl;

	return 0;
}
