/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:44:17 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/11 08:47:15 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	try 
	{
		Bureaucrat toto("Toto", 5);
		Form abc("abc", 5, 5);
		std::cout << toto << std::endl;
		std::cout << abc << std::endl;
	//	abc.beSigned(toto);
		toto.signForm(abc);
		Form def("def", 4, 5);
		def.beSigned(toto);
		toto.signForm(def);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}