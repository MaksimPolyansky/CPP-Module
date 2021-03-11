/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heusebio <heusebio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 19:53:12 by heusebio          #+#    #+#             */
/*   Updated: 2021/03/11 19:29:23 by heusebio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	my_error();

#endif
