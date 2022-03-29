/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:50:33 by tidurand          #+#    #+#             */
/*   Updated: 2022/03/29 13:46:37 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Contact Constructor" << std::endl;
	return;
}

Contact::~Contact()
{
	std::cout << "Contact Destructor" << std::endl;
	return;
}

void	Contact::add(void)
{
	std::cout << "Firstname :" << std::endl;
	std::cin >> this->first_name;
	std::cout << "Lastname :" << std::endl;
	std::cin >> this->last_name;
	std::cout << "Nickname :" << std::endl;
	std::cin >> this->nickname;
	std::cout << "Phone number :" << std::endl;
	std::cin >> this->phone_number;
	std::cout << "Darkest secret :" << std::endl;
	std::cin >> this->darkest_secret;
}