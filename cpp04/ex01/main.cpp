/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 04:28:09 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/09 15:28:43 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal *animal[6];

	for (int i = 0; i < 3; i++)
		animal[i] = new Cat;
	for (int i = 3; i < 6; i++)
		animal[i] = new Dog;
	for (int i = 0; i < 6; i++)
		delete animal[i];

	Cat	a;
	Cat b(a);
	Cat c;

	std::cout << a.getIdea[0] << std::endl;
	
	return 0;
}