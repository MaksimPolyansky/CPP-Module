#include "iter.hpp"

void	print_string(std::string const &str)
{
	std::cout << "\e[1;36m<" << str << ">\e[0m" << std::endl;
}

void	print_sum(double num)
{
	std::cout << num + 42.2 << std::endl;
}

int		main(void)
{
	std::cout << std::endl << "\e[1;92m___FIRST TEST___\e[0m" << std::endl;
	std::string	line[5] = {"first", "second", "third", "fourth", "fifth"};
	iter(line, 5, print_string);
	std::cout << std::endl;

	// std::cout << std::endl << "\e[1;92m___CHECKLIST TEST___\e[0m" << std::endl;
	// int	tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	// Awesome tab2[5];
	// iter(tab, 5, print);
	// iter(tab2, 5, print);

	return 0;
}
