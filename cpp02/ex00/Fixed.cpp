/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:20:50 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/09 11:22:15 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _nb(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src) 
{
	std::cout << "Copy constructor called" << std::endl;
	_nb = src.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	_nb = rhs.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_nb);
}

void	Fixed::setRawBits(int const raw)
{
	_nb = raw;
}