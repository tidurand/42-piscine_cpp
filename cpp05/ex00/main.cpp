/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:44:17 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/10 14:28:50 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try 
	{
		Bureaucrat toto("Toto", 5);
		// Bureaucrat a("A", 500);
		// Bureaucrat b("B", 0);
		Bureaucrat c;
		std::cout << toto << std::endl;
		toto.setGrade(75);
		std::cout << toto << std::endl;
		toto.decreaseGrade();
		std::cout << toto << std::endl;
		std::cout << c << std::endl;
		c.decreaseGrade();
		std::cout << c << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}