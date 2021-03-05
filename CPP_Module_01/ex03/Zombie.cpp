#include "Zombie.hpp"

Zombie::Zombie()
{
	std::srand(std::time(NULL));
	int	len = 3 + std::rand() % 10;
	this->_name = this->random_name(len);
	this->_type = "zombie";
	std::chrono::seconds dura(1);
	std::this_thread::sleep_for(dura);
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
	int			count;

	std::srand(std::time(NULL));
	count = 0;
	for (int i = 0; i < num; i++)
	{
		random = std::rand() % 2;
		if (random < 2 && count < 2)
		{
			name += consonants[rand() % 19];
			count++;
		}
		else
		{
			name += vowels[rand() % 5];
			count = 0;
		}
	}
	return name;
}
