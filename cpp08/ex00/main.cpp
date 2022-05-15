/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 10:58:45 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/15 12:34:38 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	try
	{
		std::vector<int> v;
		for (int i = 0; i <= 10; i++)
			v.push_back(i);
		std::cout << "Vector :" << easyfind(v, 6) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}


	try
	{
		std::list<int> l;
		srand(time(0));
		for (int i = 0; i < 100; i++)
		{
			int value = rand() % 100;
			l.push_back(value);
		//	std::cout << value << ", ";
		}
		std::cout << std::endl;
		std::cout << "List :" << easyfind(l, 46) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}