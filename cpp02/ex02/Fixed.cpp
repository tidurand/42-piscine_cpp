/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:20:50 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/09 15:20:36 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _nb(0)
{
}

Fixed::Fixed(int nb)
{
	_nb = nb << _bits;
}

Fixed::Fixed(float nb)
{
	_nb = round(nb * (1 << _bits));
}

Fixed::Fixed(const Fixed& src) 
{
	_nb = src.getRawBits();
}

Fixed::~Fixed()
{
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
	_nb = rhs.getRawBits();
	return *this;
}

Fixed Fixed::operator+(const Fixed& rhs) const
{
	return Fixed( toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed& rhs) const
{
	return Fixed( toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed& rhs) const
{
	return Fixed( toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed& rhs) const
{
	return Fixed( toFloat() / rhs.toFloat());
}

Fixed & Fixed::operator++(void)
{
	++_nb;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++(*this);
	return (temp);
}

Fixed & Fixed::operator--(void)
{
	--_nb;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--(*this);
	return (temp);
}

bool Fixed::operator>(const Fixed& rhs) const
{
	return (toFloat() > rhs.toFloat());
}

bool Fixed::operator<(const Fixed& rhs) const
{
	return (toFloat() < rhs.toFloat());
}

bool Fixed::operator>=(const Fixed& rhs) const
{
	return (toFloat() >= rhs.toFloat());
}

bool Fixed::operator<=(const Fixed& rhs) const
{
	return (toFloat() <= rhs.toFloat());
}

bool Fixed::operator==(const Fixed& rhs) const
{
	return (toFloat() == rhs.toFloat());
}

bool Fixed::operator!=(const Fixed& rhs) const
{
	return (toFloat() != rhs.toFloat());
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	else
		return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return a;
	else
		return b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	else
		return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return a;
	else
		return b;
}

std::ostream & operator<<(std::ostream& o, const Fixed& rhs)
{
	o << rhs.toFloat();
	return o;
}

int	Fixed::getRawBits(void) const
{
	return (_nb);
}

void	Fixed::setRawBits(int const raw)
{
	_nb = raw;
}