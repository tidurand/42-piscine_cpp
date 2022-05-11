/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:44:17 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/11 13:30:06 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
	try 
	{
		ShrubberyCreationForm a("tree");
		RobotomyRequestForm b("robot");
		PresidentialPardonForm c("president");

		Bureaucrat toto("TOTO", 5);
		Bureaucrat tutu("TUTU", 100);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		std::cout << toto << std::endl;
		std::cout << tutu << std::endl;
		c.beSigned(toto);
		std::cout << c << std::endl;
		toto.executeForm(c);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}