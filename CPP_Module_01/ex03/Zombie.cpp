#include "Zombie.hpp"

Zombie::Zombie()
{
	std::srand(std::clock());
	int	len = 3 + std::rand() % 5;
	this->_name = this->random_name(len);
	this->_type = "zombie";
}

Zombie::~Zombie()
{
}

void	Zombie::announce()
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}

std::string	Zombie::random_name(int num)
{
	char		consonants[20] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'z'};
	char		vowels[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
	std::string	name = "";
	int			random;

	std::srand(std::clock());
	random = std::rand() % 19;
	name += std::toupper(consonants[random]);
	for (int i = 0; i < num; i += 2)
	{
		random = std::rand() % 5;
		name += vowels[random];
		random = std::rand() % 19;
		name += consonants[random];
	}
	return name;
}
