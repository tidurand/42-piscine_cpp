/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:44:17 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/10 11:01:14 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat toto("Toto", 5);
	Bureaucrat a("A", 500);
	Bureaucrat b("B", 0);
	Bureaucrat c;

	try 
	{
		std::cout << toto << std::endl;
		toto.setGrade(75);
		std::cout << toto << std::endl;
		toto.decreaseGrade();
		std::cout << toto << std::endl;
		std::cout << c << std::endl;
		c.decreaseGrade();
		std::cout << c << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}