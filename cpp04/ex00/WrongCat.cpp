/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 01:45:27 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/07 02:36:34 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat Default Constructor" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& src)
{
	std::cout << "WrongCat Copy constructor" << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat& rhs)
{
	std::cout << "WrongCat equal" << std::endl;
	type = rhs.type;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}