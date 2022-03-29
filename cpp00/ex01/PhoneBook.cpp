/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:57:44 by tidurand          #+#    #+#             */
/*   Updated: 2022/03/29 13:56:47 by tidurand         ###   ########.fr       */
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

void	PhoneBook::print(void)
{
	std::cout << "Phonebook :" << std::endl;
	std::cout << "     index|first name| last name|  nickname" << std::endl;
}