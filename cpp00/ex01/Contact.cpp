/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:50:33 by tidurand          #+#    #+#             */
/*   Updated: 2022/03/30 09:39:04 by tidurand         ###   ########.fr       */
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

/*std::string	Contact::get_first_name(void) const
{
	return this->first_name;
}


void	Contact::set_first_name(std::string new_first_name)
{
	this->first_name = new_first_name;
}*/

void	Contact::display_contact(void) const
{
	std::cout << this->first_name << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << this->nickname << std::endl;
}

void	Contact::display_details(void) const
{
	std::cout << this->first_name << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->phone_number << std::endl;
	std::cout << this->darkest_secret << std::endl;
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
	std::cout << "Darkest secret :" << std::endl;
	std::cin >> this->darkest_secret;
}