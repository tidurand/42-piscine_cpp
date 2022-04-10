/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 08:25:10 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/09 09:49:38 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;
	void (Harl::*ptr)(std::string level);

	ptr = &Harl::complain;
	if (ac == 2)
	{
		std::string level = av[1];
		(harl.*ptr)(level);
	}
	else
		std::cout << "Bad arguments" << std::endl;
		
	return 0;
}