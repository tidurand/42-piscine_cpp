/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:25:38 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/11 18:24:37 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Bad arguments" << std::endl;
		return 0;
	}
	int type;
	
	type = searchType(av[1]);
	std::cout << type << std::endl; //DEBUG
	switch (type)
	{
	case 1:
		castChar(av[1]);
		break;
	case 2:
		castInt(av[1]);
		break;
	case 3:
		castFloat(av[1]);
		break;
	case 4:
		castDouble(av[1]);
		break;
	
	default:
		std::cout << "not a type" << std::endl;
		break;
	}
	return 0;
}