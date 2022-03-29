/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 11:28:30 by tidurand          #+#    #+#             */
/*   Updated: 2022/03/29 11:51:05 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	(void)av;
	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
		{
			for (int j = 0; av[i][j]; j++)
			{
				if (av[i][j] >= 'a' && av[i][j] <= 'z')
				{
					char c = std::toupper(av[i][j]);
					std::cout << c;
				}
				else
					std::cout << av[i][j];
			}
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	else
    	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}
