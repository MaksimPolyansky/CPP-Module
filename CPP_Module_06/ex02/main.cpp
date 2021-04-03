#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	Base	base;

	switch (std::rand() % 3)
	{
		case 0:
			std::cout << "\e[1;96mCreate A class!\e[0m" << std::endl;
			return new A;
			break;
		case 1:
			std::cout << "\e[1;96mCreate B class!\e[0m" << std::endl;
			return new B;
			break;
		case 2:
			std::cout << "\e[1;96mCreate C class!\e[0m" << std::endl;
			return new C;
			break;
		default:
			break;
	}
}

void	identify_from_pointer(Base *p);
void	identify_from_reference(Base &p);

int		main()
{
	std::srand(std::time(NULL));
	return 0;
}
