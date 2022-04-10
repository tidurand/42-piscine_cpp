/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 08:19:59 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/09 17:19:21 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

const std::string	&Weapon::getType(void) const
{
	return this->_type;
}