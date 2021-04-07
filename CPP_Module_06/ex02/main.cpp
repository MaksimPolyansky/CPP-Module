#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

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
	return NULL;
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "\e[1;96mA: I'm pointer!\e[0m" << std::endl;
	if (dynamic_cast<B*>(p) != NULL)
		std::cout << "\e[1;96mB: I'm pointer!\e[0m" << std::endl;
	if (dynamic_cast<C*>(p) != NULL)
		std::cout << "\e[1;96mC: I'm pointer!\e[0m" << std::endl;
}

void	identify_from_reference(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "\e[1;96mA: I'm reference! !\e[0m" << std::endl;
	}
	catch(const std::exception& e)
	{}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "\e[1;96mA: I'm reference! !\e[0m" << std::endl;
	}
	catch(const std::exception& e)
	{}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "\e[1;96mA: I'm reference! !\e[0m" << std::endl;
	}
	catch(const std::exception& e)
	{}
}

int		main()
{
	std::srand(std::time(NULL));

	std::cout << "\e[1;93mCreate random Base!\e[0m" << std::endl;
	Base	*base = generate();

	std::cout << "\e[1;93mCheck pointer!\e[0m" << std::endl;
	identify_from_pointer(base);

	std::cout << "\e[1;93mCheck reference\e[0m" << std::endl;
	identify_from_reference(*base);

	return 0;
}
