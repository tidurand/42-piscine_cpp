/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:57:44 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/08 16:29:39 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::set_nb_contacts(int new_nb_contacts)
{
	nb_contacts = new_nb_contacts;
}

void	PhoneBook::add(void)
{
	contact[nb_contacts % 8].create();
	nb_contacts++;
}

void	PhoneBook::search(void)
{
	if (nb_contacts == 0)
	{
		std::cout << "Phonebook empty" << std::endl;
		return;
	}
	std::cout << "Phonebook :" << std::endl;
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < nb_contacts && i < 8; i++)
	{
		std::cout << "         " << i + 1 << "|";
		contact[i].display_contact();
	}
	std::cout << "Which contact do you want to see ?" << std::endl;
	std::getline (std::cin, new_index);
	index = new_index.c_str()[0] - '0';
	while ((!(index <= nb_contacts && index > 0 && index <= 8)) || new_index.length() != 1)
	{
		std::cout << "Bad index" << std::endl;
		std::cout << "Which contact do you want to see ?" << std::endl;
		std::getline (std::cin, new_index);
		index = new_index.c_str()[0] - '0';
	}
	contact[index - 1].display_details();
}
