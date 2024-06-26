/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 08:49:36 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/05 11:13:15 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	std::string	answer;
	std::cout << "Enter ADD, SEARCH or EXIT" << std::endl;
	PhoneBook phonebook;
	phonebook.set_nb_contacts(0);
	while (42)
	{
		std::getline (std::cin, answer);
		if (std::strcmp(answer.c_str(), "ADD") == 0)
			phonebook.add();
		if (std::strcmp(answer.c_str(), "SEARCH") == 0)
			phonebook.search();
		if (std::strcmp(answer.c_str(), "EXIT") == 0)
			break;
		else
			std::cout << "Enter ADD, SEARCH or EXIT" << std::endl;
	}
	return 0;
}