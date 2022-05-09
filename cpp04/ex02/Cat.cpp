/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 01:45:27 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/07 02:36:34 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat Default Constructor" << std::endl;
	type = "Cat";
	brain = new Brain;
}

Cat::Cat(const Cat& src)
{
	std::cout << "Cat Copy constructor" << std::endl;
	type = src.type;
	brain = new Brain(*src.brain);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor" << std::endl;
	delete brain;
}

Cat & Cat::operator=(const Cat& rhs)
{
	std::cout << "Cat equal" << std::endl;
	type = rhs.type;
	if (this->brain)
		delete brain;
	brain = new Brain(*rhs.brain);
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}

Brain	*Cat::getBrain()
{
	return (this->brain);
}