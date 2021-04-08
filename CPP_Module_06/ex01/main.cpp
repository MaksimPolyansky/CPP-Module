#include <iostream>
#include <ctime>

struct	Data
{
    std::string	line1;
    int			num;
    std::string	line2;
};

void			*serialize(void)
{
	char	*line = new char[sizeof(char*) * 2 + sizeof(int)];

	for (size_t i = 0; i < static_cast<size_t>(sizeof(char*)); i++)
	{
		line[i] = 97 + std::rand() % 26;
	}
	
	int		*num = new int(std::rand());
	char	*num_char = reinterpret_cast<char*>(num);

	for (size_t i = 0; i < static_cast<size_t>(sizeof(int)); i++)
	{
		line[sizeof(char*) + i] = num_char[i];
	}

	delete num;

	for (size_t i = 0; i < static_cast<size_t>(sizeof(char*)); i++)
	{
		line[sizeof(char*) + sizeof(int) + i] = 97 + std::rand() % 26;
	}
	
	return reinterpret_cast<void*>(line);
}

Data			*deserialize(void *raw)
{
	Data		*data = new Data;
	char		*line = reinterpret_cast<char*>(raw);
	char		line1[static_cast<int>(sizeof(char*)) + 1];

	size_t		i;
	for (i = 0; i < static_cast<size_t>(sizeof(char*)); i++)
	{
		line1[i] = line[i];
	}
	line1[i] = '\0';
	data->line1 = line1;
	
	char		num_char[static_cast<int>(sizeof(int)) + 1];

	for (i = 0; i < static_cast<size_t>(sizeof(int)); i++)
	{
		num_char[i] = line[sizeof(char*) + i];
	}
	num_char[i] = '\0';

	int			*num;
	char		line2[static_cast<int>(sizeof(char*)) + 1];

	num = reinterpret_cast<int*>(num_char);
	data->num = *num;
	for (i = 0; i < static_cast<size_t>(sizeof(char*)); i++)
	{
		line2[i] = line[sizeof(char*) + sizeof(int) + i];
	}
	line2[i] = '\0';
	data->line2 = line2;

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
