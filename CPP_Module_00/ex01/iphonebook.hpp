/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iphonebook.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heusebio <heusebio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 19:53:19 by heusebio          #+#    #+#             */
/*   Updated: 2021/03/11 19:40:39 by heusebio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IPHONEBOOK_H
# define IPHONEBOOK_H

#include <iostream>
#include <string>

class Contacts
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
	public:
		Contacts();
		~Contacts();
		void	print_search();
		void	print_contact();
		void	add_contact();
		void	add_info(std::string &info);
};

#endif
