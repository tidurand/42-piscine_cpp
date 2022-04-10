/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:19:15 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/09 15:34:44 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed b (5.05f);
	Fixed c (42.42f);
	Fixed d (30);
	
	std::cout << "Incrementation" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl << std::endl;


	std::cout << "Operations" << std::endl;
	std::cout << b + c << std::endl;
	std::cout << d - c << std::endl;
	std::cout << b * d << std::endl;
	std::cout << d / d << std::endl << std::endl;

	std::cout << "Min, Max" << std::endl;
	std::cout << Fixed::max( a, c ) << std::endl;
	std::cout << Fixed::min( a, c ) << std::endl;
	return 0;
}