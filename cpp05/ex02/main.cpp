/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:44:17 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/11 10:32:40 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
	try 
	{
		ShrubberyCreationForm abc("tree");
		Bureaucrat toto("TOTO", 15);
		std::cout << abc << std::endl;
		std::cout << toto << std::endl;
		abc.beSigned(toto);
		std::cout << abc << std::endl;
		abc.create_tree();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}