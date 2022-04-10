/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:50:33 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/06 10:04:27 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(void)
{
}

Contact::~Contact()
{
}

int is_numeric(std::string str) {
   for (int i = 0; i < (int)str.length(); i++)
   {
      if (isdigit(str[i]) == 0)
         return 0;
   }
      return 1;
}

std::string	Contact::good_display(std::string str)
{
	if (str.length() > 10)
	{
		str = str.substr(0, 9);
		str = str + ".";
	}
	while (str.length() < 10)
	{
		str = " " + str;
	}
	return str;
}

void	Contact::display_contact(void)
{
	
	std::cout << good_display(this->_first_name) << "|";
	std::cout << good_display(this->_last_name) << "|";
	std::cout << good_display(this->_nickname) << std::endl;
}

void	Contact::display_details(void) const
{
	std::cout << "Firstname :" << this->_first_name << std::endl;
	std::cout << "Lastname :" << this->_last_name << std::endl;
	std::cout << "Nickname :" << this->_nickname << std::endl;
	std::cout << "Phone number :" << this->_phone_number << std::endl;
	std::cout << "Darkest secret :" << this->_darkest_secret << std::endl;
}

void	Contact::create(void)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
	
	while (first_name.empty())
	{
		std::cout << "Firstname :" << std::endl;
		std::getline (std::cin, first_name);
	}
	this->_first_name = first_name;
	while (last_name.empty())
	{
		std::cout << "Lastname :" << std::endl;
		std::getline (std::cin, last_name);
	}
	this->_last_name = last_name;
	while (nickname.empty())
	{
		std::cout << "Nickname :" << std::endl;
		std::getline (std::cin, nickname);
	}
	this->_nickname = nickname;
	while (phone_number.empty())
	{
		std::cout << "Phone number :" << std::endl;
		std::getline (std::cin, phone_number);
		while (is_numeric(phone_number) == 0)
		{
			std::cout << "Bad phone number" << std::endl;
			std::cout << "Phone number :" << std::endl;
			std::getline (std::cin, phone_number);
		}
	}
	this->_phone_number = phone_number;
	while (darkest_secret.empty())
	{
		std::cout << "Darkest secret :" << std::endl;
		std::getline (std::cin, darkest_secret);
	}
	this->_darkest_secret = darkest_secret;
}