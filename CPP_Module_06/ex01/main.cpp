#include <iostream>
#include <ctime>

struct	Data
{
    char	*line1;
    int		num;
    char	*line2;
};

void			*serialize(void)
{
	char		*line = new char[sizeof(char*) * 2 + sizeof(int)];

	for (size_t k = 0; k < (sizeof(char*) * 2 + sizeof(int)); k++)
	{
		line[k] = 0;
	}
	char		line1[16];
	for (size_t i = 0; i < 16; i++)
	{
		line1[i] = (char)(97 + std::rand() % 26);
	}
	std::cout << line1 << std::endl;
	*reinterpret_cast<char**>(line) = line1;
	std::cout << *reinterpret_cast<char**>(line) << std::endl;
	*reinterpret_cast<int*>(line + sizeof(char*)) = std::rand();
	std::cout << *reinterpret_cast<int*>(line + sizeof(char*)) << std::endl;
	char		line2[16];
	for (size_t i = 0; i < 16; i++)
	{
		line2[i] = 97 + std::rand() % 26;
	}
	*reinterpret_cast<char**>(line + sizeof(char*) + sizeof(int)) = line2;
	std::cout << *reinterpret_cast<char**>(line + sizeof(char*) + sizeof(int)) << std::endl;
	return static_cast<void*>(line);
}

Data			*deserialize(void *raw)
{
	Data		*data = new Data;

	data->line1 = *reinterpret_cast<char**>(raw);
	data->num = *reinterpret_cast<int*>(static_cast<char*>(raw) + sizeof(char*));
	data->line2 = *reinterpret_cast<char**>(static_cast<char*>(raw) + sizeof(char*) + sizeof(int));

	return data;
}

int				main()
{
	std::srand(std::time(NULL));

	void	*pointer = serialize();
	Data	*data = deserialize(pointer);

	std::cout << data->line1 << std::endl;
	std::cout << data->num << std::endl;
	std::cout << data->line2 << std::endl;

	delete	(char*)pointer;
	delete	data;

    return 0;
}