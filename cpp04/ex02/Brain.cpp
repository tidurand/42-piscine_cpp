/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:39:44 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/09 15:26:00 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Default Constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "Idea";
}

Brain::Brain(const Brain& src)
{
	std::cout << "Brain Copy constructor" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}

Brain & Brain::operator=(const Brain& rhs)
{
	std::cout << "Brain equal" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = rhs.ideas[i];
	return *this;
}

std::string Brain::getIdea(int nb)
{
	return ideas[nb];
}

void	Brain::setIdea(int nb, std::string idea)
{
	ideas[nb] = idea;
}