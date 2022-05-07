/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:39:44 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/07 04:52:33 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Default Constructor" << std::endl;
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
	(void)rhs;
	return *this;
}