/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:48:47 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/14 13:47:51 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>

int main(int, char**)
{
    Array<std::string> strs(3);
    strs[0] = "abc";
    strs[1] = "def";
    strs[2] = "ghi";
    std::cout << "size: " << strs.size() << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << strs[i] << ", ";
    }
    std::cout << std::endl;
    
    Array<int> numbers(10);
	std::cout << "size: " << numbers.size() << std::endl;
	srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        int value = rand() % 100;
        numbers[i] = value;
        std::cout << numbers[i] << ", ";
    }
    std::cout << std::endl;
    

    
    Array<int> copy(numbers);
    std::cout << "size: " << copy.size() << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << copy[i] << ", ";
    }
    std::cout << std::endl;
    

    
    Array<int> equal;
    equal = copy;
	std::cout << "size: " << equal.size() << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << equal[i] << ", ";
    }
    std::cout << std::endl;
    
    equal[0] = 101;
    copy[0] = 500;
    std::cout << equal[0] << std::endl;
    std::cout << copy[0] << std::endl;
    std::cout << numbers[0] << std::endl;
    
    try
    {
       numbers[-1] = 10;
       numbers[11] = 20;
    }
    catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
    return 0;
}
