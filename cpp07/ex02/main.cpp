/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:48:47 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/14 12:20:55 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>

int main(int, char**)
{
    Array<int> numbers(10);
	// srand(time(NULL));
    // for (int i = 0; i < 10; i++)
    // {
    //     int value = rand();
    //     numbers[i] = value;
    // }
	numbers[0] = 100;
	std::cout << numbers.size() << std::endl;
    return 0;
}