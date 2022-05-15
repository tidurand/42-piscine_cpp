/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 14:02:21 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/15 16:55:21 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span s(10);
	s.addNumber(10);
	s.addNumber(-5);
	s.addNumber(14);
	std::cout << s.longestSpan() << std::endl;
	std::cout << s.shortestSpan() << std::endl;

	Span numbers(20000);
	numbers.fillNumbers(20000, 50000);
	std::cout << numbers.longestSpan() << std::endl;
	std::cout << numbers.shortestSpan() << std::endl;

	try
	{
		Span a(3);
		a.addNumber(10);
		a.addNumber(-5);
		a.addNumber(14);
		a.addNumber(9);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Span b(1);
		b.addNumber(10);
		std::cout << b.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	Span cpy(numbers);
	std::cout << cpy.longestSpan() << std::endl;
	std::cout << cpy.shortestSpan() << std::endl;
	try
	{
		cpy.addNumber(1000);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}