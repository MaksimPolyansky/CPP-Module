#include <iostream>

int		main(int ac, char **av)
{
	char	c;

	if (ac < 2)
		std::cout << "\x1b[31;1m* LOUD AND UNBEARABLE FEEDBACK NOISE *\x1b[0m";
	else
	{
		for (int i = 1; i < ac; i++)
		{
			std::string line(av[i]);
			size_t len = line.length();
			for (size_t k = 0; k < len; k++)
			{
				if (line[k] >= 97 && line[k] <= 122)
				{
					c = line[k] - 32;
					std::cout << c;
				}
				else
					std::cout << line[k];
			}
		}
	}
	std::cout << std::endl;
	return (0);
}
