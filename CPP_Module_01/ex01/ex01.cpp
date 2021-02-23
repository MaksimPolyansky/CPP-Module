#include <iostream>
#include <string>

void memoryLeak()
{
	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

void memoryLeak1()
{
	std::string panther = std::string("String panther");
	std::cout << panther << std::endl;
}

int	main()
{
	memoryLeak();
	memoryLeak1();
	return 0;
}
