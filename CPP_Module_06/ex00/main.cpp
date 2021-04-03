#include <iostream>
#include <limits>

int		checkArg(std::string const &arg)
{
	if (arg == "-inff" || arg == "+inff" || arg == "nanf" || arg == "-inf" || arg == "+inf" || arg == "nan")
		return 0;
	size_t		index = 0;
	(arg[0] == '-' && arg[index + 1] > 47 && arg[index + 1] < 58) ? index = 1 : index = 0;
	while (index < arg.size() && arg[index] > 47 && arg[index] < 58)
		index++;
	if (((index > 0 && arg[0] != '-') || (index > 1 && arg[0] == '-')) && index < arg.size() && arg[index + 1] > 47 && arg[index + 1] < 58 && arg[index] == '.')
	{
		while (index < arg.size() && arg[index] > 47 && arg[index] < 58)
			index++;
		if (index < arg.size() && arg[index] == 'f')
			index++;
		if (index == arg.size())
			return 0;
	}
	if (index == arg.size())
		return 0;
	return 1;
}

void	toChar(double value)
{
	char	sym = static_cast<char>(value);
	std::cout << "\e[1;96mChar: ";
	if (value >= 48 && value <= 57)
		std::cout << sym << "\e[0m" << std::endl;
	else if (value < 127 && value >= 32)
		std::cout << "\'" << sym << "\'\e[0m" << std::endl;
	else if ((value < 32 && value >= 0) || value == 127)
		std::cout << "Non displayable\e[0m" << std::endl;
	else
		std::cout << "impossible\e[0m" << std::endl;
}

void	toInt(double value)
{
	if (value < INT_MAX && value > INT_MIN)
	{
		int		num = static_cast<int>(value);
		std::cout << "\e[1;96mInt: " << num << "\e[0m" << std::endl;
	}
	else
		std::cout << "\e[1;96mInt: impossible\e[0m" << std::endl;
}

void	toFloat(double value)
{
	float	num = static_cast<float>(value);
	if (num - static_cast<int>(value) == 0)
		std::cout << "\e[1;96mFloat: " << num << ".0f\e[0m" << std::endl;
	else
		std::cout << "\e[1;96mFloat: " << num << "f\e[0m" << std::endl;
}

void	toDouble(double value)
{
	if (value - static_cast<int>(value) == 0)
		std::cout << "\e[1;96mDouble: " << value << ".0\e[0m" << std::endl;
	else
		std::cout << "\e[1;96mDouble: " << value << "\e[0m" << std::endl;
}

int		parse(char *av)
{
	if (checkArg(av))
		return 1;
	double		value = std::atof(av);
	toChar(value);
	toInt(value);
	toFloat(value);
	toDouble(value);
	return 0;
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		if (parse(av[1]))
		{
			std::cout << "\e[1;96mBad arguments\e[0m" << std::endl;
			return 1;
		}
	}
	else
	{
		std::cout << "\e[1;96mBad arguments\e[0m" << std::endl;
		return 1;
	}
	return 0;
}
