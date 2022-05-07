/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 01:45:27 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/07 04:50:32 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal Default Constructor" << std::endl;
}

Animal::Animal(const Animal& src)
{
	std::cout << "Animal Copy constructor" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor" << std::endl;
}

Animal & Animal::operator=(const Animal& rhs)
{
	std::cout << "Animal equal" << std::endl;
	type = rhs.type;
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << "Animal Sound" << std::endl;
}

std::string	Animal::getType() const
{
	return type;
}