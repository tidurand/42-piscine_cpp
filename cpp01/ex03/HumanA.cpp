/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 08:27:47 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/02 09:14:34 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
	this->_name = name;
	this->weapon2 = weapon;
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void)
{
	std::cout << this->_name;
	std::cout << " attacks with their ";
	std::cout << weapon2.getType() << std::endl;
}