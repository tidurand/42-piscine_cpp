/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:25:38 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/12 13:43:09 by tidurand         ###   ########.fr       */
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
	switch (type)
	{
	case CHAR:
		castChar(av[1]);
		break;
	case INT:
		castInt(av[1]);
		break;
	case FLOAT:
		castFloat(av[1]);
		break;
	case DOUBLE:
		castDouble(av[1]);
		break;
	
	default:
		std::cout << "not a type" << std::endl;
		break;
	}
	return 0;
}