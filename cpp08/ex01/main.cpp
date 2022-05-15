/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 14:02:21 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/15 15:35:51 by tidurand         ###   ########.fr       */
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
	return 0;
}