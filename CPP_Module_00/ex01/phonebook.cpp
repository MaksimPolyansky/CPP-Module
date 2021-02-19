#include <iostream>
#include <string>

class My_book
{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_login;
		std::string	_postal_address;
		std::string	_email_address;
		std::string	_phone_number;
		std::string	_birthday_date;
		std::string	_favorite_meal;
		std::string	_underwear_color;
		std::string	_darkest_secret;
		size_t		count;
	public:
		My_book();
		~My_book();
		void	add_in_mybook();
		void	search_in_mybook();
};

My_book::My_book()
{
	this->count = 0;
	return;
}

My_book::~My_book()
{
	std::cout << "\x1b[31;1mNoooooooooooooooooooooooooooooooooooooooooooooooo!\x1b[0m" << std::endl;
	std::cout << "\x1b[32;1mWhy?\x1b[0m" << std::endl;
	std::cout << "\x1b[33;1mGood bye...\x1b[0m" << std::endl;
	return;
}


void	My_book::search_in_mybook()
{
	if (this->count == 0)
	{
		std::cout << "\x1b[31;1mI'm so sorry...\x1b[0m" << std::endl;
		std::cout << "\x1b[32;1mYour phonebook is empty...\x1b[0m" << std::endl;
		std::cout << "\x1b[33;1mBut u can ADD ur first friend!\x1b[0m" << std::endl;
	}
}

void	My_book::add_in_mybook()
{
	if (this->count == 8)
	{
		std::cout << "\x1b[31;1mYour phonebook is full!\x1b[0m" << std::endl;
		std::cout << "\x1b[32;1mRestart the program!\x1b[0m" << std::endl;
		std::cout << "\x1b[33;1mIf u want to create ur new phonebook!\x1b[0m" << std::endl;
	}
	else
	{
		this->count++;
	}
}

void	my_welcom()
{
	std::cout << "\x1b[31;1mWelcom my friends!\x1b[0m" << std::endl;
	std::cout << "\x1b[32;1mIt's your phonebook!\x1b[0m" << std::endl;
	std::cout << "\x1b[33;1mI can:\x1b[0m" << std::endl;
	std::cout << "\x1b[31;1mADD your new friend;\x1b[0m" << std::endl;
	std::cout << "\x1b[32;1mSEARCH in your phonebook;\x1b[0m" << std::endl;
	std::cout << "\x1b[33;1mEXIT the program.\x1b[0m" << std::endl;
}

int		main()
{
	std::string	line;
	My_book		my_book;

	my_welcom();
	while (1)
	{
		std::cout << "\x1b[95;1mWhat do u want?(-; -> \x1b[0m";
		std::getline(std::cin, line);
		if ("EXIT" == line)
			break;
		else if ("ADD" == line)
			my_book.add_in_mybook();
		else if ("SEARCH" == line)
			my_book.search_in_mybook();
	}
	return 0;
}
