/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 01:45:27 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/07 02:36:34 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog Default Constructor" << std::endl;
	type = "Dog";
	brain = new Brain;
}

Dog::Dog(const Dog& src)
{
	std::cout << "Dog Copy constructor" << std::endl;
	type = src.type;
	brain = new Brain(*src.brain);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
	delete brain;
}

Dog & Dog::operator=(const Dog& rhs)
{
	std::cout << "Dog equal" << std::endl;
	type = rhs.type;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Ouaf" << std::endl;
}