/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:20:50 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/09 13:18:32 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _nb(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int nb)
{
	std::cout << "Int constructor called" << std::endl;
	_nb = nb << _bits; //=nb *256
}

Fixed::Fixed(float nb)
{
	std::cout << "Float constructor called" << std::endl;
	_nb = round(nb * (1 << _bits)); // = *256 ou 2**8
}

Fixed::Fixed(const Fixed& src) 
{
	std::cout << "Copy constructor called" << std::endl;
	setRawBits(src._nb);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}



float	Fixed::toFloat(void) const
{
	return round(_nb) / (1 << _bits) ;
}

int	Fixed::toInt(void) const
{
	return _nb >> _bits;
}



Fixed & Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	setRawBits(rhs._nb);
	return *this;
}

std::ostream & operator<<(std::ostream& o, const Fixed& rhs)
{
	o << rhs.toFloat();
	return o;
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