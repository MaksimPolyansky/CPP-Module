#include <iostream>
#include <string>

int		main()
{
	std::string	line = "HI THIS IS BRAIN";
	std::string	*str1 = &line;
	std::string	&str2 = line;

	std::cout << "\x1b[31;1mString!\x1b[0m" << std::endl;
	std::cout << line << std::endl;
	std::cout << "\x1b[32;1mPointer to it!\x1b[0m" << std::endl;
	std::cout << *str1 << std::endl;
	std::cout << "\x1b[33;1mReference to it!\x1b[0m" << std::endl;
	std::cout << str2 << std::endl;

	return 0;
}
