/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 01:45:27 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/07 02:36:34 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat Default Constructor" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& src)
{
	std::cout << "Cat Copy constructor" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor" << std::endl;
}

Cat & Cat::operator=(const Cat& rhs)
{
	std::cout << "Cat equal" << std::endl;
	type = rhs.type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}