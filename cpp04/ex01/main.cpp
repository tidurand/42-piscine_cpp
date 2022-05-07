/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 04:28:09 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/07 05:05:28 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* animal[10];
	for (int i = 0; i < 5; i++)
		animal[i] =  new Cat();
	for (int i = 5; i < 10; i++)
		animal[i] =  new Dog();
	for (int i = 0; i < 10; i++)
		delete animal[i];

}