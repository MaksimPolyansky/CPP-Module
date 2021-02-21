#include "phonebook.hpp"

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

Contacts::Contacts()
{
}

Contacts::~Contacts()
{
}
/*
void	My_book::add_first_name()
{
	std::string = line;
	std::cout << "\x1b[95;1mFirst_name -> \x1b[0m";
	std::getline(std::cin, line);
	my_book[count]._first_name = line;
}
void	add_last_name(My_book my_book[8], int count);
void	add_nickname(My_book my_book[8], int count);
void	add_login(My_book my_book[8], int count);
void	add_postal_address(My_book my_book[8], int count);
void	add_email_address(My_book my_book[8], int count);
void	add_phone_number(My_book my_book[8], int count);
void	add_birthday_date(My_book my_book[8], int count);
void	add_favorite_meal(My_book my_book[8], int count);
void	add_underwear_color(My_book my_book[8], int count);
void	add_darkest_secret(My_book my_book[8], int count);
*/

void	Contacts::print_search()
{
	size_t	len;

	if ((len = this->_first_name.length()) <= 8)
	{
		for (size_t i = 0; i < (8 - len); i++)
			std::cout << " ";
		std::cout << this->_first_name << "|";
	}
	else
	{
		for (size_t i = 0; i < 8; i++)
			std::cout << this->_first_name[i];
		std::cout << ".|";
	}
	if ((len = this->_last_name.length()) <= 8)
	{
		for (size_t i = 0; i < (8 - len); i++)
			std::cout << " ";
		std::cout << this->_last_name << "|";
	}
	else
	{
		for (size_t i = 0; i < 8; i++)
			std::cout << this->_last_name[i];
		std::cout << ".|";
	}
	if ((len = this->_nickname.length()) <= 8)
	{
		for (size_t i = 0; i < (8 - len); i++)
			std::cout << " ";
		std::cout << this->_nickname << "|";
	}
	else
	{
		for (size_t i = 0; i < 8; i++)
			std::cout << this->_nickname[i];
		std::cout << ".|";
	}
}

void	My_book::search_in_mybook(Contacts *contacts)
{
	std::string	line;
	size_t		index;

	if (this->count == 0)
	{
		std::cout << "\x1b[31;1mI'm so sorry...\x1b[0m" << std::endl;
		std::cout << "\x1b[32;1mYour phonebook is empty...\x1b[0m" << std::endl;
		std::cout << "\x1b[33;1mBut u can ADD ur first friend!\x1b[0m" << std::endl;
	}
	else
	{
		std::cout << "\x1b[31;1m|     index|first_name| last_name|  nickname|\x1b[0m" << std::endl;
		for (size_t i = 0; i < this->count; i++)
		{
			std::cout << "|         " << i << "|" << std::endl;
			contacts[i].print_search();
			std::cout << std::endl;
		}
		std::cout << "\x1b[33;1m/////////////////////////////////////\x1b[0m" << std::endl;
		std::cout << "\x1b[95;1mWho do u need? -> \x1b[0m";
		std::getline(std::cin, line);
		index = std::stoi(line);
		if (index >= 0 || index <= this->count)
			contacts[index].print_contact();
		else
		{
			std::cout << "\x1b[31;1mOoops!\x1b[0m" << std::endl;
			std::cout << "\x1b[32;1mNo such contact!\x1b[0m" << std::endl;
			std::cout << "\x1b[33;1mLucky some other time!\x1b[0m" << std::endl;
		}
	}
}

void	My_book::add_in_mybook(/*Contacts contacts[8]*/)
{
	if (this->count == 8)
	{
		std::cout << "\x1b[31;1mYour phonebook is full!\x1b[0m" << std::endl;
		std::cout << "\x1b[32;1mRestart the program!\x1b[0m" << std::endl;
		std::cout << "\x1b[33;1mIf u want to create ur new phonebook!\x1b[0m" << std::endl;
	}
	else
	{
		//add_first_name()
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
	Contacts	contacts[8];

	my_welcom();
	while (1)
	{
		std::cout << "\x1b[95;1mWhat do u want?(-; -> \x1b[0m";
		std::getline(std::cin, line);
		if ("EXIT" == line)
			break;
		else if ("ADD" == line)
			my_book.add_in_mybook(/*contacts*/);
		else if ("SEARCH" == line)
			my_book.search_in_mybook(contacts);
	}
	return 0;
}
