/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heusebio <heusebio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 19:53:24 by heusebio          #+#    #+#             */
/*   Updated: 2021/02/23 22:07:43 by heusebio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	Contacts::print_search()
{
	size_t	len;

	if ((len = this->_first_name.length()) <= 10)
	{
		for (size_t i = 0; i < (10 - len); i++)
			std::cout << " ";
		std::cout << this->_first_name << "\x1b[32;1m|\x1b[0m";
	}
	else
	{
		for (size_t i = 0; i < 9; i++)
			std::cout << this->_first_name[i];
		std::cout << "\x1b[32;1m.|\x1b[0m";
	}
	if ((len = this->_last_name.length()) <= 10)
	{
		for (size_t i = 0; i < (10 - len); i++)
			std::cout << " ";
		std::cout << this->_last_name << "\x1b[32;1m|\x1b[0m";
	}
	else
	{
		for (size_t i = 0; i < 9; i++)
			std::cout << this->_last_name[i];
		std::cout << "\x1b[32;1m.|\x1b[0m";
	}
	if ((len = this->_nickname.length()) <= 10)
	{
		for (size_t i = 0; i < (10 - len); i++)
			std::cout << " ";
		std::cout << this->_nickname << "\x1b[32;1m|\x1b[0m";
	}
	else
	{
		for (size_t i = 0; i < 9; i++)
			std::cout << this->_nickname[i];
		std::cout << "\x1b[32;1m.|\x1b[0m";
	}
}

void	Contacts::add_contact()
{
	std::cout << "\x1b[95;1mFirst_name -> \x1b[0m";
	std::getline(std::cin, this->_first_name);
	std::cout << "\x1b[95;1mLast_name -> \x1b[0m";
	std::getline(std::cin, this->_last_name);
	std::cout << "\x1b[95;1mNickname -> \x1b[0m";
	std::getline(std::cin, this->_nickname);
	std::cout << "\x1b[95;1mLogin -> \x1b[0m";
	std::getline(std::cin, this->_login);
	std::cout << "\x1b[95;1mPostal_address -> \x1b[0m";
	std::getline(std::cin, this->_postal_address);
	std::cout << "\x1b[95;1mEmail_address -> \x1b[0m";
	std::getline(std::cin, this->_email_address);
	std::cout << "\x1b[95;1mPhone_number -> \x1b[0m";
	std::getline(std::cin, this->_phone_number);
	std::cout << "\x1b[95;1mBirthday_date -> \x1b[0m";
	std::getline(std::cin, this->_birthday_date);
	std::cout << "\x1b[95;1mFavorite_meal -> \x1b[0m";
	std::getline(std::cin, this->_favorite_meal);
	std::cout << "\x1b[95;1mUnderwear_color -> \x1b[0m";
	std::getline(std::cin, this->_underwear_color);
	std::cout << "\x1b[95;1mDarkest_secret -> \x1b[0m";
	std::getline(std::cin, this->_darkest_secret);
}

void	Contacts::print_contact()
{
	std::cout << "\x1b[31;1mFirst_name: \x1b[0m" << this->_first_name << std::endl;
	std::cout << "\x1b[32;1mLast_name: \x1b[0m" << this->_last_name << std::endl;
	std::cout << "\x1b[33;1mNickname: \x1b[0m" << this->_nickname << std::endl;
	std::cout << "\x1b[31;1mLogin: \x1b[0m" << this->_login << std::endl;
	std::cout << "\x1b[32;1mPostal_address: \x1b[0m" << this->_postal_address << std::endl;
	std::cout << "\x1b[33;1mEmail_address: \x1b[0m" << this->_email_address << std::endl;
	std::cout << "\x1b[31;1mPhone_number: \x1b[0m" << this->_phone_number << std::endl;
	std::cout << "\x1b[32;1mBirthday_date: \x1b[0m" << this->_birthday_date << std::endl;
	std::cout << "\x1b[33;1mFavorite_meal: \x1b[0m" << this->_favorite_meal << std::endl;
	std::cout << "\x1b[31;1mUnderwear_color: \x1b[0m" << this->_underwear_color << std::endl;
	std::cout << "\x1b[32;1mDarkest_secret: \x1b[0m" << this->_darkest_secret << std::endl;
}

void	My_book::search_in_mybook(Contacts contacts[8])
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
			std::cout << "\x1b[32;1m|         \x1b[0m" << i << "\x1b[32;1m|\x1b[0m";
			contacts[i].print_search();
			std::cout << std::endl;
		}
		std::cout << "\x1b[33;1m/////////////////////////////////////////////\x1b[0m" << std::endl;
		std::cout << "\x1b[95;1mWho do u need? -> \x1b[0m";
		std::getline(std::cin, line);
		if (line.empty() || (line != "0" && line != "1" && line != "2" && line != "3" && line != "4" \
		 && line != "5" && line != "6" && line != "7"))
		{
			std::cout << "\x1b[31;1mOoops!\x1b[0m" << std::endl;
			std::cout << "\x1b[32;1mI need number 0-7!\x1b[0m" << std::endl;
			std::cout << "\x1b[33;1mLucky some other time!\x1b[0m" << std::endl;
			return;
		}
		index = std::stoi(line);
		if (index >= 0 && index < this->count)
			contacts[index].print_contact();
		else
		{
			std::cout << "\x1b[31;1mOoops!\x1b[0m" << std::endl;
			std::cout << "\x1b[32;1mBad number!\x1b[0m" << std::endl;
			std::cout << "\x1b[33;1mLucky some other time!\x1b[0m" << std::endl;
			return;
		}
	}
}

void	My_book::add_in_mybook(Contacts contacts[8])
{
	if (this->count == 8)
	{
		std::cout << "\x1b[31;1mYour phonebook is full!\x1b[0m" << std::endl;
		std::cout << "\x1b[32;1mRestart the program!\x1b[0m" << std::endl;
		std::cout << "\x1b[33;1mIf u want to create ur new phonebook!\x1b[0m" << std::endl;
	}
	else
	{
		contacts[this->count].add_contact();
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
			my_book.add_in_mybook(contacts);
		else if ("SEARCH" == line)
			my_book.search_in_mybook(contacts);
	}
	return 0;
}
