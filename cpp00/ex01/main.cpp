/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 08:49:36 by tidurand          #+#    #+#             */
/*   Updated: 2022/03/31 15:02:34 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	char	answer[512];
	std::cout << "Enter ADD, SEARCH or EXIT" << std::endl;
	PhoneBook phonebook;
	phonebook.set_nb_contacts(0);
	while (42)
	{
		std::cin >> answer;
		if (std::strcmp(answer, "ADD") == 0)
		{
			//Contact contact;
			phonebook.add();
		}
		if (std::strcmp(answer, "SEARCH") == 0)
			phonebook.search();
		if (std::strcmp(answer, "EXIT") == 0)
			break;
		else
			std::cout << "Enter ADD, SEARCH or EXIT" << std::endl;
	}
	return 0;
}