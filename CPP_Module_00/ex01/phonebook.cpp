#include <iostream>
#include <string>

void	my_welcom()
{
	std::cout << "Welcom my friends!" << std::endl;
	std::cout << "It's your phonebook!" << std::endl;
	std::cout << "I can:" << std::endl;
	std::cout << "ADD your new friend;" << std::endl;
	std::cout << "SEARCH in your phonebook;" << std::endl;
	std::cout << "EXIT the program." << std::endl;
}

int		main()
{
	my_welcom();
	//while (1)
	//{
		std::cout << "What do u want?" << std::endl;
	//}
	return 0;
}
