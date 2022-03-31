/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:57:44 by tidurand          #+#    #+#             */
/*   Updated: 2022/03/31 16:45:54 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook()
{
	return;
}

int	PhoneBook::get_nb_contacts(void) const
{
	return this->nb_contacts;
}


void	PhoneBook::set_nb_contacts(int new_nb_contacts)
{
	this->nb_contacts = new_nb_contacts;
}

void	PhoneBook::add(void)
{
	contact[nb_contacts % 8].create();
	if (this->nb_contacts < 8)
		this->nb_contacts++;
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
	for (int i = 0; i < nb_contacts; i++)
	{
		std::cout << "         " << i + 1 << "|";
		contact[i].display_contact();
	}
	std::cout << "Which contact do you want to see ?" << std::endl;
	std::cin >> this->index;
	if (index <= nb_contacts && index > 0)
		contact[index - 1].display_details();
	else
		std::cout << "Bad index" << std::endl;
}
