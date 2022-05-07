/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 04:28:09 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/07 08:48:51 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal* cat = new Cat;
	Animal copy(*cat);
	cat->makeSound();
	copy.makeSound();
	std::cout << cat->getType() << std::endl;
	std::cout << copy.getType() << std::endl;
	delete cat;
	//delete copy;

}