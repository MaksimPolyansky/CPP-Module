#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string>
#include "iphonebook.hpp"

class My_book
{
	private:
		size_t		count;
	public:
		My_book();
		~My_book();
		void	add_in_mybook(Contacts contacts[8]);
		void	search_in_mybook(Contacts contacts[8]);
};

#endif
