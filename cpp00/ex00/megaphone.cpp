/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 11:28:30 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/05 11:11:42 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
		{
			std::string str = av[i];
			for (std::string::iterator j = str.begin(); j < str.end(); j++)
			{
				if (*j >= 'a' && *j <= 'z')
				{
					char c = std::toupper(*j);
					std::cout << c;
				}
				else
					std::cout << *j;
			}
		}
		std::cout << std::endl;
	}
	else
    	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}
