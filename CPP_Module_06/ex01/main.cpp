#include <iostream>
#include <ctime>

typedef struct	Data
{
    std::string	line1;
    int			num;
    std::string	line2;
};

void			*serialize(void)
{
	char		*line = new char[sizeof(std::string) * 2 + sizeof(int)];

	size_t		i = 0;
	for (; i < sizeof(std::string); i++)
	{
		*reinterpret_cast<std::string*>(line + i) = 97 + std::rand() % 26;
	}
	*reinterpret_cast<int*>(line + i++) = std::rand();
	for (; i < sizeof(std::string); i++)
	{
		*reinterpret_cast<std::string*>(line + i) = 97 + std::rand() % 26;
	}
	return reinterpret_cast<void*>(line);
}

Data			*deserialize(void *raw)
{
	Data		*data = new Data;
}

int				main()
{
	std::srand(std::time(NULL));

    return 0;
}