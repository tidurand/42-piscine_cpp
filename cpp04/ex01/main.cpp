/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 04:28:09 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/09 18:29:23 by tidurand         ###   ########.fr       */
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
		
	std::cout << std::endl << std::endl;
	
	Cat	a;
	Cat b(a);
	Cat c;
	
	std::cout << std::endl << std::endl;
	b.getBrain()->setIdea(0, "B");
	std::cout << a.getBrain()->getIdea(0) << std::endl;
	std::cout << b.getBrain()->getIdea(0) << std::endl;
	std::cout << c.getBrain()->getIdea(0) << std::endl;
	a.getBrain()->setIdea(0, "A");
	std::cout << a.getBrain()->getIdea(0) << std::endl;
	std::cout << b.getBrain()->getIdea(0) << std::endl;
	std::cout << c.getBrain()->getIdea(0) << std::endl;
	c = a;
	std::cout << c.getBrain()->getIdea(0) << std::endl;
	c.getBrain()->setIdea(0, "C");
	std::cout << a.getBrain()->getIdea(0) << std::endl;
	std::cout << c.getBrain()->getIdea(0) << std::endl;
	std::cout << std::endl << std::endl;
	
	return 0;
}