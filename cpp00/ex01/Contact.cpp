/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:50:33 by tidurand          #+#    #+#             */
/*   Updated: 2022/03/31 16:53:50 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact()
{
	return;
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
	
	std::cout << good_display(this->first_name) << "|";
	std::cout << good_display(this->last_name) << "|";
	std::cout << good_display(this->nickname) << std::endl;
}

void	Contact::display_details(void) const
{
	std::cout << "Firstname :" << this->first_name << std::endl;
	std::cout << "Lastname :" << this->last_name << std::endl;
	std::cout << "Nickname :" << this->nickname << std::endl;
	std::cout << "Phone number :" << this->phone_number << std::endl;
	std::cout << "Darkest secret :" << this->darkest_secret << std::endl;
}

void	Contact::create(void)
{
	std::cout << "Firstname :" << std::endl;
	std::cin >> this->first_name;
	std::cout << "Lastname :" << std::endl;
	std::cin >> this->last_name;
	std::cout << "Nickname :" << std::endl;
	std::cin >> this->nickname;
	std::cout << "Phone number :" << std::endl;
	std::cin >> this->phone_number;
	while (is_numeric(this->phone_number) == 0)
	{
		std::cout << "Bad phone number" << std::endl;
		std::cout << "Phone number :" << std::endl;
		std::cin >> this->phone_number;
	}
	std::cout << "Darkest secret :" << std::endl;
	std::cin >> this->darkest_secret;
}