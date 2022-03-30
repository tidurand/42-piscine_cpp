/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:57:44 by tidurand          #+#    #+#             */
/*   Updated: 2022/03/30 09:45:00 by tidurand         ###   ########.fr       */
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

void	PhoneBook::add(void)
{
	if (nb_contacts < 8)
	{
		contact[nb_contacts].create();
		this->nb_contacts++;
	}
	else
		std::cout << "Too many contacts" << std::endl;
}

void	PhoneBook::search(void)
{
	std::cout << "Phonebook :" << std::endl;
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < nb_contacts; i++)
	{
		contact[i].display_contact();
	}
	
}
